//
// Generated file, do not edit! Created by opp_msgtool 6.0 from JobMessage.msg.
//

#ifndef __LOADBALANCING_JOBMESSAGE_M_H
#define __LOADBALANCING_JOBMESSAGE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif


namespace loadbalancing {

class JobMsg;

}  // namespace loadbalancing


namespace loadbalancing {

/**
 * Class generated from <tt>JobMessage.msg:19</tt> by opp_msgtool.
 * <pre>
 * message JobMsg
 * {
 *     float time_to_execute;
 * }
 * </pre>
 */
class JobMsg : public ::omnetpp::cMessage
{
  protected:
    float time_to_execute = 0;

  private:
    void copy(const JobMsg& other);

  protected:
    bool operator==(const JobMsg&) = delete;

  public:
    JobMsg(const char *name=nullptr, short kind=0);
    JobMsg(const JobMsg& other);
    virtual ~JobMsg();
    JobMsg& operator=(const JobMsg& other);
    virtual JobMsg *dup() const override {return new JobMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual float getTime_to_execute() const;
    virtual void setTime_to_execute(float time_to_execute);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const JobMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, JobMsg& obj) {obj.parsimUnpack(b);}


}  // namespace loadbalancing


namespace omnetpp {

template<> inline loadbalancing::JobMsg *fromAnyPtr(any_ptr ptr) { return check_and_cast<loadbalancing::JobMsg*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __LOADBALANCING_JOBMESSAGE_M_H

