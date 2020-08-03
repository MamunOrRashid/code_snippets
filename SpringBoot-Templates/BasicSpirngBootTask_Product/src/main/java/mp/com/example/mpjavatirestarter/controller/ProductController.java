package mp.com.example.mpjavatirestarter.controller;

import mp.com.example.mpjavatirestarter.model.Product;
import mp.com.example.mpjavatirestarter.services.ProductServices;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.servlet.ModelAndView;

import java.util.List;

@Controller
public class ProductController {

    @Autowired
    ProductServices productServices;//ProductServicesImp should add @Service otherwise productService is invalid.

    @GetMapping(value = "/all")
    public ModelAndView getAllProduct(){
        ModelAndView modelAndView = new ModelAndView("ProductsView");
        List<Product> productList = productServices.getAllProduct();
        modelAndView.addObject("products", productList);
        return modelAndView;
    }

    @GetMapping(value = "/new")
    public ModelAndView addProduct(){
        ModelAndView modelAndView = new ModelAndView("Edit");
        Product product = new Product();
        modelAndView.addObject("product", product);
        return modelAndView;
    }

    @PostMapping(value = "/save")
    public ModelAndView saveProduct(@ModelAttribute("product") Product productNew){
        productServices.saveProduct(productNew);
        return new ModelAndView("redirect:/all");
    }

    @GetMapping(value = "/edit/{id}")
    public ModelAndView editProduct(@PathVariable("id") Long id){
        Product product = productServices.findByProductId(id);
        ModelAndView modelAndView = new ModelAndView("Edit");
        modelAndView.addObject("product",product);
        return modelAndView;
    }

    @GetMapping(value = "/delete/{id}")
    public ModelAndView deleteProduct(@PathVariable("id") Long id){
        productServices.deleteByProductId(id);
        return new ModelAndView("redirect:/all");
    }


}
