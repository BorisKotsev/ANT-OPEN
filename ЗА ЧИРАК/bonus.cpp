#include <iostream>

using namespace std;

int main()
{
    int fruitSize = 114;
    string fruits[] = {"ackee","ambarella","apple","apricot","avocado","banana","bilberry","blackberry","blackcurrant","blueberry","boysenberry","breadfruit","cactus","cantaloupe","cempedak","chayote","cherimoya","cherry","coconut","crabapple","cranberry","cucumber","currant","damson","date","durian","elderberry","feijoa","fig","gojiberry","gooseberry","grape","grapefruit","guava","gubinge","gulkand","hackberry","honeyberry","huckleberry","huito","imbe","jackfruit","jambul","jatobá","jujube","karonda","kiwano","kumquat","kundong","langsat","lemon","lime","lychee","macadamia","mango","mangaba","mangosteen","marionberry","matoa","medlar","mulberry","muscadine","nageia","nance","noni","olive","orange","orangelo","papaya","pawpaw","passionfruit","peach","pear","pepino","persimmon","pitaya","plantain","plum","poha berry","pomegranate","pomelo","pulasan","quince","raisin","ramadan","rambutan","raspberry","rhubarb","salak","salal berry","salmonberry","sapodilla","sapote","sapucaia","satsuma","soursop","starapple","strawberry","tamarillo","tamarind","tangerine","tarap","tayberry","tomato","umbu","ugni","vanilla","watermelon","wineberry","wood apple","yantok","yangmei","yuzu","zalzalak"};

    cout << "FRUITS: " << endl;
    for(int i = 0; i < fruitSize; i ++)
    {
        cout << i << ": " << fruits[i] << endl;
    }
    cout << endl;

    int vegetableSize = 61;
    string vegetables[] = {"acorn", "alfalfa", "artichoke", "arugula", "asparagus", "bamboo", "bean", "beet", "bell", "bitter", "broccoli", "brussels", "cabbage", "carrot", "cauliflower", "celeriac", "celery", "chard", "chayote", "chicory", "collard", "corn", "cucumber", "daikon", "endive", "fennel", "garlic", "ginger", "green", "horseradish", "jicama", "kale", "kohlrabi", "leek", "lettuce", "mushroom", "okra", "onion", "parsley", "parsnip", "pea", "potato", "pumpkin", "radish", "rhubarb", "rutabaga", "shallot", "snap", "snow", "soybean", "spinach", "squash", "sweet", "swiss", "tomatillo", "tomato", "turnip", "watercress", "water", "yam", "zucchini"};

    cout << "VEGETABLES: " << endl;
    for(int i = 0; i < vegetableSize; i ++)
    {
        cout << i << ": " << vegetables[i] << endl;
    }
    cout << endl;

    int countrySize = 179;
    string countries[] = { "afghanistan", "albania", "algeria", "andorra", "angola", "antigua", "argentina", "armenia", "australia", "austria", "azerbaijan", "bahamas", "bahrain", "bangladesh", "barbados", "belarus", "belgium", "belize", "benin", "bhutan", "bolivia", "bosnia", "botswana", "brazil", "brunei", "bulgaria", "burkina", "burundi", "cabo", "cambodia", "cameroon", "canada", "central", "chad", "chile", "china", "colombia", "comoros", "congo", "costa", "croatia", "cuba", "cyprus", "czechia", "denmark", "djibouti", "dominica", "dominican", "ecuador", "egypt", "equatorial", "eritrea", "estonia", "eswatini", "ethiopia", "fiji", "finland", "france", "gabon", "gambia", "georgia", "germany", "ghana", "greece", "grenada", "guatemala", "guinea", "guyana", "haiti", "holy", "honduras", "hungary", "iceland", "india", "indonesia", "iran", "iraq", "ireland", "israel", "italy", "jamaica", "japan", "jordan", "kazakhstan", "kenya", "kiribati", "kuwait", "kyrgyzstan", "laos", "latvia", "lebanon", "lesotho", "liberia", "libya", "liechtenstein", "lithuania", "luxembourg", "madagascar", "malawi", "malaysia", "maldives", "mali", "malta", "marshall", "mauritania", "mauritius", "mexico", "micronesia", "moldova", "monaco", "mongolia", "montenegro", "morocco", "mozambique", "myanmar", "namibia", "nauru", "nepal", "netherlands", "nicaragua", "niger", "nigeria", "north", "norway", "oman", "pakistan", "palau", "panama", "papua", "paraguay", "peru", "philippines", "poland", "portugal", "qatar", "romania", "russia", "rwanda", "saint", "samoa", "saudi-arabia", "senegal", "serbia", "seychelles", "sierra", "singapore", "slovakia", "slovenia", "solomon", "somalia", "south", "spain", "sudan", "suriname", "sweden", "switzerland", "syria", "tajikistan", "tanzania", "thailand", "timor-leste", "togo", "tonga", "trinidad", "tunisia", "turkey", "turkmenistan", "tuvalu", "uganda", "ukraine", "united", "uruguay", "uzbekistan", "vanuatu", "venezuela", "vietnam", "yemen", "zambia", "zimbabwe"};

    cout << "COUNTRIES: " << endl;
    for(int i = 0; i < countrySize; i ++)
    {
        cout << i << ": " << countries[i] << endl;
    }
    cout << endl;

    return 0;
}
