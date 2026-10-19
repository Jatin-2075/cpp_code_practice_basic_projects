#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <string>
#include <ctime>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

struct product{
    int productid;
    string name;
    string category;
};

struct order{
    int orderid;
    int productid;
    int quantity;
    string customerid;
    time_t oderdate;
};

int main(){
    vector<product> products = {
        {101, "laptop", "electronics"},
        {102, "smartphone", "kitchen"},
        {103, "coffee maker", "kitchen"},
        {104, "blender", "kitchen"},
        {105, "ddesk lamp", "home"},
    };

    deque<string> recentcustomer = {"c001", "c002", "c003"};

    recentcustomer.push_back("c004");
    recentcustomer.push_front("c005");

    list<order> orderhistory;

    orderhistory.push_back({1, 101, 1, "c001", time(0)});
    orderhistory.push_back({2, 103, 3, "c001", time(0)});
    orderhistory.push_back({3, 102, 2, "c004", time(0)});

    set<string>categories;
    for(const auto &product : products){
        categories.insert(product.category);
    };

    map<int, int> productstock = {
        {101, 10},
        {102, 39},
        {103, 23},
        {104, 5},
        {105, 7},
    };

    multimap<string, order>customerorders;
    for(const auto &order : orderhistory){
        customerorders.insert({order.customerid, order});
    };

    unordered_map<string, string> customerdata = {
        {"c001", "alice"},
        {"coo2", "sam"},
        {"c003", "jatin"},
        {"c004", "hitesh"},
        {"c005", "harry"},
    };

    unordered_set<int> uniqueproductids;
    for(const auto &product : products){
        uniqueproductids.insert(product.productid);
    };

    cout << "\nCustomer Orders:\n";

    for (const auto &entry : customerorders) {
        const string &custId = entry.first;
        const order &ord = entry.second;

        cout << "Customer ID: " << custId
             << " | Order ID: " << ord.orderid
             << " | Product ID: " << ord.productid
             << " | Quantity: " << ord.quantity
             << " | Order Time: " << ctime(&ord.oderdate);
}

    return 0;


}