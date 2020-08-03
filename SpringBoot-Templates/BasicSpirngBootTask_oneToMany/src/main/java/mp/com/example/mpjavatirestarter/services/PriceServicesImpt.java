package mp.com.example.mpjavatirestarter.services;


import mp.com.example.mpjavatirestarter.model.Price;
import mp.com.example.mpjavatirestarter.repository.PriceRepo;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

@Service
@Transactional
public class PriceServicesImpt implements PriceServices {

    @Autowired
    PriceRepo priceRepo;


    @Override
    public List<Price> getAllPrice() {
        return priceRepo.findAll();
    }

    @Override
    public void savePrice(Price priceNew) {
        priceRepo.save(priceNew);
    }

    @Override
    public void deleteByPriceId(Long id) {
        priceRepo.deleteById(id);
    }

    @Override
    public Price findByPriceId(Long id) {
        return priceRepo.getOne(id);
    }
}
