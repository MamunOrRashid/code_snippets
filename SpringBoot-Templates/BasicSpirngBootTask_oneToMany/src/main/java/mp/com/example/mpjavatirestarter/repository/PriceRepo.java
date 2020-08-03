package mp.com.example.mpjavatirestarter.repository;

import mp.com.example.mpjavatirestarter.model.Price;
import org.springframework.data.jpa.repository.JpaRepository;

public interface PriceRepo extends JpaRepository<Price, Long> {

}
