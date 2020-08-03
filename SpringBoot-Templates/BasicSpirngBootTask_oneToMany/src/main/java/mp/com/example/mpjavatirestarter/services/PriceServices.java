package mp.com.example.mpjavatirestarter.services;

import mp.com.example.mpjavatirestarter.model.Price;

import java.util.List;

public interface PriceServices {
    List<Price> getAllPrice();

    void savePrice(Price priceNew);

    void deleteByPriceId(Long id);

    Price findByPriceId(Long id);
}
