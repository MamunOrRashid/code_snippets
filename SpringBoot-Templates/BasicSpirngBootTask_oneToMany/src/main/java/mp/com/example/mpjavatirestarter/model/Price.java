package mp.com.example.mpjavatirestarter.model;

import javax.persistence.*;


@Entity
@Table(name = "Price")
public class Price {

    @Id
    private Long priceId;
    private String priceArea ;

    @ManyToOne(fetch = FetchType.LAZY)
    Product product;


    public Long getPriceId() {
        return priceId;
    }

    public void setPriceId(Long priceId) {
        this.priceId = priceId;
    }

    public String getPriceArea() {
        return priceArea;
    }

    public void setPriceArea(String priceArea) {
        this.priceArea = priceArea;
    }

    public Product getProduct() {
        return product;
    }

    public void setProduct(Product product) {
        this.product = product;
    }
}
