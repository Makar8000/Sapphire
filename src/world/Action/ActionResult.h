#pragma once

#include <ForwardsZone.h>
#include <Common.h>

namespace Sapphire::World::Action
{
  /*!
   * @brief A container for the computed result of an effect on a single actor. Used to apply damage/healing dealt
   * at a later point in time.
   */
  class ActionResult
  {
  public:
    explicit ActionResult( Entity::CharaPtr target, uint64_t delayMs );

    void damage( uint32_t amount, Common::ActionHitSeverityType severity, Common::ActionResultFlag flag = Common::ActionResultFlag::None );
    void heal( uint32_t amount, Common::ActionHitSeverityType severity, Common::ActionResultFlag flag = Common::ActionResultFlag::None );
    void restoreMP( uint32_t amount, Common::ActionResultFlag flag = Common::ActionResultFlag::None );
    void startCombo( uint16_t actionId );
    void comboSucceed();
    void applyStatusEffect( uint16_t statusId, uint8_t param );
    void mount( uint16_t mountId );

    Entity::CharaPtr getTarget() const;

    uint64_t getDelay();

    const Common::CalcResultParam& getCalcResultParam() const;

    void execute();

  private:
    uint64_t m_delayMs;

    Entity::CharaPtr m_target;

    Common::CalcResultParam m_result;

  };
}