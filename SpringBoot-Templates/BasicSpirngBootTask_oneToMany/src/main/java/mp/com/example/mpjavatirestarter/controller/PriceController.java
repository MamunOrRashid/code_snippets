package mp.com.example.mpjavatirestarter.controller;

import mp.com.example.mpjavatirestarter.model.Price;
import mp.com.example.mpjavatirestarter.model.Product;
import mp.com.example.mpjavatirestarter.services.PriceServices;
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
public class PriceController {

    @Autowired
    PriceServices priceServices;

    @Autowired
    ProductServices productServices;

    @GetMapping(value = "/allPrice")
    public ModelAndView getAllPrice(){
        ModelAndView modelAndView = new ModelAndView("Prices");
        List<Price> priceList = priceServices.getAllPrice();
        modelAndView.addObject("prices", priceList);
        return modelAndView;
    }


    @GetMapping(value = "/newPrice")
    public ModelAndView addPrice(){
        ModelAndView modelAndView = new ModelAndView("PriceForm");
        Price price = new Price();
        modelAndView.addObject("price", price);
        return modelAndView;
    }

    @PostMapping(value = "/savePrice")
    public ModelAndView savePrice(@ModelAttribute("price") Price price){
        Product product = productServices.findByProductId(price.getProduct().getProductId());

        System.out.println("product ID in price: " + price.getProduct().getProductId());
        System.out.println("product ID in product: " + product.getProductId());

        if(product!=null){
            price.setProduct(product);
            priceServices.savePrice(price);
            return new ModelAndView("redirect:/allPrice");
        }
        else{
            return new ModelAndView("redirect:/allPrice");
        }
    }

    @GetMapping(value = "/editPrice/{id}")
    public ModelAndView editPrice(@PathVariable("id") Long id){
        Price price = priceServices.findByPriceId(id);
        ModelAndView modelAndView = new ModelAndView("PriceForm");
        modelAndView.addObject("price",price);
        return modelAndView;
    }

    @GetMapping(value = "/deletePrice/{id}")
    public ModelAndView deletePrice(@PathVariable("id") Long id){
        priceServices.deleteByPriceId(id);
        return new ModelAndView("redirect:/allPrice");
    }

}
