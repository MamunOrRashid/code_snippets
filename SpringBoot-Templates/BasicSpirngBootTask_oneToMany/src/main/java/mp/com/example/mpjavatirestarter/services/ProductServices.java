package mp.com.example.mpjavatirestarter.services;

import mp.com.example.mpjavatirestarter.model.Product;

import java.util.List;

public interface ProductServices {


    List<Product> getAllProduct();

    void saveProduct(Product product);

    Product findByProductId(Long id);
    void deleteByProductId(Long id);
}
