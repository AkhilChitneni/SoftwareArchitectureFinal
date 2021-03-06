#include "CoreSession.h"
#include "..\AppPartOps\DelMeBadPattern.h"

CoreSession::CoreSession()
{

}

CoreSession::~CoreSession() {
    std::cout << "Goodbye, I was the CoreSession.\n";
}

/**
 * The subscription management methods.
 */
void CoreSession::Attach(IObserver* observer)  {
    m_listObserver.push_back(observer);
}
void CoreSession::Detach(IObserver* observer)  {
    m_listObserver.remove(observer);
}
void CoreSession::NotifyAll()  {
    std::list<IObserver*>::iterator iterator = m_listObserver.begin();
    HowManyObserver();
    while (iterator != m_listObserver.end()) {
        (*iterator)->Update(m_message);
        ++iterator;
    }
}


void CoreSession::HowManyObserver() {
    std::cout << "There are " << m_listObserver.size() << " observers in the list.\n";
}


void CoreSession::ClearObservers()
{

}
