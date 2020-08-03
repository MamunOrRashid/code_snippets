package mp.com.example.mpjavatirestarter.services;

import mp.com.example.mpjavatirestarter.model.Product;
import mp.com.example.mpjavatirestarter.repository.ProductRepo;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;
@Service
@Transactional
public class ProductServicesImp implements ProductServices {

    @Autowired
    ProductRepo productRepo;


    @Override
    public List<Product> getAllProduct() {
        return productRepo.findAll();
    }

    @Override
    public void saveProduct(Product product) {
        productRepo.save(product);
    }

    @Override
    public Product findByProductId(Long id) {
        return productRepo.getOne(id);
    }

    @Override
    public void deleteByProductId(Long id) {
        productRepo.deleteById(id);
    }
}
