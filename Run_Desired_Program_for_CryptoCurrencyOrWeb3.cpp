#include <iostream>
using namespace std;
    void Website()
    {
        int input;
        std::cout << "\n 1. Blockchain \n 2. Jaxx Liberty \n 3. MetaMask \n 4. KuCoin \n 5. Infamous Binance \n 6. Coin Market Cap \n 7. Coin Geko \n 8. For Technical Analysis - Trading View \n 9. CoinDesk \n 10. CoinTelegraph \n 11. CoinMarketCal \n 12. Janet Yellen \n 13. Investopedia \n 12. Best trading and exchange - Bitget \n Input listed Website Number 1, so on: Remember this program only startup the Website. \n Enter (1-12):" << std::endl;
        std::cin >> input;
        switch (input)
        {
        case 1:
            std::cout << "1. Blockchain.com Opened on your Browser" << std::endl;
            system("start https://www.blockchain.com/");
            break;
        case 2:
            std::cout << "2.Jaxx Liberty: Blockchain Wallet on your Browser" << std::endl;
            system("start https://www.jaxxwallet.io/");
            break;
        case 3:
            std::cout << "3. MetaMask - A Crypto wallent and gateway to blockchain apps on your browser" << std::endl;
            system("start https://metamask.io/");
            break;
        case 4:
            std::cout << "4. KuCoin - Website on your Browser" << std::endl;
            system("start https://www.kucoin.com/ucenter/signin");
            break;
        case 5:
            std::cout << "5. Infamous Binance Account Login" << std::endl;
            system("start https://accounts.binance.com/en/login?return_to=aHR0cHM6Ly93d3cuYmluYW5jZS5jb20vZW4vbXkvZGFzaGJvYXJk");
            break;
        case 6:
            std::cout << "6. To get rates - Coin Market Cap" << std::endl;
            system("start https://coinmarketcap.com/");
            break;
        case 7:
            std::cout << "7. To get Rates - Coin Geko" << std::endl;
            system("start https://coinmarketcap.com/");
            break;
        case 8:
            std::cout << "8. For Technical Analysis - TradingView Important to study to learn loss and Profit." << std::endl;
            system("start https://www.tradingview.com/");
            break;
        case 9:
            std::cout << "9. For Crypto News - CoinDesk" << std::endl;
            system("start https://www.coindesk.com/");
            break;
        case 10:
            std::cout << "10. For Crypto News - CoinTelegraph" << std::endl;
            system("start https://cointelegraph.com/");
            break;
        case 11:
            std::cout << "11. For Crypto News - CoinMarketCal" << std::endl;
            system("start https://coinmarketcal.com/en/");
            break;
        case 12:
            std::cout << "12. 78th Secretary of the Treasury - Janet Yellen Twitter, Important figure for Bitcoin." << std::endl;
            system("start https://twitter.com/SecYellen");
            break;
        case 13:
            std::cout << "13. For News - Investopedia" << std::endl;
            system("start https://www.investopedia.com/");
            break;
        case 14:
            std::cout << "14. Best trading and exchange - Bitget on your browser" << std::endl;
            system("start https://www.bitget.com/en/");
            break;
        default:
           break;
        }
    }
int main()
{
    std::cout << "version:0.0.1-crypto_Websites" << std::endl;
    std::cout << "\n This Program will help you to quickly startup the Website which are related to Crypto Currency, Web 3.0 etc." << std::endl;
    std::cout << "\t List of website related to cryto can be run with the help of this program." << std::endl;
    Website();
    main();
}