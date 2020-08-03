package mp.com.example.mpjavatirestarter.repository;

import mp.com.example.mpjavatirestarter.model.Product;
import org.springframework.data.jpa.repository.JpaRepository;

public interface ProductRepo extends JpaRepository<Product, Long> {
}
