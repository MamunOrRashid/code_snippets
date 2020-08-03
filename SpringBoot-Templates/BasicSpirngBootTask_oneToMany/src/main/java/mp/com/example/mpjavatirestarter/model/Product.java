package mp.com.example.mpjavatirestarter.model;


import javax.persistence.*;
import java.util.HashSet;
import java.util.Set;

@Entity
@Table(name="Product")
public class Product {

    @Id
    private Long productId;
    private String productName;

    @OneToMany(fetch = FetchType.LAZY,
            orphanRemoval = true,
            mappedBy = "product",
            cascade = CascadeType.ALL)
    private Set<Price> pricesHashSet = new HashSet<Price>();


    public Long getProductId() {
        return productId;
    }

    public void setProductId(Long productId) {
        this.productId = productId;
    }

    public String getProductName() {
        return productName;
    }

    public void setProductName(String productName) {
        this.productName = productName;
    }

    public Set<Price> getPricesHashSet() {
        return pricesHashSet;
    }

    public void setPricesHashSet(Set<Price> pricesHashSet) {
        this.pricesHashSet = pricesHashSet;
    }
}
