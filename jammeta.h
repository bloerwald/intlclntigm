struct UserClientLFGListUpdateRequest
{
  /*  0..  1*/ STRUCT info;
  /*508..  1*/ STRUCT ticket;
};
struct PlayerCliEndBattlegroundCheat
{
  /*  0..  1*/ INT32 winner;
};
struct ClientHealthUpdate
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ INT32 health;
};
struct PlayerCliStartConversation
{
  /*  0..  1*/ INT32 conversationID;
};
struct JamSpellCastData
{
  /*  0..  1*/ UINT64 casterGUID;
  /*  8..  1*/ UINT64 casterUnit;
  /* 10..  1*/ UINT8 castID;
  /* 14..  1*/ INT32 spellID;
  /* 18..  1*/ UINT32 castFlags;
  /* 1c..  1*/ UINT32 castFlagsEx;
  /* 20..  1*/ UINT32 castTime;
  /* 28..  1*/ Array<UINT64> hitTargets;
  /* 40..  1*/ Array<UINT64> missTargets;
  /* 58..  1*/ Array<JamSpellMissStatus> missStatus;
  /* 70..  1*/ STRUCT target;
  /*148..  1*/ Array<JamSpellPowerData> remainingPower;
  /*160..  1*/ Optional<JamRuneData> remainingRunes;
  /*188..  1*/ STRUCT missileTrajectory;
  /*190..  1*/ STRUCT ammo;
  /*198..  1*/ Optional<JamProjectileVisual> projectileVisual;
  /*1a4..  1*/ UINT8 destLocSpellCastIndex;
  /*1a8..  1*/ Array<JamLocation> targetPoints;
  /*1c0..  1*/ STRUCT immunities;
  /*1c8..  1*/ STRUCT predict;
};
struct UserClientCalendarEventModeratorStatus
{
  /*  0..  1*/ UINT64 inviteID;
  /*  8..  1*/ UINT64 eventID;
  /* 10..  1*/ UINT64 guid;
  /* 18..  1*/ UINT64 moderatorID;
  /* 20..  1*/ UINT8 status;
};
struct UserClientGMDestroyCorpse
{
  /*  0..  1*/ STRING name;
};
struct PlayerCliNextCinematicCamera
{
};
struct PlayerMoveStartStrafeRight
{
  /*  0..  1*/ STRUCT status;
};
struct PlayerCliSetExplore
{
  /*  0..  1*/ UINT32 areaID;
};
struct CliChatMessageAfk
{
  /*  0..  1*/ STRING text;
};
struct UserClientConnectToFailed
{
  /*  0..  1*/ UINT32 serial;
  /*  4..  1*/ INT8 con;
};
struct JamCliQuestInfo
{
  /*  0..  1*/ INT32 m_questId;
  /*  4..  1*/ INT32 m_questType;
  /*  8..  1*/ INT32 m_questLevel;
  /*  c..  1*/ INT32 m_questPackageID;
  /* 10..  1*/ INT32 m_questMinLevel;
  /* 14..  1*/ INT32 m_questSortID;
  /* 18..  1*/ INT32 m_questInfoID;
  /* 1c..  1*/ INT32 m_suggestedGroupNum;
  /* 20..  1*/ INT32 m_rewardNextQuest;
  /* 24..  1*/ INT32 m_rewardXPDifficulty;
  /* 28..  1*/ INT32 m_rewardMoney;
  /* 2c..  1*/ INT32 m_rewardMoneyDifficulty;
  /* 30..  1*/ INT32 m_rewardBonusMoney;
  /* 34..  1*/ INT32 m_rewardDisplaySpell;
  /* 38..  1*/ INT32 m_rewardSpell;
  /* 3c..  1*/ INT32 m_rewardHonor;
  /* 40..  1*/ FLOAT m_rewardKillHonor;
  /* 44..  1*/ INT32 m_startItem;
  /* 48..  1*/ INT32 m_flags;
  /* 4c..  1*/ INT32 m_flagsEx;
  /* 50..  1*/ INT32 m_POIContinent;
  /* 54..  1*/ FLOAT m_POIx;
  /* 58..  1*/ FLOAT m_POIy;
  /* 5c..  1*/ INT32 m_POIPriority;
  /* 60..  1*/ STRING m_logTitle;
  /*260..  1*/ STRING m_logDescription;
  /*e18..  1*/ STRING m_questDescription;
  /*19d0..  1*/ STRING m_areaDescription;
  /*1bd0..  1*/ INT32 m_rewardTitle;
  /*1bd4..  1*/ INT32 m_rewardTalents;
  /*1bd8..  1*/ INT32 m_rewardArenaPoints;
  /*1bdc..  1*/ INT32 m_rewardSkillLineID;
  /*1be0..  1*/ INT32 m_rewardNumSkillUps;
  /*1be4..  1*/ INT32 m_portraitGiver;
  /*1be8..  1*/ INT32 m_portraitTurnIn;
  /*1bec..  1*/ STRING m_portraitGiverText;
  /*1fec..  1*/ STRING m_portraitGiverName;
  /*20ec..  1*/ STRING m_portraitTurnInText;
  /*24ec..  1*/ STRING m_portraitTurnInName;
  /*25ec..  1*/ STRING m_questCompletionLog;
  /*2dec..  1*/ INT32 m_rewardFactionFlags;
  /*2df0..  1*/ INT32 m_acceptedSoundKitID;
  /*2df4..  1*/ INT32 m_completeSoundKitID;
  /*2df8..  1*/ INT32 m_areaGroupID;
  /*2dfc..  1*/ INT32 m_timeAllowed;
  /*2e00..  1*/ Array<JamCliQuestInfoObjective> m_objectives;
  /*2e18..  1*/ FixedArray<INT32, 4> m_rewardItems;
  /*2e28..  1*/ FixedArray<INT32, 4> m_rewardAmount;
  /*2e38..  1*/ FixedArray<INT32, 4> m_itemDrop;
  /*2e48..  1*/ FixedArray<INT32, 4> m_itemDropQuantity;
  /*2e58..  1*/ FixedArray<JamCliQuestInfoChoiceItem, 6> m_unfilteredChoiceItems;
  /*2ea0..  1*/ FixedArray<INT32, 5> m_rewardFactionID;
  /*2eb4..  1*/ FixedArray<INT32, 5> m_rewardFactionValue;
  /*2ec8..  1*/ FixedArray<INT32, 5> m_rewardFactionOverride;
  /*2edc..  1*/ FixedArray<INT32, 4> m_rewardCurrencyID;
  /*2eec..  1*/ FixedArray<INT32, 4> m_rewardCurrencyQty;
};
struct PlayerCliAuctionRemoveItem
{
  /*  0..  1*/ UINT64 auctioneer;
  /*  8..  1*/ INT32 auctionItemID;
};
struct ClientGarrisonLearnSpecializationResult
{
  /*  0..  1*/ INT32 result;
  /*  4..  1*/ INT32 garrSpecID;
};
struct PlayerCliQueryPetition
{
  /*  0..  1*/ UINT64 itemGUID;
  /*  8..  1*/ UINT32 petitionID;
};
struct ClientCooldownCheat
{
  /*  0..  1*/ UINT64 guid;
};
struct ClientAllAccountCriteria
{
  /*  0..  1*/ Array<JamCriteriaProgress> progress;
};
struct ClientMoveDisableTransitionBetweenSwimAndFly
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct JamSpellLogPowerData
{
  /*  0..  1*/ INT32 powerType;
  /*  4..  1*/ INT32 amount;
};
struct PlayerCliDeleteAccountAchievements
{
};
struct UserClientSetActionButton
{
  /*  0..  1*/ UINT64 action;
  /*  8..  1*/ UINT8 index;
};
struct PlayerCliCompleteCinematic
{
};
struct PlayerCliMailTakeItem
{
  /*  0..  1*/ UINT64 mailbox;
  /*  8..  1*/ INT32 attachID;
  /*  c..  1*/ INT32 mailID;
};
struct ClientPlayTimeWarning
{
  /*  0..  1*/ UINT32 flags;
  /*  4..  1*/ INT32 remaining;
};
struct SpellHealPrediction
{
  /*  0..  1*/ UINT64 beaconGUID;
  /*  8..  1*/ INT32 points;
  /*  c..  1*/ UINT8 type;
};
struct CliChatMessageDnd
{
  /*  0..  1*/ STRING text;
};
struct UserClientGMSurveySubmit
{
  /*  0..  1*/ Array<JamClientGMSurveyQuestion> surveyQuestion;
  /* 18..  1*/ INT32 surveyID;
  /* 1c..  1*/ STRING comment;
};
struct PlayerCliDebugActionsStop
{
};
struct PlayerCliItemUpgradeCheat
{
  /*  0..  1*/ INT32 itemID;
  /*  4..  1*/ INT32 itemUpgradeID;
};
struct ClientGmCharacterSaveSuccess
{
  /*  0..  1*/ NOT_IMPLEMENTED profileData;
};
struct JamSpellCastLogData
{
  /*  0..  1*/ INT32 health;
  /*  4..  1*/ INT32 attackPower;
  /*  8..  1*/ INT32 spellPower;
  /* 10..  1*/ Array<JamSpellLogPowerData> powerData;
};
struct ClientQuestGiverQuestFailed
{
  /*  0..  1*/ INT32 questID;
  /*  4..  1*/ INT32 reason;
};
struct UserClientWardenData
{
  /*  0..  1*/ NOT_IMPLEMENTED packet;
};
struct UserClientUndeleteCharacter
{
  /*  0..  1*/ UINT64 characterGuid;
  /*  8..  1*/ INT32 clientToken;
};
struct PlayerCliAreaSpiritHealerQueue
{
  /*  0..  1*/ UINT64 healerGuid;
};
struct UserClientProfileDataRequest
{
  /*  0..  1*/ BOOL run;
};
struct CliChatChannelVoiceOn
{
  /*  0..  1*/ STRING channelName;
};
struct UserClientBattlePetSetCollar
{
  /*  0..  1*/ INT32 collarItemID;
  /*  4..  1*/ UINT8 slotIndex;
};
struct PlayerCliForceSayCheat
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ INT32 textID;
};
struct UserClientAcceptGuildInvite
{
};
struct ClientShowNeutralPlayerFactionSelectUI
{
};
struct UserClientClearPaidService
{
  /*  0..  1*/ UINT64 characterGUID;
};
struct ClientMoveUnroot
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct JamLfgPlayerQuestRewardItem
{
  /*  0..  1*/ INT32 itemID;
  /*  4..  1*/ INT32 quantity;
};
struct UserClientSetTimeWalkerDungeon
{
  /*  0..  1*/ INT32 lfgDungeonID;
};
struct ClientAreaTriggerNoCorpse
{
};
struct PlayerCliBattlemasterJoinArenaSkirmish
{
  /*  0..  1*/ UINT8 roles;
  /*  1..  1*/ UINT8 bracket;
  /*  2..  1*/ BOOL joinAsGroup;
};
struct PlayerCliSetDeathBindPoint
{
};
struct JamCliMovementAck
{
  /*  0..  1*/ STRUCT status;
  /* a8..  1*/ UINT32 ackIndex;
};
struct UserClientDelFriend
{
  /*  0..  1*/ STRUCT player;
};
struct PlayerCliGarrisonAddFollowerXPCheat
{
  /*  0..  1*/ UINT64 followerDBID;
  /*  8..  1*/ INT32 xpAmount;
};
struct ClientChatReconnect
{
};
struct JamPeriodicAuraLogEffectDebugInfo
{
  /*  0..  1*/ FLOAT critRollMade;
  /*  4..  1*/ FLOAT critRollNeeded;
};
struct UserClientCalendarEventInvite
{
  /*  0..  1*/ UINT64 moderatorID;
  /*  8..  1*/ BOOL isSignUp;
  /*  9..  1*/ BOOL creating;
  /* 10..  1*/ UINT64 eventID;
  /* 18..  1*/ STRING name;
};
struct UserRouterClientSuspendTokenResponse
{
  /*  0..  1*/ UINT32 sequence;
};
struct UserClientDebugShowRatings
{
};
struct ClientSetupCurrency
{
  /*  0..  1*/ Array<ClientSetupCurrencyRecord> data;
};
struct PlayerCliDebugAreaTriggers
{
  /*  0..  1*/ BOOL enable;
};
struct CliChatChannelDisplayList
{
  /*  0..  1*/ STRING channelName;
};
struct UserClientAddAccountLicense
{
  /*  0..  1*/ INT64 bpayLicenseGroupID;
};
struct PlayerCliQuestGiverStatusQuery
{
  /*  0..  1*/ UINT64 questGiverGUID;
};
struct GlobalGMSetLFGuildRecruitComment
{
  /*  0..  1*/ UINT64 playerGUID;
  /*  8..  1*/ STRING comment;
  /*408..  1*/ UINT64 guildGUID;
};
struct ClientInstanceSaveCreated
{
  /*  0..  1*/ BOOL gm;
};
struct ClientSORStartExperienceIncomplete
{
};
struct PlayerCliSetAccountCriteria
{
  /*  0..  1*/ UINT64 quantity;
  /*  8..  1*/ INT32 criteriaID;
};
struct ClientXPGainEnabled
{
  /*  0..  1*/ BOOL enabled;
};
struct ClientMoveSplineSetSwimSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
};
struct UserClientDFLeave
{
  /*  0..  1*/ STRUCT ticket;
};
struct JamPeriodicAuraLogEffect
{
  /*  0..  1*/ INT32 effect;
  /*  4..  1*/ INT32 amount;
  /*  8..  1*/ INT32 overHealOrKill;
  /*  c..  1*/ INT32 schoolMaskOrPower;
  /* 10..  1*/ INT32 absorbedOrAmplitude;
  /* 14..  1*/ INT32 resisted;
  /* 18..  1*/ BOOL crit;
  /* 19..  1*/ BOOL multistrike;
  /* 1c..  1*/ Optional<JamPeriodicAuraLogEffectDebugInfo> debugInfo;
};
struct PlayerMoveJump
{
  /*  0..  1*/ STRUCT status;
};
struct PlayerCliServerInfoQuery
{
  /*  0..  1*/ STRING category;
};
struct PlayerMoveSetSwimBackSpeedCheat
{
  /*  0..  1*/ FLOAT speed;
};
struct ClientCharacterUpgradeAborted
{
  /*  0..  1*/ UINT64 characterGUID;
};
struct PlayerCliSpawnedMOCheat
{
  /*  0..  1*/ FLOAT angle;
  /*  4..  1*/ BOOL enabled;
  /*  5..  1*/ STRING fileName;
  /* 48..  1*/ V3 pos;
  /* 54..  1*/ UINT32 spawnedMOIndex;
};
struct JamGuildCriteriaProgress
{
  /*  0..  1*/ INT32 criteriaID;
  /*  8..  1*/ TIME_T dateCreated;
  /* 10..  1*/ TIME_T dateStarted;
  /* 18..  1*/ TIME_T dateUpdated;
  /* 20..  1*/ UINT64 quantity;
  /* 28..  1*/ UINT64 playerGUID;
  /* 30..  1*/ INT32 flags;
};
struct ClientWaitQueueFinish
{
};
struct UserClientQueryCorpseTransport
{
  /*  0..  1*/ UINT64 transport;
};
struct JamClientSpellLogMissEntry
{
  /*  0..  1*/ UINT64 victim;
  /*  8..  1*/ UINT8 missReason;
  /*  c..  1*/ Optional<JamClientSpellLogMissDebug> debug;
};
struct UserClientDFSetComment
{
  /*  0..  1*/ STRUCT ticket;
  /* 18..  1*/ STRING comment;
};
struct ClientUITime
{
  /*  0..  1*/ TIME_T time;
};
struct PlayerCliQueryVoidStorage
{
  /*  0..  1*/ UINT64 npc;
};
struct JamCliCUFProfile
{
  /*  0..  1*/ STRING name;
  /* 80..  1*/ UINT16 frameHeight;
  /* 82..  1*/ UINT16 frameWidth;
  /* 84..  1*/ UINT8 sortBy;
  /* 85..  1*/ UINT8 healthText;
  /* 86..  1*/ BOOL keepGroupsTogether;
  /* 87..  1*/ BOOL displayPets;
  /* 88..  1*/ BOOL displayMainTankAndAssist;
  /* 89..  1*/ BOOL displayHealPrediction;
  /* 8a..  1*/ BOOL displayAggroHighlight;
  /* 8b..  1*/ BOOL displayOnlyDispellableDebuffs;
  /* 8c..  1*/ BOOL displayPowerBar;
  /* 8d..  1*/ BOOL displayBorder;
  /* 8e..  1*/ BOOL useClassColors;
  /* 8f..  1*/ BOOL horizontalGroups;
  /* 90..  1*/ BOOL displayNonBossDebuffs;
  /* 91..  1*/ BOOL dynamicPosition;
  /* 92..  1*/ UINT8 topPoint;
  /* 93..  1*/ UINT8 bottomPoint;
  /* 94..  1*/ UINT8 leftPoint;
  /* 96..  1*/ UINT16 topOffset;
  /* 98..  1*/ UINT16 bottomOffset;
  /* 9a..  1*/ UINT16 leftOffset;
  /* 9c..  1*/ BOOL locked;
  /* 9d..  1*/ BOOL shown;
  /* 9e..  1*/ BOOL autoActivate2Players;
  /* 9f..  1*/ BOOL autoActivate3Players;
  /* a0..  1*/ BOOL autoActivate5Players;
  /* a1..  1*/ BOOL autoActivate10Players;
  /* a2..  1*/ BOOL autoActivate15Players;
  /* a3..  1*/ BOOL autoActivate25Players;
  /* a4..  1*/ BOOL autoActivate40Players;
  /* a5..  1*/ BOOL autoActivateSpec1;
  /* a6..  1*/ BOOL autoActivateSpec2;
  /* a7..  1*/ BOOL autoActivatePvP;
  /* a8..  1*/ BOOL autoActivatePvE;
};
struct UserClientBattlePetDeletePetCheat
{
  /*  0..  1*/ UINT64 battlePetGUID;
};
struct UserClientSetLootMethod
{
  /*  0..  1*/ UINT64 master;
  /*  8..  1*/ INT32 threshold;
  /*  c..  1*/ UINT8 method;
  /*  d..  1*/ UINT8 partyIndex;
};
struct ClientChatServerMessage
{
  /*  0..  1*/ STRING stringParam;
  /*404..  1*/ INT32 messageID;
};
struct UserClientCalendarAddEvent
{
  /*  0..  1*/ UINT32 maxSize;
  /*  8..  1*/ STRUCT eventInfo;
};
struct JamSpellProcsPerMinuteCalc
{
  /*  0..  1*/ INT32 m_type;
  /*  4..  1*/ INT32 m_param;
  /*  8..  1*/ FLOAT m_coeff;
  /*  c..  1*/ FLOAT input;
  /* 10..  1*/ FLOAT newValue;
};
struct UserClientGmNuke
{
  /*  0..  1*/ STRING name;
};
struct PlayerCliPetAction
{
  /*  0..  1*/ UINT64 petGUID;
  /*  8..  1*/ UINT64 targetGUID;
  /* 10..  1*/ V3 actionPosition;
  /* 1c..  1*/ UINT32 action;
};
struct GlobalGuildQueryRecipes
{
  /*  0..  1*/ UINT64 guildGUID;
};
struct UserClientRequestRatedBattlefieldInfo
{
};
struct UserClientGMShowLabel
{
  /*  0..  1*/ INT32 op;
  /*  4..  1*/ STRING targetName;
};
struct ClientPreRessurect
{
  /*  0..  1*/ UINT64 playerGUID;
};
struct ClientQuestGiverStatusMultiple
{
  /*  0..  1*/ Array<QuestGiverStatus> questGiver;
};
struct PlayerCliSetIgnoreRealmBundlePorts
{
  /*  0..  1*/ BOOL value;
};
struct ClientSpellProcsPerMinuteLog
{
  /*  0..  1*/ STRUCT logData;
  /* 60..  1*/ UINT64 guid;
  /* 68..  1*/ UINT64 targetGUID;
};
struct CliChatChannelSetOwner
{
  /*  0..  1*/ STRING name;
  /*132..  1*/ STRING channelName;
};
struct ClientMoveUpdateRunSpeed
{
  /*  0..  1*/ STRUCT status;
  /* a8..  1*/ FLOAT speed;
};
struct UserClientLoadingScreenNotify
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ BOOL showing;
};
struct PlayerCliOptOutOfLoot
{
  /*  0..  1*/ BOOL optOutOfLoot;
};
struct ClientChatDown
{
};
struct JamCliRaidMarkerData
{
  /*  0..  1*/ UINT64 transportGUID;
  /*  8..  1*/ INT32 mapID;
  /*  c..  1*/ V3 position;
};
struct PlayerCliChoiceResponse
{
  /*  0..  1*/ INT32 choiceID;
  /*  4..  1*/ INT32 responseID;
};
struct ClientGuildEventPlayerJoined
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ STRING name;
  /* 3c..  1*/ UINT32 virtualRealmAddress;
};
struct JamCliAreaTriggerSphere
{
  /*  0..  1*/ FLOAT radius;
  /*  4..  1*/ FLOAT radiusTarget;
};
struct ClientAccountCriteriaUpdate
{
  /*  0..  1*/ STRUCT progress;
};
struct PlayerCliCancelGrowthAura
{
};
struct JamCommentatorInstance
{
  /*  0..  1*/ UINT32 mapID;
  /*  4..  1*/ JAMSERVERSPEC worldServer;
  /* 10..  1*/ UINT64 instanceID;
  /* 18..  1*/ UINT32 status;
  /* 20..  1*/ FixedArray<JamCommentatorTeam, 2> teams;
};
struct PlayerViolenceLevel
{
  /*  0..  1*/ INT8 violenceLevel;
};
struct ClientClearSpellCharges
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ INT32 category;
};
struct CliChatChannelOwner
{
  /*  0..  1*/ STRING channelName;
};
struct ClientGMAccountOnlineResponse
{
  /*  0..  1*/ UINT64 playerGuid;
  /*  8..  1*/ UINT32 accountID;
};
struct PlayerChoiceResponseReward
{
  /*  0..  1*/ INT32 titleID;
  /*  4..  1*/ INT32 packageID;
  /*  8..  1*/ INT32 skillLineID;
  /*  c..  1*/ UINT32 skillPointCount;
  /* 10..  1*/ UINT32 arenaPointCount;
  /* 14..  1*/ UINT32 honorPointCount;
  /* 18..  1*/ UINT64 money;
  /* 20..  1*/ UINT32 xp;
  /* 28..  1*/ Array<PlayerChoiceResponseRewardEntry> items;
  /* 40..  1*/ Array<PlayerChoiceResponseRewardEntry> currencies;
  /* 58..  1*/ Array<PlayerChoiceResponseRewardEntry> factions;
  /* 70..  1*/ Array<PlayerChoiceResponseRewardEntry> itemChoices;
};
struct ClientPlayerSaveGuildEmblem
{
  /*  0..  1*/ INT32 error;
};
struct PlayerCliCancelMasterLootRoll
{
  /*  0..  1*/ UINT64 object;
  /*  8..  1*/ UINT8 lootListID;
};
struct ClientClearLossOfControl
{
};
struct UserClientRequestRaidInfo
{
};
struct ClientSceneObjectPetBattleReplacementsMade
{
  /*  0..  1*/ STRUCT msgData;
  /* 58..  1*/ UINT64 sceneObjectGUID;
};
struct JamInvItem
{
  /*  0..  1*/ UINT8 containerSlot;
  /*  1..  1*/ UINT8 slot;
};
struct UserClientCommentatorEnterInstance
{
  /*  0..  1*/ UINT64 instanceID;
  /*  8..  1*/ UINT32 mapID;
  /*  c..  1*/ INT32 difficultyID;
  /* 10..  1*/ JAMSERVERSPEC worldServer;
};
struct ClientBarberShopResult
{
  /*  0..  1*/ INT32 result;
};
struct PlayerCliUnlearnSpell
{
  /*  0..  1*/ INT32 spellID;
};
struct ClientGarrisonMissionBonusRollResult
{
  /*  0..  1*/ INT32 result;
  /*  4..  1*/ BOOL rollSucceeded;
  /*  8..  1*/ INT32 missionRecID;
  /* 10..  1*/ STRUCT mission;
  /* 50..  1*/ INT32 bonusIndex;
};
struct PlayerCliTaxiEnableAllNodes
{
};
struct PlayerCliGmVision
{
  /*  0..  1*/ BOOL enable;
};
struct ClientConnectionAuthChallenge
{
  /*  0..  1*/ UINT32 challenge;
  /*  4..  1*/ FixedArray<UINT32, 8> dosChallenge;
  /* 24..  1*/ UINT8 dosZeroBits;
};
struct ClientInitialSetup
{
  /*  0..  1*/ UINT8 serverExpansionTier;
  /*  1..  1*/ UINT8 serverExpansionLevel;
  /*  8..  1*/ TIME_T raidOrigin;
  /* 10..  1*/ Array<UINT8> questsCompleted;
  /* 28..  1*/ INT32 serverRegionID;
};
struct UserClientSetRealmSelector
{
  /*  0..  1*/ STRING realmName;
};
struct CliChatChannelModerate
{
  /*  0..  1*/ STRING channelName;
};
struct ClientMoveSplineDisableGravity
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct UserClientBattlePayAckFailedResponse
{
  /*  0..  1*/ UINT32 serverToken;
};
struct ClientScenarioProgressUpdate
{
  /*  0..  1*/ STRUCT progress;
};
struct UserClientEnumCharacters
{
};
struct UserClientSetPVPSeasonGames
{
  /*  0..  1*/ UINT32 numWon;
  /*  4..  1*/ INT32 season;
  /*  8..  1*/ UINT32 numPlayed;
  /*  c..  1*/ UINT8 bracket;
};
struct ClientServerBuckData
{
  /*  0..  1*/ UINT8 clusterID;
  /*  4..  1*/ INT32 captureTime;
  /*  8..  1*/ UINT32 requestID;
  /* 10..  1*/ Array<JamServerBuckDataList> data;
};
struct PlayerCliSpawnAllResearchLocsCheat
{
  /*  0..  1*/ UINT32 fieldID;
};
struct UserClientGMGrantAchievement
{
  /*  0..  1*/ INT32 achievementID;
  /*  8..  1*/ UINT64 guid;
  /* 10..  1*/ STRING target;
};
struct JamLootRequest
{
  /*  0..  1*/ UINT64 object;
  /*  8..  1*/ UINT8 lootListID;
};
struct PlayerCliChangeBagSlotFlag
{
  /*  0..  1*/ BOOL on;
  /*  4..  1*/ UINT32 flagToChange;
  /*  8..  1*/ UINT32 bagIndex;
};
struct ClientQueryGuildInfoResponse
{
  /*  0..  1*/ UINT64 guildGuid;
  /*  8..  1*/ BOOL allow;
  /* 10..  1*/ STRUCT info;
};
struct ClientDisenchantCredit
{
  /*  0..  1*/ UINT64 disenchanter;
  /*  8..  1*/ STRUCT item;
};
struct ClientGuildEventNewLeader
{
  /*  0..  1*/ UINT32 newLeaderVirtualRealmAddress;
  /*  4..  1*/ UINT32 oldLeaderVirtualRealmAddress;
  /*  8..  1*/ STRING newLeaderName;
  /* 40..  1*/ UINT64 newLeaderGUID;
  /* 48..  1*/ BOOL selfPromoted;
  /* 50..  1*/ UINT64 oldLeaderGUID;
  /* 58..  1*/ STRING oldLeaderName;
};
struct ClientDebugDrawSetGraphFrameAt
{
  /*  0..  1*/ INT32 y;
  /*  4..  1*/ UINT32 id;
  /*  8..  1*/ INT32 x;
  /*  c..  1*/ UINT32 height;
  /* 10..  1*/ UINT32 width;
};
struct PetSpellHistory
{
  /*  0..  1*/ INT32 categoryID;
  /*  4..  1*/ INT32 recoveryTime;
  /*  8..  1*/ INT8 consumedCharges;
};
struct ClientDurabilityDamageDeath
{
  /*  0..  1*/ INT32 percent;
};
struct PlayerCliSetFactionCheat
{
  /*  0..  1*/ UINT32 factionID;
  /*  4..  1*/ INT32 level;
};
struct CliChatChannelVoiceOff
{
  /*  0..  1*/ STRING channelName;
};
struct CliChatChannelModerator
{
  /*  0..  1*/ STRING channelName;
  /* 80..  1*/ STRING name;
};
struct ClientLootContents
{
  /*  0..  1*/ UINT64 lootObj;
  /*  8..  1*/ UINT64 owner;
  /* 10..  1*/ Array<JamLootItem> items;
};
struct ClientReportPvPPlayerAFKResult
{
  /*  0..  1*/ UINT64 offender;
  /*  8..  1*/ UINT8 numPlayersIHaveReported;
  /*  9..  1*/ UINT8 numBlackMarksOnOffender;
  /*  a..  1*/ UINT8 result;
};
struct PlayerCliPetitionShowSignatures
{
  /*  0..  1*/ UINT64 item;
};
struct ClientGarrisonPlotPlaced
{
  /*  0..  1*/ STRUCT plotInfo;
};
struct PlayerCliQueryQuestInfo
{
  /*  0..  1*/ UINT64 questGiver;
  /*  8..  1*/ UINT32 questID;
};
struct ClientResetWeeklyCurrency
{
};
struct ClientCancelSpellVisual
{
  /*  0..  1*/ UINT64 source;
  /*  8..  1*/ INT32 spellVisualID;
};
struct PlayerCliScenarioResume
{
};
struct ClientSetItemChallengeModeData
{
  /*  0..  1*/ UINT64 itemGUID;
  /*  8..  1*/ FixedArray<INT32, 6> stats;
};
struct UserClientCheckRAFEmailEnabled
{
};
struct ClientAuctionOutbidNotification
{
  /*  0..  1*/ STRUCT info;
  /* 70..  1*/ UINT64 bidAmount;
  /* 78..  1*/ UINT64 minIncrement;
};
struct PlayerCliDeclinePetition
{
  /*  0..  1*/ UINT64 petitionGUID;
};
struct ClientUpdateLastInstance
{
  /*  0..  1*/ UINT32 mapID;
};
struct GdfSimPlayer
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ FLOAT gdfRating;
  /*  c..  1*/ FLOAT gdfVariance;
  /* 10..  1*/ INT32 personalRating;
  /* 14..  1*/ BOOL team;
};
struct ClientGuildNameChanged
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ STRING guildName;
};
struct ClientSetItemPurchaseData
{
  /*  0..  1*/ UINT32 purchaseTime;
  /*  4..  1*/ UINT32 flags;
  /*  8..  1*/ STRUCT contents;
  /* 60..  1*/ UINT64 itemGUID;
};
struct CliChatChannelUnmoderator
{
  /*  0..  1*/ STRING channelName;
  /* 80..  1*/ STRING name;
};
struct UserClientBFMgrEntryInviteResponse
{
  /*  0..  1*/ UINT64 queueID;
  /*  8..  1*/ BOOL acceptedInvite;
};
struct ClientDebugDrawBox
{
  /*  0..  1*/ UINT32 id;
  /*  4..  1*/ UINT32 color;
  /*  8..  1*/ FLOAT lifetime;
  /*  c..  1*/ V3 extents;
  /* 18..  1*/ V4 matrix30;
  /* 28..  1*/ UINT32 settings;
  /* 2c..  1*/ V4 matrix10;
  /* 3c..  1*/ V4 matrix20;
  /* 4c..  1*/ V4 matrix00;
};
struct ClientSetAnimTier
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ INT32 tier;
};
struct PlayerCliPetBattleRequestPVP
{
  /*  0..  1*/ STRUCT location;
  /* 30..  1*/ UINT64 opponentCharacterID;
};
struct JamCliSupportTicketChatLine
{
  /*  0..  1*/ TIME_T timestamp;
  /*  8..  1*/ STRING text;
};
struct ClientLFGJoinResult
{
  /*  0..  1*/ UINT8 result;
  /*  8..  1*/ Array<ClientLFGBlackList> blackList;
  /* 20..  1*/ UINT8 resultDetail;
  /* 28..  1*/ STRUCT ticket;
};
struct ClientPlaySpellVisual
{
  /*  0..  1*/ UINT64 source;
  /*  8..  1*/ UINT64 target;
  /* 10..  1*/ UINT16 missReason;
  /* 14..  1*/ INT32 spellVisualID;
  /* 18..  1*/ BOOL speedAsTime;
  /* 1a..  1*/ UINT16 reflectStatus;
  /* 1c..  1*/ FLOAT travelSpeed;
  /* 20..  1*/ V3 targetPosition;
};
struct ClientQuestCompletionNPCResponse
{
  /*  0..  1*/ Array<JamQuestCompletionNPC> questCompletionNPCs;
};
struct ClientPetActionSound
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ INT32 action;
};
struct UserClientGetPVPOptionsEnabled
{
};
struct PlayerCliTrainerList
{
  /*  0..  1*/ UINT64 trainerGUID;
};
struct GlobalBlackMarketEndAuctionsCheat
{
  /*  0..  1*/ INT32 marketID;
};
struct JamImmigrantHostSearchLog
{
  /*  0..  1*/ UINT64 partyMember;
  /*  8..  1*/ BOOL isLeader;
  /*  c..  1*/ UINT32 realm;
  /* 10..  1*/ UINT32 immigrantPop;
  /* 14..  1*/ IMMIGRATION_STATE state;
};
struct JamContactInfo
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 virtualRealmAddr;
  /*  c..  1*/ UINT32 nativeRealmAddr;
  /* 10..  1*/ UINT32 typeFlags;
  /* 14..  1*/ STRING notes;
  /*215..  1*/ UINT8 status;
  /*218..  1*/ UINT32 areaID;
  /*21c..  1*/ UINT32 level;
  /*220..  1*/ UINT32 classID;
};
struct PlayerCliMakeMonsterAttackGUID
{
  /*  0..  1*/ UINT64 victim;
  /*  8..  1*/ UINT64 attacker;
};
struct PlayerMoveSetAllSpeedCheat
{
  /*  0..  1*/ FLOAT speed;
};
struct ClientMoveSetWalkSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
  /*  c..  1*/ FLOAT speed;
};
struct CliChatChannelMute
{
  /*  0..  1*/ STRING channelName;
  /* 80..  1*/ STRING name;
};
struct ClientRespecWipeConfirm
{
  /*  0..  1*/ UINT64 respecMaster;
  /*  8..  1*/ UINT32 cost;
  /*  c..  1*/ INT8 respecType;
};
struct ClientTrainerList
{
  /*  0..  1*/ STRING greeting;
  /*800..  1*/ INT32 trainerType;
  /*808..  1*/ UINT64 trainerGUID;
  /*810..  1*/ INT32 trainerID;
  /*818..  1*/ Array<ClientTrainerListSpell> spells;
};
struct PlayerCliSetFactionVisibleCheat
{
  /*  0..  1*/ BOOL visible;
  /*  4..  1*/ INT32 factionID;
};
struct PlayerCliGarrisonLearnBlueprintCheat
{
  /*  0..  1*/ INT32 buildingID;
};
struct ClientGuildReputationWeeklyCap
{
  /*  0..  1*/ INT32 repToCap;
};
struct JamCliSupportTicketChatLog
{
  /*  0..  1*/ Array<JamCliSupportTicketChatLine> lines;
  /* 18..  1*/ Optional<UINT32> reportLineIndex;
};
struct ClientMoveSplineSetFlightBackSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
};
struct ClientBreakTarget
{
  /*  0..  1*/ UINT64 unitGUID;
};
struct ClientReferAFriendExpired
{
  /*  0..  1*/ UINT64 unlinkedFriend;
};
struct PlayerCliCancelAuraCheat
{
  /*  0..  1*/ INT32 spellID;
};
struct ClientBattlegroundPlayerLeft
{
  /*  0..  1*/ UINT64 guid;
};
struct ClientPrintNotification
{
  /*  0..  1*/ STRING notifyText;
};
struct CliChatChannelUnmute
{
  /*  0..  1*/ STRING channelName;
  /* 80..  1*/ STRING name;
};
struct ClientCalendarEventInvite
{
  /*  0..  1*/ UINT64 inviteID;
  /*  8..  1*/ UINT32 responseTime;
  /*  c..  1*/ UINT8 level;
  /* 10..  1*/ UINT64 inviteGUID;
  /* 18..  1*/ UINT64 eventID;
  /* 20..  1*/ UINT8 type;
  /* 21..  1*/ BOOL clearPending;
  /* 22..  1*/ UINT8 status;
};
struct UserClientGMTicketResponseResolve
{
};
struct PlayerCliQuestGiverCompleteQuest
{
  /*  0..  1*/ BOOL fromScript;
  /*  4..  1*/ INT32 questID;
  /*  8..  1*/ UINT64 questGiverGUID;
};
struct GlobalLFGuildGetRecruits
{
  /*  0..  1*/ TIME_T lastUpdate;
};
struct ClientBattlePayDeliveryStarted
{
  /*  0..  1*/ UINT64 distributionID;
};
struct PlayerCliGetHealthRegenCheat
{
  /*  0..  1*/ UINT64 target;
};
struct ClientChannelNotify
{
  /*  0..  1*/ STRING sender;
  /* 38..  1*/ UINT64 senderGuid;
  /* 40..  1*/ UINT8 type;
  /* 41..  1*/ UINT8 oldFlags;
  /* 42..  1*/ UINT8 newFlags;
  /* 43..  1*/ STRING channel;
  /* c4..  1*/ UINT32 senderVirtualRealm;
  /* c8..  1*/ UINT64 targetGuid;
  /* d0..  1*/ UINT32 targetVirtualRealm;
  /* d4..  1*/ INT32 chatChannelID;
};
struct JamEarnedAchievement
{
  /*  0..  1*/ INT32 id;
  /*  4..  1*/ NOT_IMPLEMENTED date;
  /* 28..  1*/ UINT64 owner;
  /* 30..  1*/ UINT32 virtualRealmAddress;
  /* 34..  1*/ UINT32 nativeRealmAddress;
};
struct ClientMoveUpdateApplyMovementForce
{
  /*  0..  1*/ STRUCT status;
  /* a8..  1*/ STRUCT force;
};
struct ClientPetBattleMaxGameLengthWarning
{
  /*  0..  1*/ STRUCT msgData;
};
struct JamChallengeModeReward
{
  /*  0..  1*/ Array<JamItemReward> itemRewards;
  /* 18..  1*/ Array<JamCurrencyReward> currencyRewards;
  /* 30..  1*/ UINT32 money;
};
struct UserClientGuildResetChallenge
{
  /*  0..  1*/ INT32 challengeType;
};
struct ClientDeathReleaseLoc
{
  /*  0..  1*/ V3 loc;
  /*  c..  1*/ INT32 mapID;
};
struct PlayerCliQueryInspectAchievements
{
  /*  0..  1*/ UINT64 guid;
};
struct ClientInstanceEncounterGainCombatResurrectionCharge
{
  /*  0..  1*/ UINT32 combatResChargeRecovery;
  /*  4..  1*/ INT32 inCombatResCount;
};
struct PlayerCliCancelMountAura
{
};
struct UserClientAdvanceQuest
{
  /*  0..  1*/ STRING target;
  /*100..  1*/ UINT32 questID;
};
struct PlayerCliDebugGroupSize
{
  /*  0..  1*/ UINT32 overrideGroupSize;
};
struct ClientGuildRewardList
{
  /*  0..  1*/ Array<JamGuildRewardItem> rewardItems;
  /* 18..  1*/ TIME_T version;
};
struct ClientSetSpellCharges
{
  /*  0..  1*/ BOOL isPet;
  /*  4..  1*/ FLOAT count;
  /*  8..  1*/ INT32 category;
};
struct BattlegroundCapturePointInfo
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ V2 pos;
  /* 10..  1*/ INT8 state;
  /* 18..  1*/ TIME_T captureTime;
  /* 20..  1*/ UINT32 captureTotalDuration;
};
struct UserClientSummonResponse
{
  /*  0..  1*/ BOOL accept;
  /*  8..  1*/ UINT64 summonerGUID;
};
struct CliChatChannelInvite
{
  /*  0..  1*/ STRING channelName;
  /* 80..  1*/ STRING name;
};
struct ClientLFGTeleportDenied
{
  /*  0..  1*/ LFG_TELEPORT_RESULT reason;
};
struct JamCliRideTicket
{
  /*  0..  1*/ UINT64 requesterGuid;
  /*  8..  1*/ UINT32 id;
  /*  c..  1*/ UINT32 type;
  /* 10..  1*/ TIME_T time;
};
struct UserClientLowLevelRaid
{
  /*  0..  1*/ BOOL enable;
};
struct ClientStopMirrorTimer
{
  /*  0..  1*/ INT32 timer;
};
struct PlayerCliPhaseShowAreas
{
  /*  0..  1*/ INT32 phaseID;
};
struct UserClientCommentatorExitInstance
{
};
struct JamCliPlaySceneData
{
  /*  0..  1*/ UINT64 transportGUID;
  /*  8..  1*/ INT32 sceneID;
  /*  c..  1*/ UINT32 playbackFlags;
  /* 10..  1*/ UINT32 sceneInstanceID;
  /* 14..  1*/ INT32 sceneScriptPackageID;
  /* 18..  1*/ V3 pos;
  /* 24..  1*/ FLOAT facing;
};
struct ClientFeatureSystemStatus
{
  /*  0..  1*/ BOOL voiceEnabled;
  /*  1..  1*/ BOOL browserEnabled;
  /*  2..  1*/ BOOL bpayStoreAvailable;
  /*  3..  1*/ BOOL recruitAFriendSendingEnabled;
  /*  4..  1*/ BOOL bpayStoreEnabled;
  /*  8..  1*/ Optional<JamClientSessionAlertConfig> sessionAlert;
  /* 18..  1*/ UINT32 scrollOfResurrectionMaxRequestsPerDay;
  /* 1c..  1*/ BOOL scrollOfResurrectionEnabled;
  /* 20..  1*/ Optional<JamCliEuropaTicketConfig> europaTicketSystemStatus;
  /* 34..  1*/ UINT32 scrollOfResurrectionRequestsRemaining;
  /* 38..  1*/ UINT32 cfgRealmID;
  /* 3c..  1*/ UINT8 complaintStatus;
  /* 40..  1*/ INT32 cfgRealmRecID;
  /* 44..  1*/ BOOL itemRestorationButtonEnabled;
  /* 45..  1*/ BOOL charUndeleteEnabled;
  /* 46..  1*/ BOOL bpayStoreDisabledByParentalControls;
};
struct JamLossOfControlInfo
{
  /*  0..  1*/ UINT8 auraSlot;
  /*  1..  1*/ UINT8 effectIndex;
  /*  4..  1*/ INT32 type;
  /*  8..  1*/ INT32 mechanic;
};
struct ClientLogoutResponse
{
  /*  0..  1*/ INT32 logoutResult;
  /*  4..  1*/ BOOL instant;
};
struct PlayerCliSendTextEmote
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ INT32 emoteID;
  /*  c..  1*/ INT32 soundIndex;
};
struct GlobalGuildDeleteRank
{
  /*  0..  1*/ INT32 rankOrder;
};
struct ClientGetAccountCharacterListResult
{
  /*  0..  1*/ UINT32 token;
  /*  8..  1*/ Array<JamCliAccountCharacterData> characters;
};
struct PlayerCliPetBattleQueueProposeMatchResult
{
  /*  0..  1*/ BOOL accepted;
};
struct PlayerCliMountSpecialAnim
{
};
struct ClientAvailableVoiceChannel
{
  /*  0..  1*/ UINT8 sessionType;
  /*  8..  1*/ UINT64 localGUID;
  /* 10..  1*/ UINT64 sessionGUID;
  /* 18..  1*/ STRING channelName;
};
struct ClientChatIsDown
{
};
struct JamKnockBackInfo
{
  /*  0..  1*/ FLOAT horzSpeed;
  /*  4..  1*/ V2 direction;
  /*  c..  1*/ FLOAT initVertSpeed;
};
struct PlayerCliRequestPVPRewards
{
};
struct ClientBattlePetRestored
{
  /*  0..  1*/ UINT64 battlePetGUID;
};
struct CliChatChannelKick
{
  /*  0..  1*/ STRING name;
  /*132..  1*/ STRING channelName;
};
struct ClientTriggerMovie
{
  /*  0..  1*/ UINT32 movieID;
};
struct PlayerCliCancelTempEnchantment
{
  /*  0..  1*/ INT32 slot;
};
struct ClientGetShipmentsOfTypeResponse
{
  /*  0..  1*/ INT32 containerID;
  /*  8..  1*/ Array<JamCliCharacterShipment> shipments;
};
struct ClientResetFailedNotify
{
};
struct UserClientClearPartyLFGCooldowns
{
};
struct PlayerCliPetCastSpell
{
  /*  0..  1*/ UINT64 petGUID;
  /*  8..  1*/ STRUCT cast;
};
struct ClientArchaeologySurveryCast
{
  /*  0..  1*/ INT32 researchBranchID;
  /*  4..  1*/ BOOL successfulFind;
  /*  8..  1*/ UINT32 numFindsCompleted;
  /*  c..  1*/ UINT32 totalFinds;
};
struct JamCriteriaProgress
{
  /*  0..  1*/ INT32 id;
  /*  8..  1*/ UINT64 quantity;
  /* 10..  1*/ UINT64 player;
  /* 18..  1*/ INT32 flags;
  /* 1c..  1*/ NOT_IMPLEMENTED date;
  /* 40..  1*/ TIME_T timeFromStart;
  /* 48..  1*/ TIME_T timeFromCreate;
};
struct ClientMoveSplineSetWalkMode
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct ClientScenarioPOIs
{
  /*  0..  1*/ Array<ScenarioPOIData> poiInfo;
};
struct ClientLossOfControlAuraUpdate
{
  /*  0..  1*/ Array<JamLossOfControlInfo> lossOfControlInfo;
};
struct PlayerMoveChangeTransport
{
  /*  0..  1*/ STRUCT status;
};
struct ClientCharacterLoginFailed
{
  /*  0..  1*/ UINT8 code;
};
struct PlayerCliBattlefieldList
{
  /*  0..  1*/ INT32 listID;
};
struct CliChatChannelDeclineInvite
{
  /*  0..  1*/ STRING channelName;
};
struct ClientWorldServerInfo
{
  /*  0..  1*/ Optional<UINT32> ineligibleForLootMask;
  /*  8..  1*/ TIME_T weeklyReset;
  /* 10..  1*/ Optional<UINT32> instanceGroupSize;
  /* 18..  1*/ UINT8 isTournamentRealm;
  /* 1c..  1*/ Optional<UINT32> restrictedAccountMaxLevel;
  /* 24..  1*/ Optional<UINT32> restrictedAccountMaxMoney;
  /* 2c..  1*/ UINT32 difficultyID;
};
struct UserClientAcceptWargameInvite
{
  /*  0..  1*/ UINT64 opposingPartyMember;
  /*  8..  1*/ UINT64 queueID;
  /* 10..  1*/ BOOL accept;
};
struct CliChatChannelBan
{
  /*  0..  1*/ STRING name;
  /*132..  1*/ STRING channelName;
};
struct ClientSetServerWowTime
{
  /*  0..  1*/ UINT32 encodedTime;
  /*  4..  1*/ INT32 holidayOffset;
};
struct ClientItemEnchantTimeUpdate
{
  /*  0..  1*/ UINT64 ownerGuid;
  /*  8..  1*/ UINT64 itemGuid;
  /* 10..  1*/ UINT32 durationLeft;
  /* 14..  1*/ INT32 slot;
};
struct PlayerCliLootUnit
{
  /*  0..  1*/ UINT64 unit;
};
struct UserClientRandomRoll
{
  /*  0..  1*/ INT32 min;
  /*  4..  1*/ INT32 max;
  /*  8..  1*/ UINT8 partyIndex;
};
struct JamElaspedTimer
{
  /*  0..  1*/ UINT32 timerID;
  /*  8..  1*/ TIME_T currentDuration;
};
struct ClientSceneObjectEvent
{
  /*  0..  1*/ STRUCT sceneEvent;
  /*100..  1*/ UINT64 sceneObjectGUID;
};
struct ClientTitleLost
{
  /*  0..  1*/ INT32 index;
};
struct ClientCooldownEvent
{
  /*  0..  1*/ UINT64 casterGUID;
  /*  8..  1*/ INT32 spellID;
};
struct PlayerCliSetFactionNotAtWar
{
  /*  0..  1*/ UINT8 factionIndex;
};
struct ClientGarrisonListFollowersCheatResult
{
  /*  0..  1*/ Array<JamGarrisonFollower> followers;
};
struct PlayerCliDebugAIState
{
  /*  0..  1*/ UINT64 unit;
};
struct UserClientWorldPortResponse
{
};
struct ClientDismountResult
{
  /*  0..  1*/ UINT32 result;
};
struct ClientPetitionShowList
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ UINT32 price;
};
struct PlayerCliPurgeBuyback
{
};
struct UserClientPetBattleInputFirstPet
{
  /*  0..  1*/ INT8 frontPet;
};
struct CliChatChannelUnban
{
  /*  0..  1*/ STRING name;
  /*132..  1*/ STRING channelName;
};
struct PlayerMoveWaterWalkAck
{
  /*  0..  1*/ STRUCT data;
};
struct ClientAttackSwingError
{
  /*  0..  1*/ ATTACKSWINGERR reason;
};
struct PlayerCliTriggerCinematicCheat
{
  /*  0..  1*/ UINT32 cinematicID;
};
struct PlayerCliSetTradeCurrency
{
  /*  0..  1*/ UINT32 type;
  /*  4..  1*/ UINT32 quantity;
};
struct PlayerCliGarrisonMissionBonusRoll
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ INT32 missionRecID;
  /*  c..  1*/ INT32 bonusIndex;
};
struct ClientGuildEventLogQueryResults
{
  /*  0..  1*/ Array<JamClientGuildEventEntry> entry;
};
struct ClientStreamingMovies
{
  /*  0..  1*/ Array<UINT16> movieIDs;
};
struct ClientGmFreezeSuccess
{
};
struct ClientDebugDrawResetGraph
{
  /*  0..  1*/ UINT32 id;
};
struct ThreatInfo
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ INT32 threat;
};
struct ClientLootList
{
  /*  0..  1*/ Optional<UINT64> roundRobinWinner;
  /* 10..  1*/ Optional<UINT64> master;
  /* 20..  1*/ UINT64 owner;
};
struct PlayerCliCageBattlePet
{
  /*  0..  1*/ UINT64 battlePetGUID;
};
struct CliChatChannelList
{
  /*  0..  1*/ STRING channelName;
};
struct UserClientResurrectResponse
{
  /*  0..  1*/ UINT64 resurrecter;
  /*  8..  1*/ UINT32 response;
};
struct JamCliServerInfoLine
{
  /*  0..  1*/ STRING label;
  /* 20..  1*/ STRING data;
};
struct QuestGiverStatus
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 status;
};
struct CliChatChannelAnnouncements
{
  /*  0..  1*/ STRING channelName;
};
struct ClientComplaintResult
{
  /*  0..  1*/ UINT32 complaintType;
  /*  4..  1*/ UINT8 result;
};
struct PlayerCliGuildBankDepositMoney
{
  /*  0..  1*/ UINT64 money;
  /*  8..  1*/ UINT64 banker;
};
struct JamTalentGroupInfo
{
  /*  0..  1*/ INT32 specID;
  /*  8..  1*/ Array<UINT16> talentIDs;
  /* 20..  1*/ FixedArray<UINT16, 6> glyphIDs;
};
struct ClientGossipPOI
{
  /*  0..  1*/ INT32 icon;
  /*  4..  1*/ V2 pos;
  /*  c..  1*/ UINT16 flags;
  /* 10..  1*/ INT32 importance;
  /* 14..  1*/ STRING name;
};
struct PlayerCliGMUnteachSpell
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ INT32 spellID;
};
struct ClientMoveTeleport
{
  /*  0..  1*/ V3 position;
  /*  c..  1*/ Optional<JamVehicleTeleport> vehicle;
  /* 10..  1*/ UINT32 sequenceIndex;
  /* 18..  1*/ UINT64 moverGUID;
  /* 20..  1*/ Optional<UINT64> transportGUID;
  /* 30..  1*/ FLOAT facing;
};
struct ClientGmFreezeFailure
{
};
struct ClientLootItemList
{
  /*  0..  1*/ Array<JamLootItem> items;
  /* 18..  1*/ UINT64 lootObj;
};
struct UserRouterClientLogDisconnect
{
  /*  0..  1*/ UINT32 reason;
};
struct ClientUpdateWorldState
{
  /*  0..  1*/ INT32 value;
  /*  4..  1*/ BOOL hidden;
  /*  8..  1*/ INT32 variableID;
};
struct UserClientSimulateTickets
{
  /*  0..  1*/ UINT32 seed;
  /*  4..  1*/ UINT32 count;
  /*  8..  1*/ UINT32 rideType;
};
struct ClientAuctionReplicateResponse
{
  /*  0..  1*/ UINT32 changeNumberCursor;
  /*  4..  1*/ UINT32 changeNumberGlobal;
  /*  8..  1*/ UINT32 desiredDelay;
  /*  c..  1*/ UINT32 changeNumberTombstone;
  /* 10..  1*/ UINT32 result;
  /* 18..  1*/ Array<JamCliAuctionItem> items;
};
struct PlayerCliGetItemPurchaseData
{
  /*  0..  1*/ UINT64 itemGUID;
};
struct UserClientEnumCharactersDeletedByClient
{
};
struct UserClientPetBattleReplaceFrontPet
{
  /*  0..  1*/ INT8 frontPet;
};
struct PlayerCliCreateShipmentCheat
{
  /*  0..  1*/ INT32 shipmentRecID;
};
struct PlayerCliBeginTrade
{
};
struct ClientGMGuildSaveResponse
{
  /*  0..  1*/ BOOL success;
  /*  8..  1*/ NOT_IMPLEMENTED profileData;
};
struct UserClientCharacterRenameRequest
{
  /*  0..  1*/ STRING newName;
  /* 38..  1*/ UINT64 guid;
};
struct ClientItemPurchaseRefundItem
{
  /*  0..  1*/ INT32 itemID;
  /*  4..  1*/ INT32 itemCount;
};
struct ClientNeutralPlayerFactionSelectResult
{
  /*  0..  1*/ BOOL success;
  /*  4..  1*/ INT32 newRaceID;
};
struct UserClientCalendarGuildFilter
{
  /*  0..  1*/ UINT8 minLevel;
  /*  1..  1*/ UINT8 maxLevel;
  /*  2..  1*/ UINT8 maxRankOrder;
};
struct ClientDebugDrawLine
{
  /*  0..  1*/ FLOAT thickness;
  /*  4..  1*/ V3 a;
  /* 10..  1*/ V3 b;
  /* 1c..  1*/ UINT32 colora;
  /* 20..  1*/ UINT32 colorb;
  /* 24..  1*/ UINT32 id;
  /* 28..  1*/ UINT32 settings;
  /* 2c..  1*/ FLOAT lifetime;
};
struct ClientSpellProcScriptLog
{
  /*  0..  1*/ UINT64 caster;
  /*  8..  1*/ INT32 spellID;
  /*  c..  1*/ INT8 result;
};
struct UserClientCheatPlayerLookup
{
  /*  0..  1*/ STRING name;
};
struct ClientSetAIAnimKit
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ UINT16 animKitID;
};
struct PlayerCliRemoveTitleCheat
{
  /*  0..  1*/ STRING titleName;
  /*100..  1*/ INT32 titleID;
};
struct ClientSpellDispellLog
{
  /*  0..  1*/ Array<JamClientSpellDispellData> dispellData;
  /* 18..  1*/ BOOL isBreak;
  /* 20..  1*/ UINT64 targetGUID;
  /* 28..  1*/ BOOL isSteal;
  /* 2c..  1*/ INT32 dispelledBySpellID;
  /* 30..  1*/ UINT64 casterGUID;
};
struct ClientGMSummon
{
  /*  0..  1*/ BOOL success;
};
struct JamChatMsg
{
  /*  0..  1*/ UINT8 slashCmd;
  /*  1..  1*/ INT8 language;
  /*  8..  1*/ UINT64 senderGUID;
  /* 10..  1*/ UINT64 senderGuildGUID;
  /* 18..  1*/ UINT64 targetGUID;
  /* 20..  1*/ UINT64 partyGUID;
  /* 28..  1*/ UINT32 senderVirtualAddress;
  /* 2c..  1*/ UINT32 targetVirtualAddress;
  /* 30..  1*/ STRING senderName;
  /*431..  1*/ STRING targetName;
  /*832..  1*/ STRING prefix;
  /*843..  1*/ STRING channel;
  /*8c3..  1*/ STRING chatText;
  /*147c..  1*/ INT32 achievementID;
  /*1480..  1*/ UINT16 chatFlags;
  /*1484..  1*/ FLOAT displayTime;
  /*1488..  1*/ BOOL hideChatLog;
  /*1489..  1*/ BOOL fakeSenderName;
};
struct ClientSetQuestCompletedBit
{
  /*  0..  1*/ INT32 bit;
  /*  4..  1*/ INT32 questID;
};
struct ClientCalendarRaidLockoutUpdated
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ INT32 oldTimeRemaining;
  /*  8..  1*/ UINT32 serverTime;
  /*  c..  1*/ UINT32 difficultyID;
  /* 10..  1*/ INT32 newTimeRemaining;
};
struct ClientPetActionFeedback
{
  /*  0..  1*/ INT32 spellID;
  /*  4..  1*/ UINT8 response;
};
struct PlayerCliEnableTaxiNode
{
  /*  0..  1*/ UINT64 unit;
};
struct GlobalGuildMemberSendSoRRequest
{
  /*  0..  1*/ UINT64 member;
  /*  8..  1*/ STRING text;
};
struct ClientGmCharacterSaveFailure
{
};
struct ClientConquestFormulaConstants
{
  /*  0..  1*/ FLOAT pvpCPExpCoefficient;
  /*  4..  1*/ UINT32 pvpMaxCPPerWeek;
  /*  8..  1*/ UINT32 pvpMinCPPerWeek;
  /*  c..  1*/ FLOAT pvpCPBaseCoefficient;
  /* 10..  1*/ FLOAT pvpCPNumerator;
};
struct PlayerCliShowZonesCheat
{
  /*  0..  1*/ BOOL show;
};
struct PlayerCliBusyTrade
{
};
struct ClientMoveSetSwimSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
  /*  c..  1*/ FLOAT speed;
};
struct PlayerMoveStartTurnLeft
{
  /*  0..  1*/ STRUCT status;
};
struct ClientChallengeModeMember
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 virtualRealmAddress;
  /*  c..  1*/ UINT32 nativeRealmAddress;
  /* 10..  1*/ INT32 specializationID;
};
struct ClientCheatIgnoreDimishingReturns
{
  /*  0..  1*/ BOOL enabled;
};
struct ClientLFGOfferContinue
{
  /*  0..  1*/ UINT32 slot;
};
struct PlayerCliLowLevelRaid
{
  /*  0..  1*/ BOOL enable;
};
struct ClientDamageCalcLogEntry
{
  /*  0..  1*/ STRING op;
  /* 20..  1*/ UINT32 var;
  /* 24..  1*/ FLOAT value;
  /* 28..  1*/ FLOAT damage;
};
struct PlayerCliGarrisonUpgradeBuildingCheat
{
  /*  0..  1*/ INT32 plotInstanceID;
  /*  4..  1*/ BOOL immediate;
};
struct ClientGuildXPEarned
{
  /*  0..  1*/ INT64 xp;
};
struct UserClientGuildResetXPCap
{
};
struct ClientCheckWargameEntry
{
  /*  0..  1*/ UINT64 queueID;
  /*  8..  1*/ UINT64 opposingPartyBnetAccountID;
  /* 10..  1*/ JAMSERVERSPEC opposingPartyUserServer;
  /* 20..  1*/ UINT64 opposingPartyMember;
  /* 28..  1*/ TIME_T timeoutSeconds;
  /* 30..  1*/ BOOL tournamentRules;
};
struct JamUserClientComplaintOffender
{
  /*  0..  1*/ UINT64 playerGuid;
  /*  8..  1*/ UINT32 realmAddress;
  /*  c..  1*/ UINT32 timeSinceOffence;
};
struct ClientSetPromotionResponse
{
  /*  0..  1*/ BOOL success;
  /*  4..  1*/ INT32 promotionID;
};
struct ClientDisplayQuestPopup
{
  /*  0..  1*/ INT32 questID;
};
struct ClientGMPhaseDump
{
  /*  0..  1*/ STRUCT phaseShift;
  /* 28..  1*/ UINT64 target;
};
struct PlayerCliLearnTalents
{
  /*  0..  1*/ Array<UINT16> talents;
};
struct ClientBattlePetJournalLockDenied
{
};
struct ClientVoidStorageTransferChanges
{
  /*  0..  1*/ Array<UINT64> removedItems;
  /* 18..  1*/ Array<JamVoidItem> addedItems;
};
struct UserClientBattlePayGetPurchaseList
{
};
struct UserClientGenerateRandomCharacterName
{
  /*  0..  1*/ UINT8 sex;
  /*  1..  1*/ UINT8 race;
};
struct ClientCalendarEventInviteInfo
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT64 inviteID;
  /* 10..  1*/ UINT8 level;
  /* 11..  1*/ UINT8 status;
  /* 12..  1*/ UINT8 moderator;
  /* 13..  1*/ UINT8 inviteType;
  /* 14..  1*/ UINT32 responseTime;
  /* 18..  1*/ STRING notes;
};
struct PlayerCliQuestGiverHello
{
  /*  0..  1*/ UINT64 questGiverGUID;
};
struct ClientMirrorImageCreatureData
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ INT32 displayID;
};
struct GlobalGuildSetMemberNote
{
  /*  0..  1*/ STRUCT data;
};
struct ClientBattlePayGetProductListResponse
{
  /*  0..  1*/ Array<JamBattlePayProduct> products;
  /* 18..  1*/ UINT32 result;
  /* 20..  1*/ Array<JamBattlePayProductGroup> groups;
  /* 38..  1*/ Array<JamBattlePayShopEntry> shopEntries;
  /* 50..  1*/ UINT32 currencyID;
};
struct UserClientBattlePetModifyName
{
  /*  0..  1*/ STRING name;
  /* 41..  1*/ Optional<DeclinedBattlePetNames> declinedNames;
  /*188..  1*/ UINT64 battlePetGUID;
};
struct PlayerCliRideVehicleInteract
{
  /*  0..  1*/ UINT64 vehicle;
};
struct ClientUserlistAdd
{
  /*  0..  1*/ UINT8 channelFlags;
  /*  1..  1*/ UINT8 userFlags;
  /*  2..  1*/ STRING channelName;
  /* 88..  1*/ UINT64 addedUserGUID;
  /* 90..  1*/ INT32 channelID;
};
struct UserClientGuildResetMemberRepCap
{
};
struct UserClientGMRequestPlayerInfo
{
  /*  0..  1*/ STRING playerName;
};
struct ClientMoveUpdateCollisionHeight
{
  /*  0..  1*/ FLOAT scale;
  /*  8..  1*/ STRUCT status;
  /* b0..  1*/ FLOAT height;
};
struct PlayerTimeSyncResponseDropped
{
  /*  0..  1*/ UINT32 sequenceIndexFirst;
  /*  4..  1*/ UINT32 sequenceIndexLast;
};
struct ClientPetBattleFirstRound
{
  /*  0..  1*/ STRUCT msgData;
};
struct JamUserClientComplaintChat
{
  /*  0..  1*/ UINT32 command;
  /*  4..  1*/ UINT32 channelID;
  /*  8..  1*/ STRING messageLog;
};
struct UserClientCharCustomize
{
  /*  0..  1*/ UINT8 hairStyleID;
  /*  1..  1*/ UINT8 faceID;
  /*  8..  1*/ UINT64 charGUID;
  /* 10..  1*/ UINT8 sexID;
  /* 11..  1*/ STRING charName;
  /* 42..  1*/ UINT8 hairColorID;
  /* 43..  1*/ UINT8 facialHairStyleID;
  /* 44..  1*/ UINT8 skinID;
};
struct ClientQueryPageTextResponse
{
  /*  0..  1*/ BOOL allow;
  /*  4..  1*/ STRUCT info;
  /*fb0..  1*/ UINT32 pageTextID;
};
struct ClientUpdateCharacterFlags
{
  /*  0..  1*/ UINT64 character;
  /*  8..  1*/ Optional<UINT32> flags3;
  /* 10..  1*/ Optional<UINT32> flags;
  /* 18..  1*/ Optional<UINT32> flags2;
};
struct PlayerCliQueryServerBuckData
{
  /*  0..  1*/ BOOL allClusters;
  /*  1..  1*/ UINT8 clusterID;
  /*  4..  1*/ UINT32 requestID;
  /*  8..  1*/ UINT8 mpid;
};
struct ClientInstanceEncounterObjectiveStart
{
  /*  0..  1*/ INT32 objectiveID;
};
struct PlayerCliSetPVP
{
  /*  0..  1*/ BOOL enablePVP;
};
struct JamGuildKnownRecipes
{
  /*  0..  1*/ INT32 skillLineID;
  /*  4..  1*/ FixedArray<UINT8, 300> skillLineBitArray;
};
struct CliChatMessageSay
{
  /*  0..  1*/ STRING text;
  /*100..  1*/ INT32 language;
};
struct ClientMoveCharacterCheatSuccess
{
  /*  0..  1*/ UINT64 characterGUID;
  /*  8..  1*/ V3 position;
  /* 14..  1*/ INT32 mapID;
};
struct PlayerTimeSyncResponseFailed
{
  /*  0..  1*/ UINT32 sequenceIndex;
};
struct ClientMirrorImageComponentedData
{
  /*  0..  1*/ UINT8 faceVariation;
  /*  8..  1*/ Array<INT32> itemDisplayID;
  /* 20..  1*/ UINT8 skinColor;
  /* 21..  1*/ UINT8 gender;
  /* 22..  1*/ UINT8 hairColor;
  /* 23..  1*/ UINT8 classID;
  /* 28..  1*/ UINT64 unitGUID;
  /* 30..  1*/ UINT8 raceID;
  /* 38..  1*/ UINT64 guildGUID;
  /* 40..  1*/ UINT8 hairVariation;
  /* 41..  1*/ UINT8 beardVariation;
  /* 44..  1*/ INT32 displayID;
};
struct ClientLoginSetTimeSpeed
{
  /*  0..  1*/ FLOAT newSpeed;
  /*  4..  1*/ INT32 serverTimeHolidayOffset;
  /*  8..  1*/ UINT32 gameTime;
  /*  c..  1*/ UINT32 serverTime;
  /* 10..  1*/ INT32 gameTimeHolidayOffset;
};
struct PlayerCliTransmogrifyItems
{
  /*  0..  1*/ UINT64 npc;
  /*  8..  1*/ Array<JamTransmogrifyItem> items;
};
struct JamLfgPlayerDungeonInfo
{
  /*  0..  1*/ UINT32 slot;
  /*  4..  1*/ BOOL firstReward;
  /*  8..  1*/ INT32 completionQuantity;
  /*  c..  1*/ INT32 completionLimit;
  /* 10..  1*/ INT32 completionCurrencyID;
  /* 14..  1*/ INT32 specificQuantity;
  /* 18..  1*/ INT32 specificLimit;
  /* 1c..  1*/ INT32 overallQuantity;
  /* 20..  1*/ INT32 overallLimit;
  /* 24..  1*/ INT32 purseWeeklyQuantity;
  /* 28..  1*/ INT32 purseWeeklyLimit;
  /* 2c..  1*/ INT32 purseQuantity;
  /* 30..  1*/ INT32 purseLimit;
  /* 34..  1*/ INT32 quantity;
  /* 38..  1*/ UINT32 completedMask;
  /* 3c..  1*/ BOOL shortageEligible;
  /* 40..  1*/ Array<JamLfgPlayerQuestReward> shortageReward;
  /* 58..  1*/ STRUCT rewards;
};
struct ClientDumpRideTicketsResponse
{
  /*  0..  1*/ Array<ClientDumpRideTicket> ticket;
};
struct JamClientCalendarAddEventInviteInfo
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT8 status;
  /*  9..  1*/ UINT8 moderator;
};
struct ClientShowBank
{
  /*  0..  1*/ UINT64 banker;
};
struct PlayerCliSendEvent
{
  /*  0..  1*/ UINT32 eventID;
};
struct GlobalGuildDemoteMember
{
  /*  0..  1*/ UINT64 demotee;
};
struct ClientLastWeeklyReset
{
  /*  0..  1*/ TIME_T reset;
};
struct ClientLfgPartyInfo
{
  /*  0..  1*/ Array<JamLFGBlackList> player;
};
struct PlayerCliScenePlaybackCanceled
{
  /*  0..  1*/ UINT32 sceneInstanceID;
};
struct ClientMOTD
{
  /*  0..  1*/ Array<JamClientMOTDStruct> text;
};
struct PlayerCliConquestAwardRatedBattlegroundCheat
{
};
struct ClientPetBattleSlotUpdates
{
  /*  0..  1*/ BOOL newSlotUnlocked;
  /*  1..  1*/ BOOL autoSlotted;
  /*  8..  1*/ Array<JamClientPetBattleSlot> slots;
};
struct ClientAuctionClosedNotification
{
  /*  0..  1*/ STRUCT info;
  /* 70..  1*/ FLOAT proceedsMailDelay;
  /* 74..  1*/ BOOL sold;
};
struct PlayerCliSwapItem
{
  /*  0..  1*/ STRUCT inv;
  /* 18..  1*/ UINT8 slotA;
  /* 19..  1*/ UINT8 containerSlotB;
  /* 1a..  1*/ UINT8 slotB;
  /* 1b..  1*/ UINT8 containerSlotA;
};
struct ClientBuySucceeded
{
  /*  0..  1*/ UINT64 vendorGUID;
  /*  8..  1*/ UINT32 muid;
  /*  c..  1*/ UINT32 quantityBought;
  /* 10..  1*/ INT32 newQuantity;
};
struct PlayerCliShowingCloak
{
  /*  0..  1*/ BOOL showCloak;
};
struct ClientSpellCooldownStruct
{
  /*  0..  1*/ UINT32 srecID;
  /*  4..  1*/ UINT32 forcedCooldown;
};
struct ClientGetShipmentInfoResponse
{
  /*  0..  1*/ Array<JamCliCharacterShipment> shipments;
  /* 18..  1*/ INT32 plotInstanceID;
  /* 1c..  1*/ INT32 shipmentID;
  /* 20..  1*/ BOOL success;
  /* 24..  1*/ INT32 maxShipments;
};
struct ClientBattlePetsHealed
{
};
struct JamSpellWeight
{
  /*  0..  1*/ SPELLWEIGHT_TOKEN_TYPES type;
  /*  4..  1*/ INT32 ID;
  /*  8..  1*/ UINT32 quantity;
};
struct ClientGenerateRandomCharacterNameResult
{
  /*  0..  1*/ STRING name;
  /* 31..  1*/ BOOL success;
};
struct ClientMoveSplineSetLandWalk
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct ClientInspectResult
{
  /*  0..  1*/ Array<JamCliInspectItemData> items;
  /* 18..  1*/ INT32 classID;
  /* 20..  1*/ Array<UINT16> talents;
  /* 38..  1*/ Array<UINT16> glyphs;
  /* 50..  1*/ Optional<JamCliInspectGuildData> guildData;
  /* 70..  1*/ UINT64 inspecteeGUID;
  /* 78..  1*/ INT32 specializationID;
};
struct JamClientCalendarAddEventInfo
{
  /*  0..  1*/ STRING title;
  /* 81..  1*/ STRING description;
  /*482..  1*/ UINT8 eventType;
  /*484..  1*/ INT32 textureID;
  /*488..  1*/ UINT32 time;
  /*48c..  1*/ UINT32 flags;
  /*490..  1*/ Array<JamClientCalendarAddEventInviteInfo> invites;
};
struct UserClientLFGListLeave
{
  /*  0..  1*/ STRUCT ticket;
};
struct ClientDeleteChar
{
  /*  0..  1*/ UINT8 code;
};
struct ClientRuneRegenDebug
{
  /*  0..  1*/ UINT32 time;
  /*  4..  1*/ UINT32 interval;
  /*  8..  1*/ FixedArray<INT32, 6> runeStart;
  /* 20..  1*/ FixedArray<INT32, 6> runeEnd;
  /* 38..  1*/ FixedArray<FLOAT, 4> regenRate;
};
struct PlayerCliQueryQuestCompletionNPCs
{
  /*  0..  1*/ Array<INT32> questID;
};
struct UserClientBattlePetDeletePet
{
  /*  0..  1*/ UINT64 battlePetGUID;
};
struct JamCliSupportTicketGuildInfo
{
  /*  0..  1*/ STRING guildName;
  /* 68..  1*/ UINT64 guildID;
};
struct ClientGuildEventTabTextChanged
{
  /*  0..  1*/ INT32 tab;
};
struct ClientGameObjectPlaySpellVisualKit
{
  /*  0..  1*/ UINT64 object;
  /*  8..  1*/ INT32 kitRecID;
  /*  c..  1*/ INT32 kitType;
  /* 10..  1*/ UINT32 duration;
};
struct UserClientCalendarRemoveEvent
{
  /*  0..  1*/ UINT64 moderatorID;
  /*  8..  1*/ UINT64 eventID;
  /* 10..  1*/ UINT32 flags;
};
struct ClientSpellGo
{
  /*  0..  1*/ Optional<JamSpellCastLogData> logData;
  /* 30..  1*/ STRUCT cast;
};
struct ClientQueryObjRotation
{
  /*  0..  1*/ FLOAT anchorFacing;
  /*  4..  1*/ FLOAT facing;
};
struct UserClientGuildResetByGM
{
};
struct ClientUseEquipmentSetResult
{
  /*  0..  1*/ UINT8 reason;
};
struct PlayerCliFinishChallengeModeCheat
{
  /*  0..  1*/ UINT32 time;
};
struct JamTalentInfoUpdate
{
  /*  0..  1*/ UINT8 activeGroup;
  /*  8..  1*/ Array<JamTalentGroupInfo> talentGroups;
};
struct ClientBattlePetLicenseChanged
{
};
struct JSONBnetChallengeSubmission
{
  /*  0..  1*/ Array<JSONBnetChallengeSubmissionInput> inputs;
};
struct ClientPetLearnedSpells
{
  /*  0..  1*/ Array<INT32> spellID;
};
struct ClientQuestGiverStatus
{
  /*  0..  1*/ UINT64 questGiverGUID;
  /*  8..  1*/ UINT32 statusFlags;
};
struct JamPetRenameData
{
  /*  0..  1*/ INT32 petNumber;
  /*  4..  1*/ STRING newName;
  /* 85..  1*/ BOOL hasDeclinedNames;
  /* 86..  1*/ FixedArrayStrings<5 /*times*/, 97 /*chars*/> declinedNames;
};
struct ClientOfferPetitionError
{
  /*  0..  1*/ UINT64 playerGUID;
};
struct PlayerCliAuctionPlaceBid
{
  /*  0..  1*/ UINT64 auctioneer;
  /*  8..  1*/ UINT64 bidAmount;
  /* 10..  1*/ INT32 auctionItemID;
};
struct ClientMoveSetPitchRate
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
  /*  c..  1*/ FLOAT speed;
};
struct ClientGarrisonBuildingActivated
{
  /*  0..  1*/ INT32 garrPlotInstanceID;
};
struct PlayerCliRunScript
{
  /*  0..  1*/ STRING text;
  /*400..  1*/ UINT64 target;
};
struct ClientPetClearSpells
{
};
struct ClientMessageBox
{
  /*  0..  1*/ NOT_IMPLEMENTED text;
};
struct ClientMoveSetCollisionHeight
{
  /*  0..  1*/ FLOAT scale;
  /*  8..  1*/ UINT64 moverGUID;
  /* 10..  1*/ UINT32 mountDisplayID;
  /* 14..  1*/ UPDATE_COLLISION_HEIGHT_REASON reason;
  /* 18..  1*/ UINT32 sequenceIndex;
  /* 1c..  1*/ FLOAT height;
};
struct ClientSetPetSpecialization
{
  /*  0..  1*/ UINT16 specID;
};
struct ClientBFMgrEntering
{
  /*  0..  1*/ BOOL relocated;
  /*  1..  1*/ BOOL clearedAFK;
  /*  2..  1*/ BOOL onOffense;
  /*  8..  1*/ UINT64 queueID;
};
struct PlayerMoveSplineDone
{
  /*  0..  1*/ UINT32 splineID;
  /*  8..  1*/ STRUCT status;
};
struct ClientSetVehicleRecID
{
  /*  0..  1*/ UINT64 vehicleGUID;
  /*  8..  1*/ INT32 vehicleRecID;
};
struct DelPvpMedalCheat
{
  /*  0..  1*/ INT32 medal;
};
struct JamCategoryCooldown
{
  /*  0..  1*/ INT32 category;
  /*  4..  1*/ INT32 modCooldown;
};
struct PlayerCliAcceptTrade
{
  /*  0..  1*/ UINT32 stateIndex;
};
struct PlayerCliGarrisonAddMissionCheat
{
  /*  0..  1*/ INT32 missionRecID;
};
struct ClientGuildBankRemainingWithdrawMoney
{
  /*  0..  1*/ UINT64 remainingWithdrawMoney;
};
struct ClientPVPOptionsEnabled
{
  /*  0..  1*/ BOOL wargameArenas;
  /*  1..  1*/ BOOL ratedArenas;
  /*  2..  1*/ BOOL wargameBattlegrounds;
  /*  3..  1*/ BOOL arenaSkirmish;
  /*  4..  1*/ BOOL pugBattlegrounds;
  /*  5..  1*/ BOOL ratedBattlegrounds;
};
struct ClientDebugDrawCancel
{
  /*  0..  1*/ UINT32 id;
};
struct PlayerCliSubmitGuildPetitionCheat
{
};
struct UserClientQueryRealmName
{
  /*  0..  1*/ UINT32 virtualRealmAddress;
};
struct ClientGMNamedPointsData
{
  /*  0..  1*/ UINT64 transport;
  /*  8..  1*/ V3 position;
  /* 14..  1*/ FLOAT facing;
  /* 18..  1*/ STRING internalName;
  /* 98..  1*/ STRING name;
};
struct ClientVendorInventory
{
  /*  0..  1*/ UINT8 reason;
  /*  8..  1*/ Array<JamCliVendorItem> items;
  /* 20..  1*/ UINT64 vendor;
};
struct PlayerCliIgnoreDiminishingReturnsCheat
{
  /*  0..  1*/ BOOL enable;
};
struct ClientConnectionResumeComms
{
};
struct ClientLFGProposalUpdate
{
  /*  0..  1*/ BOOL proposalSilent;
  /*  8..  1*/ Array<ClientLFGProposalUpdatePlayer> players;
  /* 20..  1*/ UINT32 completedMask;
  /* 28..  1*/ UINT64 instanceID;
  /* 30..  1*/ BOOL validCompletedMask;
  /* 34..  1*/ UINT32 slot;
  /* 38..  1*/ STRUCT ticket;
  /* 50..  1*/ INT8 state;
  /* 54..  1*/ UINT32 proposalID;
};
struct ClientQuestUpdateAddCreditSimple
{
  /*  0..  1*/ INT32 questID;
  /*  4..  1*/ INT32 objectID;
  /*  8..  1*/ UINT8 objectiveType;
};
struct PlayerMoveStartTurnRight
{
  /*  0..  1*/ STRUCT status;
};
struct UserClientUndeleteGuildCheat
{
  /*  0..  1*/ STRING backupGuildName;
};
struct ClientWeather
{
  /*  0..  1*/ BOOL abrupt;
  /*  4..  1*/ FLOAT intensity;
  /*  8..  1*/ UINT32 weatherID;
};
struct PlayerCliGuildBankSwapItems
{
  /*  0..  1*/ UINT8 bankSlot;
  /*  4..  1*/ INT32 stackCount;
  /*  8..  1*/ UINT64 banker;
  /* 10..  1*/ BOOL autoStore;
  /* 11..  1*/ UINT8 containerItemSlot;
  /* 14..  1*/ UINT32 itemID;
  /* 18..  1*/ UINT8 toSlot;
  /* 19..  1*/ UINT8 bankTab1;
  /* 1a..  1*/ UINT8 bankTab;
  /* 1c..  1*/ INT32 bankItemCount;
  /* 20..  1*/ UINT8 containerSlot;
  /* 24..  1*/ UINT32 itemID1;
  /* 28..  1*/ BOOL bankOnly;
  /* 29..  1*/ UINT8 bankSlot1;
};
struct UserClientDisableGMTicketSystem
{
};
struct ClientSetAllTaskProgress
{
  /*  0..  1*/ Array<JamClientTaskProgress> progress;
};
struct UserClientAddBattlePet
{
  /*  0..  1*/ BOOL allSpecies;
  /*  4..  1*/ INT32 speciesID;
  /*  8..  1*/ INT32 creatureID;
  /*  c..  1*/ BOOL ignoreMaxPetRestriction;
};
struct PlayerCancelChannelling
{
  /*  0..  1*/ INT32 channelSpell;
};
struct JamCliMovementSpeedAck
{
  /*  0..  1*/ STRUCT ack;
  /* b0..  1*/ FLOAT speed;
};
struct JamVirtualRealmNameInfo
{
  /*  0..  1*/ BOOL isLocal;
  /*  1..  1*/ STRING realmNameActual;
  /*101..  1*/ STRING realmNameNormalized;
};
struct UserClientSetPromotionRequest
{
  /*  0..  1*/ INT32 promotionID;
};
struct ClientMoveSetHovering
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct PlayerCliLootMoney
{
};
struct ClientLootMoneyNotify
{
  /*  0..  1*/ UINT32 money;
  /*  4..  1*/ BOOL soleLooter;
};
struct UserRouterClientSuspendCommsAck
{
  /*  0..  1*/ UINT32 serial;
  /*  4..  1*/ UINT32 timestamp;
};
struct PlayerMoveSetTurnRateCheat
{
  /*  0..  1*/ FLOAT speed;
};
struct ClientLevelUpInfo
{
  /*  0..  1*/ INT32 cp;
  /*  4..  1*/ FixedArray<INT32, 5> statDelta;
  /* 18..  1*/ INT32 healthDelta;
  /* 1c..  1*/ FixedArray<INT32, 6> powerDelta;
  /* 34..  1*/ INT32 level;
};
struct PlayerCliBlackMarketOpen
{
  /*  0..  1*/ UINT64 npcGUID;
};
struct ClientRestrictedAccountWarning
{
  /*  0..  1*/ UINT32 arg;
  /*  4..  1*/ UINT8 type;
};
struct UserClientSetContactNotes
{
  /*  0..  1*/ STRUCT player;
  /* 10..  1*/ STRING notes;
};
struct PlayerCliGetShipmentInfo
{
  /*  0..  1*/ UINT64 npcGUID;
};
struct ClientConnectionDropNewConnection
{
};
struct LFGuildApplicationData
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ UINT32 guildVirtualRealm;
  /*  c..  1*/ STRING guildName;
  /* 70..  1*/ INT32 classRoles;
  /* 74..  1*/ INT32 playStyle;
  /* 78..  1*/ INT32 availability;
  /* 7c..  1*/ UINT32 secondsSinceCreated;
  /* 80..  1*/ UINT32 secondsUntilExpiration;
  /* 84..  1*/ STRING comment;
};
struct ClientPetStableResult
{
  /*  0..  1*/ UINT8 result;
};
struct PlayerCliShowGarrisonTransfer
{
};
struct ClientImmigrantHostSearchLog
{
  /*  0..  1*/ BOOL success;
  /*  8..  1*/ Array<JamImmigrantHostSearchLog> entries;
};
struct ClientChannelList
{
  /*  0..  1*/ Array<JamChannelPlayer> members;
  /* 18..  1*/ STRING channel;
  /* 98..  1*/ UINT8 channelFlags;
  /* 99..  1*/ BOOL display;
};
struct ClientSetFactionNotVisible
{
  /*  0..  1*/ INT32 factionIndex;
};
struct JamWeeklySpellUse
{
  /*  0..  1*/ INT32 category;
  /*  4..  1*/ UINT8 uses;
};
struct PlayerCliSendIsQuestCompleteCheat
{
  /*  0..  1*/ INT32 questID;
};
struct ClientAdjustSplineDuration
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ FLOAT scale;
};
struct PlayerCliRequestResearchHistory
{
};
struct ClientCalendarEventInviteNotes
{
  /*  0..  1*/ UINT64 inviteGUID;
  /*  8..  1*/ BOOL clearPending;
  /*  9..  1*/ STRING notes;
  /* 90..  1*/ UINT64 eventID;
};
struct ClientGossipOptions
{
  /*  0..  1*/ INT32 clientOption;
  /*  4..  1*/ UINT8 optionNPC;
  /*  5..  1*/ INT8 optionFlags;
  /*  8..  1*/ INT32 optionCost;
  /*  c..  1*/ STRING text;
  /*bc4..  1*/ STRING confirm;
};
struct PlayerCliSellItem
{
  /*  0..  1*/ UINT64 itemGUID;
  /*  8..  1*/ UINT64 vendorGUID;
  /* 10..  1*/ INT32 amount;
};
struct GlobalGuildBankSetTabText
{
  /*  0..  1*/ INT32 tab;
  /*  4..  1*/ STRING tabText;
};
struct ClientBattlePayStartDistributionMakeProductChoiceResponse
{
  /*  0..  1*/ UINT32 clientToken;
  /*  4..  1*/ JAM_PRODUCT_CHOICE_RESULT result;
  /*  8..  1*/ UINT64 distributionID;
};
struct ClientSetPlayHoverAnim
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ BOOL playHoverAnim;
};
struct PlayerCliSetRulesetOverride
{
  /*  0..  1*/ INT32 rulesetOverride;
};
struct ClientMoveSplineSetTurnRate
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
};
struct ClientChallegeModeRewards
{
  /*  0..  1*/ Array<JamMapChallengeModeReward> rewards;
  /* 18..  1*/ Array<JamItemReward> tierRewards;
};
struct CliChatMessageEmote
{
  /*  0..  1*/ STRING text;
};
struct ClientThreatRemove
{
  /*  0..  1*/ UINT64 aboutGUID;
  /*  8..  1*/ UINT64 unitGUID;
};
struct PlayerCliDebugServerGeo
{
  /*  0..  1*/ UINT32 showPathingGeoDist;
  /*  4..  1*/ BOOL showSurfaceLinks;
  /*  5..  1*/ BOOL enabled;
  /*  6..  1*/ BOOL showDoors;
};
struct ClientWeeklySpellUsage
{
  /*  0..  1*/ Array<JamWeeklySpellUse> usage;
};
struct ClientGetTrophyListResponse
{
  /*  0..  1*/ Array<INT32> trophyID;
  /* 18..  1*/ BOOL success;
};
struct PlayerCliGarrisonSetLevelCheat
{
  /*  0..  1*/ INT32 level;
};
struct ClientGuildAchievementMember
{
  /*  0..  1*/ UINT64 memberGUID;
};
struct ClientBFMgrEjected
{
  /*  0..  1*/ UINT64 queueID;
  /*  8..  1*/ BOOL relocated;
  /*  9..  1*/ INT8 reason;
  /*  a..  1*/ INT8 battleState;
};
struct JamRealmName
{
  /*  0..  1*/ STRING name;
};
struct JamEquipmentSetData
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 setID;
  /*  c..  1*/ STRING setName;
  /* 8d..  1*/ STRING setIcon;
  /*190..  1*/ FixedArray<UINT64, 19> pieces;
};
struct UserClientDFSetRoles
{
  /*  0..  1*/ UINT32 rolesDesired;
  /*  4..  1*/ UINT8 partyIndex;
};
struct JamForcedReaction
{
  /*  0..  1*/ INT32 faction;
  /*  4..  1*/ INT32 reaction;
};
struct PlayerCliRequestGuildRewardsList
{
  /*  0..  1*/ TIME_T currentVersion;
};
struct ClientLootRemoved
{
  /*  0..  1*/ UINT64 lootObj;
  /*  8..  1*/ UINT64 owner;
  /* 10..  1*/ UINT8 lootListID;
};
struct UserClientLeaveGroup
{
  /*  0..  1*/ UINT8 partyIndex;
};
struct ClientMissileCancel
{
  /*  0..  1*/ UINT64 ownerGUID;
  /*  8..  1*/ BOOL reverse;
  /*  c..  1*/ INT32 spellID;
};
struct ClientConnectionResetCompressionContext
{
};
struct JamClientCalendarUpdateEventInfo
{
  /*  0..  1*/ UINT64 eventID;
  /*  8..  1*/ UINT64 moderatorID;
  /* 10..  1*/ STRING title;
  /* 91..  1*/ STRING description;
  /*492..  1*/ UINT8 eventType;
  /*494..  1*/ INT32 textureID;
  /*498..  1*/ UINT32 time;
  /*49c..  1*/ UINT32 flags;
};
struct ClientCalendarSendCalendarRaidLockoutInfo
{
  /*  0..  1*/ UINT64 instanceID;
  /*  8..  1*/ INT32 mapID;
  /*  c..  1*/ UINT32 difficultyID;
  /* 10..  1*/ INT32 expireTime;
};
struct ClientInitializeFactions
{
  /*  0..  1*/ FixedArray<INT32, 256> factionStandings;
  /*400..  1*/ FixedArray<BOOL, 256> factionHasBonus;
  /*500..  1*/ FixedArray<UINT8, 256> factionFlags;
};
struct PlayerCliRequestStabledPets
{
  /*  0..  1*/ UINT64 stableMaster;
};
struct GlobalGuildSetAchievementTracking
{
  /*  0..  1*/ Array<INT32> achievementIDs;
};
struct UserClientGmSetSecurityGroup
{
  /*  0..  1*/ STRING name;
  /* 34..  1*/ UINT32 group;
};
struct ClientLiveRegionCharacterCopyResult
{
  /*  0..  1*/ BOOL success;
  /*  4..  1*/ UINT32 token;
};
struct CliChatMessageParty
{
  /*  0..  1*/ STRING text;
  /*100..  1*/ INT32 language;
};
struct PlayerCliSetMinItemLevel
{
  /*  0..  1*/ INT32 minLevel;
};
struct ClientZoneUnderAttack
{
  /*  0..  1*/ INT32 areaID;
};
struct ClientMoveUpdateFlightSpeed
{
  /*  0..  1*/ STRUCT status;
  /* a8..  1*/ FLOAT speed;
};
struct ClientPetBattleRequestFailed
{
  /*  0..  1*/ UINT8 reason;
};
struct ClientPowerUpdate
{
  /*  0..  1*/ Array<ClientPowerUpdatePower> powers;
  /* 18..  1*/ UINT64 guid;
};
struct QuestChoiceItem
{
  /*  0..  1*/ INT32 itemID;
  /*  4..  1*/ INT32 quantity;
};
struct PlayerCliDismissCritter
{
  /*  0..  1*/ UINT64 critterGUID;
};
struct ClientInstanceEncounterEngageUnit
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ UINT8 targetFramePriority;
};
struct ClientLootUpdated
{
  /*  0..  1*/ STRUCT item;
  /* 70..  1*/ UINT64 lootObj;
};
struct PlayerCliDirtyMoney
{
  /*  0..  1*/ UINT64 amount;
};
struct ClientGuildRosterMemberData
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ INT64 weeklyXP;
  /* 10..  1*/ INT64 totalXP;
  /* 18..  1*/ INT32 rankID;
  /* 1c..  1*/ INT32 areaID;
  /* 20..  1*/ INT32 personalAchievementPoints;
  /* 24..  1*/ INT32 guildReputation;
  /* 28..  1*/ INT32 guildRepToCap;
  /* 2c..  1*/ FLOAT lastSave;
  /* 30..  1*/ STRING name;
  /* 64..  1*/ UINT32 virtualRealmAddress;
  /* 68..  1*/ STRING note;
  /* e9..  1*/ STRING officerNote;
  /*16a..  1*/ UINT8 status;
  /*16b..  1*/ UINT8 level;
  /*16c..  1*/ UINT8 classID;
  /*16d..  1*/ UINT8 gender;
  /*16e..  1*/ BOOL authenticated;
  /*16f..  1*/ BOOL sorEligible;
  /*170..  1*/ FixedArray<ClientGuildRosterProfessionData, 2> profession;
};
struct JamPetBattleFullUpdate
{
  /*  0..  1*/ UINT16 waitingForFrontPetsMaxSecs;
  /*  2..  1*/ UINT16 pvpMaxRoundTime;
  /*  4..  1*/ INT32 curRound;
  /*  8..  1*/ UINT32 npcCreatureID;
  /*  c..  1*/ UINT32 npcDisplayID;
  /* 10..  1*/ INT8 curPetBattleState;
  /* 11..  1*/ UINT8 forfeitPenalty;
  /* 18..  1*/ UINT64 initialWildPetGUID;
  /* 20..  1*/ BOOL isPVP;
  /* 21..  1*/ BOOL canAwardXP;
  /* 28..  1*/ FixedArray<JamPetBattlePlayerUpdate, 2> players;
  /* 98..  1*/ FixedArray<JamPetBattleEnviroUpdate, 3> enviros;
};
struct UserClientDumpRideTickets
{
};
struct ClientConnectionFloodDetected
{
};
struct UserClientSetActiveVoiceChannel
{
  /*  0..  1*/ UINT8 channelType;
  /*  1..  1*/ STRING channelName;
};
struct CliChatChannelPassword
{
  /*  0..  1*/ STRING name;
  /* 80..  1*/ STRING channelName;
};
struct ClientUpdateAccountData
{
  /*  0..  1*/ UINT64 player;
  /*  8..  1*/ TIME_T time;
  /* 10..  1*/ UINT32 size;
  /* 14..  1*/ UINT8 dataType;
  /* 18..  1*/ NOT_IMPLEMENTED compressedData;
};
struct PlayerCliUpdateMissileTrajectory
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT16 moveMsgID;
  /*  c..  1*/ FLOAT speed;
  /* 10..  1*/ Optional<JamCliMovementStatus> status;
  /* c0..  1*/ FLOAT pitch;
  /* c4..  1*/ V3 impactPos;
  /* d0..  1*/ INT32 spellID;
  /* d4..  1*/ V3 firePos;
};
struct CliChatAddonMessageParty
{
  /*  0..  1*/ STRING prefix;
  /* 11..  1*/ STRING text;
};
struct PlayerCliCompleteMovie
{
};
struct ClientSuppressNPCGreetings
{
  /*  0..  1*/ BOOL suppressNPCGreetings;
  /*  8..  1*/ UINT64 unitGUID;
};
struct UserRouterClientEnableNagle
{
};
struct ClientTextEmote
{
  /*  0..  1*/ UINT64 sourceGUID;
  /*  8..  1*/ UINT64 targetGUID;
  /* 10..  1*/ INT32 soundIndex;
  /* 14..  1*/ INT32 emoteID;
};
struct GlobalGuildAddXPCheat
{
  /*  0..  1*/ UINT64 guild;
  /*  8..  1*/ INT32 xp;
};
struct QuestRewards
{
  /*  0..  1*/ INT32 choiceItemCount;
  /*  4..  1*/ INT32 itemCount;
  /*  8..  1*/ INT32 money;
  /*  c..  1*/ INT32 xp;
  /* 10..  1*/ INT32 title;
  /* 14..  1*/ INT32 talents;
  /* 18..  1*/ INT32 factionFlags;
  /* 1c..  1*/ INT32 spellCompletionDisplayID;
  /* 20..  1*/ INT32 spellCompletionID;
  /* 24..  1*/ INT32 skillLineID;
  /* 28..  1*/ INT32 numSkillUps;
  /* 2c..  1*/ FixedArray<QuestChoiceItem, 6> choiceItems;
  /* 5c..  1*/ FixedArray<INT32, 4> itemID;
  /* 6c..  1*/ FixedArray<INT32, 4> itemQty;
  /* 7c..  1*/ FixedArray<INT32, 5> factionID;
  /* 90..  1*/ FixedArray<INT32, 5> factionValue;
  /* a4..  1*/ FixedArray<INT32, 5> factionOverride;
  /* b8..  1*/ FixedArray<INT32, 4> currencyID;
  /* c8..  1*/ FixedArray<INT32, 4> currencyQty;
};
struct ClientBattlegroundInit
{
  /*  0..  1*/ UINT16 maxPoints;
};
struct PlayerCliDisableAELooting
{
  /*  0..  1*/ BOOL disable;
};
struct ClientDisplayPlayerChoice
{
  /*  0..  1*/ INT32 choiceID;
  /*  4..  1*/ STRING question;
  /*108..  1*/ Array<PlayerChoiceResponse> responses;
};
struct JamClientBattlePet
{
  /*  0..  1*/ UINT64 battlePetGUID;
  /*  8..  1*/ INT32 speciesID;
  /*  c..  1*/ INT32 creatureID;
  /* 10..  1*/ INT32 displayID;
  /* 14..  1*/ UINT16 breedID;
  /* 16..  1*/ UINT16 level;
  /* 18..  1*/ UINT16 xp;
  /* 1a..  1*/ UINT16 battlePetDBFlags;
  /* 1c..  1*/ INT32 power;
  /* 20..  1*/ INT32 health;
  /* 24..  1*/ INT32 maxHealth;
  /* 28..  1*/ INT32 speed;
  /* 2c..  1*/ STRING customName;
  /* 70..  1*/ Optional<JamClientBattlePetOwnerInfo> ownerInfo;
  /* 88..  1*/ BOOL noRename;
  /* 89..  1*/ UINT8 breedQuality;
};
struct ClientCheatIgnoreRequirementsEnabled
{
};
struct ClientCrossedInebriationThreshold
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ INT32 itemID;
  /*  c..  1*/ INT32 threshold;
};
struct ClientLootResponse
{
  /*  0..  1*/ UINT32 coins;
  /*  4..  1*/ UINT8 lootMethod;
  /*  5..  1*/ UINT8 threshold;
  /*  8..  1*/ UINT64 lootObj;
  /* 10..  1*/ Array<JamLootCurrency> currencies;
  /* 28..  1*/ BOOL personalLooting;
  /* 29..  1*/ UINT8 acquireReason;
  /* 2a..  1*/ BOOL acquired;
  /* 2b..  1*/ BOOL AELooting;
  /* 30..  1*/ UINT64 owner;
  /* 38..  1*/ UINT8 failureReason;
  /* 40..  1*/ Array<JamLootItem> items;
};
struct PlayerCliSetDurabilityCheat
{
  /*  0..  1*/ UINT64 item;
  /*  8..  1*/ UINT32 durability;
};
struct ClientGarrisonDeleteResult
{
  /*  0..  1*/ INT32 result;
  /*  4..  1*/ INT32 garrSiteID;
};
struct ClientGMUnsquelch
{
};
struct CliChatMessageRaid
{
  /*  0..  1*/ STRING text;
  /*100..  1*/ INT32 language;
};
struct PlayerCliUberInvis
{
  /*  0..  1*/ INT8 action;
};
struct JamClientCharacterListItem
{
  /*  0..  1*/ UINT32 displayID;
  /*  4..  1*/ UINT32 displayEnchantID;
  /*  8..  1*/ UINT8 invType;
};
struct UserClientUpdateClientSettings
{
  /*  0..  1*/ STRUCT settings;
};
struct ClientMoveSplineSetNormalFall
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct ClientRandomRoll
{
  /*  0..  1*/ UINT64 roller;
  /*  8..  1*/ INT32 result;
  /*  c..  1*/ INT32 max;
  /* 10..  1*/ INT32 min;
};
struct UserClientGMNukeCharacter
{
  /*  0..  1*/ UINT64 target;
};
struct ClientSetFactionAtWar
{
  /*  0..  1*/ UINT8 factionIndex;
  /*  1..  1*/ UINT8 flags;
};
struct QuestDescEmote
{
  /*  0..  1*/ INT32 type;
  /*  4..  1*/ UINT32 delay;
};
struct PlayerCliMapControllerSetPointsCheat
{
  /*  0..  1*/ INT32 points;
  /*  4..  1*/ UINT8 team;
};
struct ShowZoneRLE
{
  /*  0..  1*/ INT32 run;
  /*  4..  1*/ UINT8 curID;
};
struct PlayerCliStopConversation
{
  /*  0..  1*/ UINT64 conversation;
};
struct ClientGuildEventMotd
{
  /*  0..  1*/ STRING motdText;
};
struct ClientDifferentInstanceFromParty
{
};
struct ClientCancelOrphanSpellVisual
{
  /*  0..  1*/ INT32 spellVisualID;
};
struct ClientCheatIgnoreRequirementsDisabled
{
};
struct ClientAddLossOfControl
{
  /*  0..  1*/ UINT32 durationRemaining;
  /*  8..  1*/ UINT64 caster;
  /* 10..  1*/ UINT32 duration;
  /* 14..  1*/ UINT32 lockoutSchoolMask;
  /* 18..  1*/ INT32 spellID;
  /* 1c..  1*/ INT32 type;
  /* 20..  1*/ INT32 mechanic;
};
struct PlayerMoveStopTurn
{
  /*  0..  1*/ STRUCT status;
};
struct PlayerCliMapControllerSkipStartUpCheat
{
};
struct ClientCorpseReclaimDelay
{
  /*  0..  1*/ UINT32 remaining;
};
struct PlayerCliResetDailyQuest
{
  /*  0..  1*/ INT32 questID;
};
struct ClientSpellPeriodicAuraLog
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ Array<JamPeriodicAuraLogEffect> entries;
  /* 20..  1*/ Optional<JamSpellCastLogData> logData;
  /* 50..  1*/ UINT64 casterGUID;
  /* 58..  1*/ INT32 spellID;
};
struct JSONBnetChallengeFormInput
{
  /*  0..  1*/ STRING input_id;
  /* 41..  1*/ STRING type;
  /* 62..  1*/ STRING label;
  /* e4..  1*/ UINT32 max_length;
  /* e8..  1*/ Array<JamDynamicString> errors;
};
struct UserClientLFGuildBrowse
{
  /*  0..  1*/ INT32 characterLevel;
  /*  4..  1*/ INT32 availability;
  /*  8..  1*/ INT32 classRoles;
  /*  c..  1*/ INT32 playStyle;
};
struct ClientSetLFGTimeWalker
{
  /*  0..  1*/ INT32 lfgDungeonID;
};
struct ClientPetCastFailed
{
  /*  0..  1*/ INT32 reason;
  /*  4..  1*/ INT32 failedArg2;
  /*  8..  1*/ INT32 failedArg1;
  /*  c..  1*/ INT32 spellID;
  /* 10..  1*/ UINT8 castID;
};
struct PlayerCliAuctionListItems
{
  /*  0..  1*/ UINT64 auctioneer;
  /*  8..  1*/ UINT8 sortCount;
  /*  9..  1*/ UINT8 maxLevel;
  /*  c..  1*/ UINT32 offset;
  /* 10..  1*/ INT32 itemClass;
  /* 14..  1*/ UINT8 minLevel;
  /* 18..  1*/ INT32 invType;
  /* 1c..  1*/ INT32 quality;
  /* 20..  1*/ INT32 itemSubclass;
  /* 24..  1*/ BOOL exactMatch;
  /* 25..  1*/ STRING name;
  /*125..  1*/ BOOL onlyUsable;
  /*128..  1*/ NOT_IMPLEMENTED sorts;
};
struct JamCliCreatureStats
{
  /*  0..  1*/ DYNAMICSTRING m_title;
  /* 10..  1*/ DYNAMICSTRING m_titleAlt;
  /* 20..  1*/ DYNAMICSTRING m_cursorName;
  /* 30..  1*/ INT32 m_creatureType;
  /* 34..  1*/ INT32 m_creatureFamily;
  /* 38..  1*/ INT32 m_classification;
  /* 3c..  1*/ FLOAT m_hpMulti;
  /* 40..  1*/ FLOAT m_energyMulti;
  /* 44..  1*/ BOOL m_leader;
  /* 48..  1*/ Array<INT32> m_questItems;
  /* 64..  1*/ INT32 m_creatureMovementInfoID;
  /* 68..  1*/ INT32 m_requiredExpansion;
  /* 6c..  1*/ FixedArray<INT32, 2> m_flags;
  /* 74..  1*/ FixedArray<INT32, 2> m_proxyCreatureID;
  /* 7c..  1*/ FixedArray<INT32, 4> m_creatureDisplayID;
  /* 90..  1*/ FixedArray<DYNAMICSTRING, 4> m_name;
  /* d0..  1*/ FixedArray<DYNAMICSTRING, 4> m_nameAlt;
};
struct ClientGarrisonBuildingSetActiveSpecializationResult
{
  /*  0..  1*/ INT32 currentGarrSpecID;
  /*  4..  1*/ INT32 result;
  /*  8..  1*/ INT32 garrPlotInstanceID;
};
struct PlayerCliChangeCellZone
{
  /*  0..  1*/ UINT8 zoneID;
};
struct ClientCharCustomize
{
  /*  0..  1*/ UINT8 result;
  /*  1..  1*/ UINT8 hairStyleID;
  /*  2..  1*/ UINT8 sexID;
  /*  3..  1*/ UINT8 faceID;
  /*  4..  1*/ STRING charName;
  /* 35..  1*/ UINT8 hairColorID;
  /* 36..  1*/ UINT8 skinID;
  /* 37..  1*/ UINT8 facialHairStyleID;
  /* 38..  1*/ UINT64 charGUID;
};
struct ClientRespondInspectAchievements
{
  /*  0..  1*/ UINT64 player;
  /*  8..  1*/ STRUCT data;
};
struct PlayerCliRequestConquestFormulaConstants
{
};
struct ClientMoveDisableGravity
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientAreaTriggerDebugPlayerInside
{
  /*  0..  1*/ UINT64 triggerGUID;
  /*  8..  1*/ BOOL inside;
};
struct PlayerMoveSetVehicleRecIdAck
{
  /*  0..  1*/ INT32 vehicleRecID;
  /*  8..  1*/ STRUCT data;
};
struct ClientAuctionListOwnerItemsResult
{
  /*  0..  1*/ UINT32 desiredDelay;
  /*  8..  1*/ Array<JamCliAuctionItem> items;
  /* 20..  1*/ UINT32 totalCount;
};
struct ClientClearQuestCompletedBit
{
  /*  0..  1*/ INT32 questID;
  /*  4..  1*/ INT32 bit;
};
struct PlayerCliMailMarkAsRead
{
  /*  0..  1*/ BOOL biReceipt;
  /*  4..  1*/ INT32 mailID;
  /*  8..  1*/ UINT64 mailbox;
};
struct ClientSpellEnergizeLog
{
  /*  0..  1*/ INT32 spellID;
  /*  8..  1*/ UINT64 targetGUID;
  /* 10..  1*/ UINT64 casterGUID;
  /* 18..  1*/ Optional<JamSpellCastLogData> logData;
  /* 48..  1*/ INT32 amount;
  /* 4c..  1*/ INT32 type;
};
struct PlayerCliGetTrophyList
{
  /*  0..  1*/ INT32 trophyTypeID;
};
struct JamGuildBankItemInfo
{
  /*  0..  1*/ INT32 slot;
  /*  8..  1*/ STRUCT item;
  /* 68..  1*/ INT32 count;
  /* 6c..  1*/ INT32 enchantmentID;
  /* 70..  1*/ INT32 charges;
  /* 78..  1*/ Array<JamGuildBankSocketEnchant> socketEnchant;
  /* 90..  1*/ INT32 onUseEnchantmentID;
  /* 94..  1*/ BOOL locked;
  /* 98..  1*/ INT32 flags;
};
struct UserClientBFMgrQueueInviteResponse
{
  /*  0..  1*/ UINT64 queueID;
  /*  8..  1*/ BOOL acceptedInvite;
};
struct UserClientVoiceSessionEnable
{
  /*  0..  1*/ BOOL enableVoiceChat;
  /*  1..  1*/ BOOL enableMicrophone;
};
struct PlayerCliBattlefieldLeave
{
};
struct UserClientBattlefieldSetNextTransitionTime
{
  /*  0..  1*/ INT32 secondsUntilTransition;
  /*  4..  1*/ INT32 queueID;
};
struct QuestObjectiveCollect
{
  /*  0..  1*/ INT32 objectID;
  /*  4..  1*/ INT32 amount;
};
struct PlayerCliItemBindCheat
{
  /*  0..  1*/ BOOL bind;
  /*  4..  1*/ INT32 itemID;
};
struct JamAvailableCharacterTemplateSet
{
  /*  0..  1*/ UINT32 templateSetID;
  /*  4..  1*/ STRING name;
  /* 45..  1*/ STRING description;
  /*448..  1*/ Array<JamAvailableCharacterTemplateClass> classes;
};
struct UserClientSetAssistantLeader
{
  /*  0..  1*/ BOOL set;
  /*  1..  1*/ UINT8 partyIndex;
  /*  8..  1*/ UINT64 target;
};
struct ClientQuestUpdateComplete
{
  /*  0..  1*/ INT32 questID;
};
struct UserClientSetLuckFactor
{
  /*  0..  1*/ FLOAT luckFactor;
};
struct PlayerCliBinderActivate
{
  /*  0..  1*/ UINT64 binder;
};
struct CliChatMessageYell
{
  /*  0..  1*/ STRING text;
  /*100..  1*/ INT32 language;
};
struct JamCliClientSettings
{
  /*  0..  1*/ FLOAT farClip;
};
struct UserClientLFGListGetStatus
{
};
struct UserClientLiveRegionAccountRestore
{
  /*  0..  1*/ UINT32 token;
  /*  4..  1*/ STRING devRealmOverride;
  /*105..  1*/ Optional<UINT8> regionID;
  /*107..  1*/ STRING devCharOverride;
};
struct ClientLogoutCancelAck
{
};
struct PlayerCliCreateMonster
{
  /*  0..  1*/ INT32 entryID;
  /*  4..  1*/ V3 offset;
};
struct ClientSpellHealLog
{
  /*  0..  1*/ Optional<FLOAT> critRollMade;
  /*  8..  1*/ INT32 spellID;
  /* 10..  1*/ Optional<JamSpellCastLogData> logData;
  /* 40..  1*/ INT32 overHeal;
  /* 44..  1*/ Optional<FLOAT> critRollNeeded;
  /* 4c..  1*/ BOOL crit;
  /* 4d..  1*/ BOOL multistrike;
  /* 50..  1*/ INT32 absorbed;
  /* 58..  1*/ UINT64 casterGUID;
  /* 60..  1*/ INT32 health;
  /* 68..  1*/ UINT64 targetGUID;
};
struct ClientMoveSetWaterWalk
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientPetBattleFinished
{
};
struct UserClientSendSoRRequestViaAddress
{
  /*  0..  1*/ STRING text;
  /*3fd..  1*/ STRING email;
};
struct PlayerCliBattlefieldPort
{
  /*  0..  1*/ STRUCT ticket;
  /* 18..  1*/ BOOL acceptedInvite;
};
struct QuestCurrency
{
  /*  0..  1*/ INT32 currencyID;
  /*  4..  1*/ INT32 amount;
};
struct UserClientGuildFlush
{
  /*  0..  1*/ UINT64 guildGUID;
};
struct PlayerCliGarrisonSetFollowerItemLevelCheat
{
  /*  0..  1*/ UINT64 followerDBID;
  /*  8..  1*/ INT32 itemLevelArmor;
  /*  c..  1*/ INT32 itemLevelWeapon;
};
struct ClientPartyKillLog
{
  /*  0..  1*/ UINT64 victim;
  /*  8..  1*/ UINT64 player;
};
struct UserClientCalendarRemoveInvite
{
  /*  0..  1*/ UINT64 moderatorID;
  /*  8..  1*/ UINT64 guid;
  /* 10..  1*/ UINT64 eventID;
  /* 18..  1*/ UINT64 inviteID;
};
struct JamSpellMissStatus
{
  /*  0..  1*/ UINT8 reason;
  /*  1..  1*/ UINT8 reflectStatus;
};
struct ClientAuctionListItemsResult
{
  /*  0..  1*/ UINT32 desiredDelay;
  /*  8..  1*/ Array<JamCliAuctionItem> items;
  /* 20..  1*/ BOOL onlyUsable;
  /* 24..  1*/ UINT32 totalCount;
};
struct ClientFeignDeathResisted
{
};
struct PlayerCliSetPowerCheat
{
  /*  0..  1*/ INT32 power;
  /*  4..  1*/ UINT8 powerType;
};
struct CliChatMessageRaidWarning
{
  /*  0..  1*/ INT32 language;
  /*  4..  1*/ STRING text;
};
struct ClientPetBattleChatRestricted
{
};
struct UserClientSwitchCharacter
{
  /*  0..  1*/ STRING characterName;
};
struct PlayerCliQuestConfirmAccept
{
  /*  0..  1*/ INT32 questID;
};
struct GlobalGuildChangeNameRequest
{
  /*  0..  1*/ STRING newName;
};
struct QuestGiverRequestItems
{
  /*  0..  1*/ UINT64 questGiverGUID;
  /*  8..  1*/ INT32 questGiverCreatureID;
  /*  c..  1*/ INT32 questID;
  /* 10..  1*/ INT32 compEmoteDelay;
  /* 14..  1*/ INT32 compEmoteType;
  /* 18..  1*/ BOOL autoLaunched;
  /* 1c..  1*/ INT32 suggestPartyMembers;
  /* 20..  1*/ INT32 moneyToGet;
  /* 28..  1*/ Array<QuestObjectiveCollect> questObjectiveCollect;
  /* 40..  1*/ Array<QuestCurrency> questCurrency;
  /* 58..  1*/ INT32 statusFlags;
  /* 5c..  1*/ FixedArray<INT32, 2> questFlags;
};
struct PlayerCliSetGuildCriteria
{
  /*  0..  1*/ UINT64 quantity;
  /*  8..  1*/ INT32 criteriaID;
};
struct ClientProcResist
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ Optional<FLOAT> needed;
  /* 10..  1*/ INT32 spellID;
  /* 14..  1*/ Optional<FLOAT> rolled;
  /* 20..  1*/ UINT64 caster;
};
struct ClientMoveSplineSetSwimBackSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
};
struct UserClientDFSearchJoin
{
  /*  0..  1*/ UINT32 slot;
};
struct UserClientGMSSHijackCheat
{
  /*  0..  1*/ UINT64 player;
};
struct PlayerCliJoinRatedBattleground
{
};
struct PlayerCliSetBreath
{
  /*  0..  1*/ UINT8 breathValue;
};
struct PlayerMoveSetPitch
{
  /*  0..  1*/ STRUCT status;
};
struct UserClientTaxiEnable
{
  /*  0..  1*/ STRING target;
  /*100..  1*/ UINT32 nodeID;
};
struct PlayerCliResetPersonalPhasesCheat
{
  /*  0..  1*/ BOOL allPhases;
  /*  8..  1*/ Array<UINT16> phaseIDs;
};
struct ClientEnvironmentalDamageLog
{
  /*  0..  1*/ Optional<JamSpellCastLogData> logData;
  /* 30..  1*/ INT32 absorbed;
  /* 38..  1*/ UINT64 victim;
  /* 40..  1*/ UINT8 type;
  /* 44..  1*/ INT32 resisted;
  /* 48..  1*/ INT32 amount;
};
struct UserClientServerCommand
{
  /*  0..  1*/ STRING line;
  /*100..  1*/ UINT64 target;
};
struct UserClientGMChangePVPRating
{
  /*  0..  1*/ INT32 season;
  /*  4..  1*/ INT32 bracket;
  /*  8..  1*/ INT32 rating;
};
struct PlayerCliTogglePVP
{
};
struct UserClientCanDuel
{
  /*  0..  1*/ UINT64 targetGUID;
};
struct UserClientInspectPVP
{
  /*  0..  1*/ UINT64 inspectTarget;
  /*  8..  1*/ UINT32 inspectRealmAddress;
};
struct PlayerCliVoidStorageTransfer
{
  /*  0..  1*/ Array<UINT64> withdrawals;
  /* 18..  1*/ Array<UINT64> deposits;
  /* 30..  1*/ UINT64 npc;
};
struct QuestGiverOfferReward
{
  /*  0..  1*/ UINT64 questGiverGUID;
  /*  8..  1*/ INT32 questGiverCreatureID;
  /*  c..  1*/ INT32 questID;
  /* 10..  1*/ BOOL autoLaunched;
  /* 14..  1*/ INT32 suggestedPartyMembers;
  /* 18..  1*/ STRUCT questRewards;
  /* f0..  1*/ Array<QuestDescEmote> emotes;
  /*108..  1*/ FixedArray<INT32, 2> questFlags;
};
struct ClientItemBonusDebug
{
  /*  0..  1*/ STRING text;
};
struct UserClientSetEveryoneIsAssistant
{
  /*  0..  1*/ UINT8 partyIndex;
  /*  1..  1*/ BOOL everyoneIsAssistant;
};
struct UserClientDanceStudioAddMove
{
  /*  0..  1*/ UINT64 imageBase;
  /*  8..  1*/ STRING pseudoFilename;
  /* 48..  1*/ UINT64 caller;
  /* 50..  1*/ STRING code;
};
struct PlayerCliPetStopAttack
{
  /*  0..  1*/ UINT64 petGUID;
};
struct PlayerCliRequestAverageItemLevel
{
};
struct GlobalGuildQueryMembersForRecipe
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ INT32 uniqueBit;
  /*  c..  1*/ INT32 skillLineID;
  /* 10..  1*/ INT32 spellID;
};
struct ClientControlUpdate
{
  /*  0..  1*/ BOOL on;
  /*  8..  1*/ UINT64 guid;
};
struct PlayerCliCompleteAccountAchievement
{
  /*  0..  1*/ INT32 achievementID;
};
struct ClientSpellMultistrikeEffect
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ UINT64 caster;
  /* 10..  1*/ INT32 spellID;
  /* 14..  1*/ INT16 procCount;
  /* 16..  1*/ INT16 procNum;
};
struct JamClientAuraDataInfo
{
  /*  0..  1*/ INT32 spellID;
  /*  4..  1*/ UINT8 flags;
  /*  8..  1*/ UINT32 activeFlags;
  /*  c..  1*/ UINT16 castLevel;
  /*  e..  1*/ UINT8 applications;
  /* 10..  1*/ Optional<UINT64> castUnit;
  /* 20..  1*/ Optional<INT32> duration;
  /* 28..  1*/ Optional<INT32> remaining;
  /* 30..  1*/ Array<FLOAT> points;
  /* 48..  1*/ Array<FLOAT> estimatedPoints;
};
struct JamCliStructMailAttachment
{
  /*  0..  1*/ UINT64 itemGUID;
  /*  8..  1*/ UINT8 attachPosition;
};
struct ClientQueryCreatureResponse
{
  /*  0..  1*/ BOOL allow;
  /*  8..  1*/ STRUCT stats;
  /*118..  1*/ UINT32 creatureID;
};
struct PlayerCliGrantLevel
{
  /*  0..  1*/ UINT64 target;
};
struct UserClientCalendarEventStatus
{
  /*  0..  1*/ UINT64 moderatorID;
  /*  8..  1*/ UINT64 eventID;
  /* 10..  1*/ UINT64 inviteID;
  /* 18..  1*/ UINT64 guid;
  /* 20..  1*/ UINT8 status;
};
struct ClientCharFactionChangeResult
{
  /*  0..  1*/ UINT8 result;
  /*  8..  1*/ UINT64 guid;
  /* 10..  1*/ Optional<JamCharFactionChangeDisplayInfo> display;
};
struct DeclinedBattlePetNames
{
  /*  0..  1*/ FixedArrayStrings<5 /*times*/, 65 /*chars*/> name;
};
struct PlayerCliSetLFGBonusFactionID
{
  /*  0..  1*/ INT32 factionID;
};
struct ClientAuthResponse
{
  /*  0..  1*/ Optional<JamAuthWaitInfo> waitInfo;
  /*  c..  1*/ UINT8 result;
  /* 10..  1*/ Optional<JamAuthSuccessInfo> successInfo;
};
struct GlobalGuildChallengeUpdateRequest
{
};
struct ClientPlayScene
{
  /*  0..  1*/ STRUCT playData;
};
struct JamCommentatorMap
{
  /*  0..  1*/ UINT32 teamSize;
  /*  4..  1*/ UINT32 minLevelRange;
  /*  8..  1*/ UINT32 maxLevelRange;
  /*  c..  1*/ INT32 difficultyID;
  /* 10..  1*/ Array<JamCommentatorInstance> instances;
};
struct PlayerGuildAwardChallengeCheat
{
  /*  0..  1*/ INT32 challengeType;
};
struct ClientBFMgrExitRequest
{
};
struct JamClientAuraInfo
{
  /*  0..  1*/ UINT8 slot;
  /*  8..  1*/ Optional<JamClientAuraDataInfo> auraData;
};
struct PlayerCliPVPLogData
{
};
struct UserClientGmSilence
{
  /*  0..  1*/ INT32 action;
  /*  4..  1*/ STRING name;
};
struct ClientPlayerTabardVendorActivate
{
  /*  0..  1*/ UINT64 vendor;
};
struct PlayerCliLootRelease
{
  /*  0..  1*/ UINT64 object;
};
struct JamQuestPOIBlobPoint
{
  /*  0..  1*/ INT32 x;
  /*  4..  1*/ INT32 y;
};
struct ClientWaitQueueUpdate
{
  /*  0..  1*/ STRUCT waitInfo;
};
struct PlayerMoveCollisionEnableAck
{
  /*  0..  1*/ STRUCT data;
};
struct ClientSceneObjectPetBattleFinalRound
{
  /*  0..  1*/ UINT64 sceneObjectGUID;
  /*  8..  1*/ STRUCT msgData;
};
struct UserClientSetSavedInstanceExtend
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ BOOL extend;
  /*  8..  1*/ UINT32 difficultyID;
};
struct PlayerMoveRemoveMovementForceAck
{
  /*  0..  1*/ STRUCT data;
  /* b0..  1*/ UINT32 movementForceID;
};
struct PlayerCliUnlearnSkill
{
  /*  0..  1*/ INT32 skillLine;
};
struct UserClientSetPlayerDeclinedNames
{
  /*  0..  1*/ UINT64 player;
  /*  8..  1*/ FixedArrayStrings<5 /*times*/, 65 /*chars*/> declinedName;
};
struct UserClientGuildSetGuildMaster
{
  /*  0..  1*/ STRING newMasterName;
};
struct ClientRoleChangedInform
{
  /*  0..  1*/ UINT64 changedUnit;
  /*  8..  1*/ UINT64 from;
  /* 10..  1*/ UINT32 newRole;
  /* 14..  1*/ UINT32 oldRole;
  /* 18..  1*/ UINT8 partyIndex;
};
struct PlayerCliGMPhaseDump
{
  /*  0..  1*/ UINT64 target;
};
struct UserClientDFSetNeeds
{
  /*  0..  1*/ BOOL delta;
  /*  8..  1*/ STRUCT ticket;
  /* 20..  1*/ FixedArray<UINT32, 3> needs;
};
struct JamUnwrappedTradeItem
{
  /*  0..  1*/ STRUCT item;
  /* 60..  1*/ INT32 enchantID;
  /* 64..  1*/ INT32 onUseEnchantmentID;
  /* 68..  1*/ UINT64 creator;
  /* 70..  1*/ INT32 charges;
  /* 74..  1*/ BOOL lock;
  /* 78..  1*/ UINT32 maxDurability;
  /* 7c..  1*/ UINT32 durability;
  /* 80..  1*/ FixedArray<INT32, 3> socketEnchant;
};
struct ClientAuraUpdate
{
  /*  0..  1*/ BOOL updateAll;
  /*  8..  1*/ UINT64 unitGUID;
  /* 10..  1*/ Array<JamClientAuraInfo> auras;
};
struct ClientMoveSplineEnableGravity
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct JamCliSupportTicketMailInfo
{
  /*  0..  1*/ INT32 mailID;
  /*  4..  1*/ STRING mailBody;
  /*1f45..  1*/ STRING mailSubject;
};
struct PlayerCliClearWeeklyCurrencyEarned
{
};
struct ClientGodMode
{
  /*  0..  1*/ BOOL enabled;
};
struct PlayerCliGarrisonRequestBlueprintAndSpecializationData
{
};
struct PlayerCliRandomizeSurveyHintCheat
{
  /*  0..  1*/ UINT8 randomize;
};
struct JamQuestPOIBlobData
{
  /*  0..  1*/ INT32 blobIndex;
  /*  4..  1*/ INT32 objectiveIndex;
  /*  8..  1*/ INT32 questObjectiveID;
  /*  c..  1*/ INT32 questObjectID;
  /* 10..  1*/ INT32 mapID;
  /* 14..  1*/ INT32 worldMapAreaID;
  /* 18..  1*/ INT32 floor;
  /* 1c..  1*/ INT32 priority;
  /* 20..  1*/ INT32 flags;
  /* 24..  1*/ INT32 worldEffectID;
  /* 28..  1*/ INT32 playerConditionID;
  /* 2c..  1*/ INT32 numPoints;
  /* 30..  1*/ Array<JamQuestPOIBlobPoint> points;
};
struct PlayerCliSetBackpackAutosortDisabled
{
  /*  0..  1*/ BOOL disable;
};
struct ClientGuildInviteDeclined
{
  /*  0..  1*/ STRING name;
  /* 31..  1*/ BOOL autoDecline;
  /* 34..  1*/ UINT32 virtualRealmAddress;
};
struct ClientMoveUnsetCanTurnWhileFalling
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientSuspendToken
{
  /*  0..  1*/ CLIENT_SUSPEND_REASON reason;
  /*  4..  1*/ UINT32 sequence;
};
struct JamSpellProcsPerMinuteLogData
{
  /*  0..  1*/ BOOL proc;
  /*  4..  1*/ INT32 spellID;
  /*  8..  1*/ FLOAT baseProcRate;
  /*  c..  1*/ UINT32 now;
  /* 10..  1*/ UINT32 lastChanceTimestamp;
  /* 14..  1*/ UINT32 lastProcTimestamp;
  /* 18..  1*/ UINT32 lastChanceTime;
  /* 1c..  1*/ UINT32 lastProcTime;
  /* 20..  1*/ BOOL normalizeAuraTime;
  /* 24..  1*/ UINT32 auraTime;
  /* 28..  1*/ FLOAT intervalsSinceLastProc;
  /* 2c..  1*/ FLOAT unluckyStreakDef;
  /* 30..  1*/ FLOAT unluckyMultiplier;
  /* 34..  1*/ INT32 reallyUnluckyDef;
  /* 38..  1*/ FLOAT procChance;
  /* 3c..  1*/ FLOAT procRate;
  /* 40..  1*/ FLOAT roll;
  /* 48..  1*/ Array<JamSpellProcsPerMinuteCalc> calcHistory;
};
struct ClientDebugDrawAddSample
{
  /*  0..  1*/ UINT32 id;
  /*  4..  1*/ FLOAT x;
  /*  8..  1*/ FLOAT y;
  /*  c..  1*/ UINT32 sourceID;
};
struct JamCliAreaTrigger
{
  /*  0..  1*/ UINT32 elapsedMs;
  /*  4..  1*/ BOOL absoluteOrientation;
  /*  5..  1*/ BOOL dynamicShape;
  /*  6..  1*/ BOOL attached;
  /*  7..  1*/ BOOL faceMovementDir;
  /*  8..  1*/ BOOL followsTerrain;
  /*  c..  1*/ V3 rollPitchYaw;
  /* 18..  1*/ Optional<C3Vector> targetRollPitchYaw;
  /* 28..  1*/ Optional<UINT32> scaleCurveID;
  /* 30..  1*/ Optional<UINT32> morphCurveID;
  /* 38..  1*/ Optional<UINT32> facingCurveID;
  /* 40..  1*/ Optional<UINT32> moveCurveID;
  /* 48..  1*/ Optional<JamCliAreaTriggerSphere> areaTriggerSphere;
  /* 54..  1*/ Optional<JamCliAreaTriggerBox> areaTriggerBox;
  /* 70..  1*/ Optional<JamCliAreaTriggerPolygon> areaTriggerPolygon;
  /* b0..  1*/ Optional<JamCliAreaTriggerCylinder> areaTriggerCylinder;
  /* c8..  1*/ Optional<JamCliAreaTriggerSpline> areaTriggerSpline;
};
struct JamClientWorldStateInfo
{
  /*  0..  1*/ INT32 variableID;
  /*  4..  1*/ INT32 value;
};
struct PlayerCliSetFactionUsingEnglishCheat
{
  /*  0..  1*/ STRING arguments;
};
struct PlayerCliStartDrawingServerSidePos
{
};
struct ClientInvalidPromotionCode
{
};
struct JamLFGListBlacklistEntry
{
  /*  0..  1*/ UINT32 activityID;
  /*  4..  1*/ UINT32 reason;
};
struct ClientQuestGiverRequestItems
{
  /*  0..  1*/ STRING questTitle;
  /*200..  1*/ STRUCT questData;
  /*268..  1*/ STRING completionText;
};
struct PlayerCliRequestCategoryCooldowns
{
};
struct ClientDismount
{
  /*  0..  1*/ UINT64 guid;
};
struct PlayerCliAuctionHelloRequest
{
  /*  0..  1*/ UINT64 auctioneer;
};
struct ClientGarrisonPlotRemoved
{
  /*  0..  1*/ INT32 garrPlotInstanceID;
};
struct PlayerCliQueryPageText
{
  /*  0..  1*/ UINT64 itemGUID;
  /*  8..  1*/ UINT32 pageTextID;
};
struct JamQuestPOIData
{
  /*  0..  1*/ INT32 questID;
  /*  4..  1*/ INT32 numBlobs;
  /*  8..  1*/ Array<JamQuestPOIBlobData> blobs;
};
struct ClientAllAchievementData
{
  /*  0..  1*/ STRUCT data;
};
struct ClientMoveSetIgnoreMovementForces
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientClearItemChallengeModeData
{
  /*  0..  1*/ UINT64 itemGUID;
};
struct PlayerMoveHeartbeat
{
  /*  0..  1*/ STRUCT status;
};
struct UserClientGuildInviteByName
{
  /*  0..  1*/ STRING name;
};
struct JamClientAuctionOwnerNotification
{
  /*  0..  1*/ INT32 auctionItemID;
  /*  8..  1*/ UINT64 bidAmount;
  /* 10..  1*/ STRUCT item;
};
struct PlayerCliTurnInPetition
{
  /*  0..  1*/ UINT64 item;
};
struct UserClientSendSoRRequestViaBnetAccountID
{
  /*  0..  1*/ STRING text;
  /*400..  1*/ UINT32 bnetAccountID;
};
struct ClientGarrisonFollowerChangedXP
{
  /*  0..  1*/ STRUCT follower;
};
struct UserClientPetBeastMasterCheat
{
  /*  0..  1*/ INT32 action;
  /*  4..  1*/ STRING name;
};
struct PlayerCliGdfSimCheat
{
  /*  0..  1*/ FLOAT gdfUnitBlend;
  /*  4..  1*/ FLOAT gdfToEloMultiplier;
  /*  8..  1*/ FLOAT beta2;
  /*  c..  1*/ INT32 noShowPenalty0;
  /* 10..  1*/ INT32 noShowPenalty1;
  /* 14..  1*/ FLOAT minVariance;
  /* 18..  1*/ BOOL winner;
  /* 20..  1*/ Array<GdfSimPlayer> players;
  /* 38..  1*/ FLOAT mean;
  /* 3c..  1*/ BOOL boostType;
};
struct ClientGuildFlaggedForRename
{
  /*  0..  1*/ BOOL flagSet;
};
struct ClientItemExpirePurchaseRefund
{
  /*  0..  1*/ UINT64 itemGUID;
};
struct ClientPetSpellsMessage
{
  /*  0..  1*/ STRUCT spells;
};
struct ClientDebugDrawCone
{
  /*  0..  1*/ V3 base;
  /*  c..  1*/ FLOAT baseradius;
  /* 10..  1*/ UINT32 id;
  /* 14..  1*/ V3 direction;
  /* 20..  1*/ FLOAT height;
  /* 24..  1*/ UINT32 color;
  /* 28..  1*/ FLOAT lifetime;
  /* 2c..  1*/ UINT32 settings;
};
struct PlayerCliGarrisonPortCheat
{
};
struct UserClientGmFreeze
{
  /*  0..  1*/ STRING name;
};
struct ClientSetProficiency
{
  /*  0..  1*/ UINT32 proficiencyMask;
  /*  4..  1*/ UINT8 proficiencyClass;
};
struct UserClientGMRemoveAchievement
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ STRING target;
  /*13c..  1*/ INT32 achievementID;
};
struct PlayerCliPetBattleRequestUpdate
{
  /*  0..  1*/ BOOL canceled;
  /*  8..  1*/ UINT64 targetGUID;
};
struct PlayerCliCancelQueuedSpell
{
};
struct ClientMoveUnsetIgnoreMovementForces
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientLFGListJoinResult
{
  /*  0..  1*/ STRUCT ticket;
  /* 18..  1*/ UINT8 resultDetail;
  /* 19..  1*/ UINT8 result;
};
struct ClientQuestGiverQuestComplete
{
  /*  0..  1*/ BOOL useQuestReward;
  /*  4..  1*/ INT32 skillLineIDReward;
  /*  8..  1*/ INT32 moneyReward;
  /*  c..  1*/ INT32 numSkillUpsReward;
  /* 10..  1*/ INT32 xpReward;
  /* 14..  1*/ INT32 questId;
  /* 18..  1*/ INT32 talentReward;
  /* 1c..  1*/ BOOL launchGossip;
};
struct ClientPetDismissSound
{
  /*  0..  1*/ INT32 modelID;
  /*  4..  1*/ V3 modelPosition;
};
struct PlayerCliTrainerBuySell
{
  /*  0..  1*/ UINT64 trainerGUID;
  /*  8..  1*/ INT32 trainerID;
  /*  c..  1*/ INT32 spellID;
};
struct GlobalBlackMarketDeleteAuctionCheat
{
  /*  0..  1*/ INT32 marketID;
};
struct ClientContactList
{
  /*  0..  1*/ Array<JamContactInfo> contacts;
  /* 18..  1*/ UINT32 flags;
};
struct PlayerCliAttackSwing
{
  /*  0..  1*/ UINT64 victim;
};
struct PlayerMoveForceRunSpeedChangeAck
{
  /*  0..  1*/ STRUCT data;
};
struct ClientMoveSetTurnRate
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
  /*  c..  1*/ FLOAT speed;
};
struct ClientClearCooldowns
{
  /*  0..  1*/ Array<INT32> spellID;
  /* 18..  1*/ UINT64 guid;
};
struct JamClientGMCharacterRestoreResponseWarning
{
  /*  0..  1*/ STRING text;
};
struct ClientTrainerBuyFailed
{
  /*  0..  1*/ UINT64 trainerGUID;
  /*  8..  1*/ INT32 trainerFailedReason;
  /*  c..  1*/ INT32 spellID;
};
struct PlayerCliDeclineGuildInvites
{
  /*  0..  1*/ BOOL allow;
};
struct ClientUndeleteCharacterResponse
{
  /*  0..  1*/ UINT64 characterGuid;
  /*  8..  1*/ INT32 clientToken;
  /*  c..  1*/ UNDELETE_CHARACTER_RESULT result;
};
struct PlayerCliGarrisonPurchaseBuilding
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ INT32 buildingID;
  /*  c..  1*/ INT32 plotInstanceID;
};
struct JamLFGBlackListSlot
{
  /*  0..  1*/ UINT32 slot;
  /*  4..  1*/ UINT32 reason;
  /*  8..  1*/ INT32 subReason1;
  /*  c..  1*/ INT32 subReason2;
};
struct ClientGameObjectCustomAnim
{
  /*  0..  1*/ UINT64 objectGUID;
  /*  8..  1*/ UINT32 customAnim;
  /*  c..  1*/ BOOL playAsDespawn;
};
struct ClientAttackStart
{
  /*  0..  1*/ UINT64 attacker;
  /*  8..  1*/ UINT64 victim;
};
struct UserClientQueryPlayerName
{
  /*  0..  1*/ UINT64 player;
  /*  8..  1*/ STRUCT hint;
};
struct ClientInventoryChangeFailure
{
  /*  0..  1*/ INT8 bagResult;
  /*  1..  1*/ UINT8 containerBSlot;
  /*  8..  1*/ UINT64 srcContainer;
  /* 10..  1*/ UINT64 dstContainer;
  /* 18..  1*/ INT32 srcSlot;
  /* 1c..  1*/ INT32 limitCategory;
  /* 20..  1*/ INT32 level;
  /* 28..  1*/ FixedArray<UINT64, 2> item;
};
struct PlayerCliEnableDebugPerf
{
  /*  0..  1*/ BOOL enable;
};
struct PlayerChoiceResponse
{
  /*  0..  1*/ INT32 responseID;
  /*  4..  1*/ STRING answer;
  /*194..  1*/ STRING description;
  /*7d4..  1*/ INT32 choiceArtFileID;
  /*7d8..  1*/ Optional<PlayerChoiceResponseReward> reward;
};
struct ClientFailedPlayerCondition
{
  /*  0..  1*/ INT32 conditionID;
};
struct PlayerCliResetWeeklySpells
{
};
struct JamUserClientReorderEntry
{
  /*  0..  1*/ UINT64 playerGUID;
  /*  8..  1*/ UINT8 newPosition;
};
struct ClientCalendarEventInviteAlert
{
  /*  0..  1*/ UINT8 status;
  /*  8..  1*/ UINT64 ownerGUID;
  /* 10..  1*/ UINT8 moderatorStatus;
  /* 18..  1*/ UINT64 eventGuildID;
  /* 20..  1*/ UINT64 invitedByGUID;
  /* 28..  1*/ UINT32 flags;
  /* 2c..  1*/ STRING eventName;
  /* b0..  1*/ INT32 textureID;
  /* b8..  1*/ UINT64 inviteID;
  /* c0..  1*/ UINT8 eventType;
  /* c8..  1*/ UINT64 eventID;
  /* d0..  1*/ UINT32 date;
};
struct PlayerCliQuestGiverCancel
{
  /*  0..  1*/ UINT64 questGiverGUID;
  /*  8..  1*/ INT32 questID;
};
struct GlobalLFGuildDeclineRecruit
{
  /*  0..  1*/ UINT64 recruitGUID;
};
struct ClientBattlePayDeliveryEnded
{
  /*  0..  1*/ UINT64 distributionID;
  /*  8..  1*/ Array<JamItemInstance> items;
};
struct UserClientBattlePetSummon
{
  /*  0..  1*/ UINT64 battlePetGUID;
};
struct PlayerCliUseCritterItem
{
  /*  0..  1*/ UINT64 itemGUID;
};
struct ClientChannelNotifyJoined
{
  /*  0..  1*/ STRING channelWelcomeMsg;
  /*204..  1*/ INT32 chatChannelID;
  /*208..  1*/ INT32 instanceID;
  /*20c..  1*/ UINT8 channelFlags;
  /*20d..  1*/ STRING channel;
};
struct JamLFGBlackList
{
  /*  0..  1*/ Optional<UINT64> playerGuid;
  /* 10..  1*/ Array<JamLFGBlackListSlot> slot;
};
struct UserClientGMSummon
{
  /*  0..  1*/ STRING playerName;
};
struct ClientMoveUpdateRemoveMovementForce
{
  /*  0..  1*/ UINT32 movementForceID;
  /*  8..  1*/ STRUCT status;
};
struct UserClientBattlePayStartPurchase
{
  /*  0..  1*/ UINT64 targetCharacter;
  /*  8..  1*/ UINT32 productID;
  /*  c..  1*/ UINT32 clientToken;
};
struct ClientGameObjectDespawn
{
  /*  0..  1*/ UINT64 objectGUID;
};
struct ClientStartElapsedTimer
{
  /*  0..  1*/ STRUCT timer;
};
struct PlayerMoveStartStrafeLeft
{
  /*  0..  1*/ STRUCT status;
};
struct ClientSetPlayerDeclinedNamesResult
{
  /*  0..  1*/ UINT64 player;
  /*  8..  1*/ INT32 resultCode;
};
struct PlayerCliCompleteAchievementCheat
{
  /*  0..  1*/ INT32 achievementID;
  /*  4..  1*/ BOOL complete;
};
struct ClientTutorialFlags
{
  /*  0..  1*/ FixedArray<UINT8, 32> tutorialData;
};
struct PlayerCliDebugTimeWalkerLevels
{
  /*  0..  1*/ UINT32 playerLevel;
  /*  4..  1*/ UINT32 itemLevel;
};
struct PlayerMoveStartPitchDown
{
  /*  0..  1*/ STRUCT status;
};
struct JamGuildNewsEvent
{
  /*  0..  1*/ INT32 id;
  /*  4..  1*/ NOT_IMPLEMENTED completedDate;
  /* 24..  1*/ INT32 type;
  /* 28..  1*/ INT32 flags;
  /* 30..  1*/ UINT64 memberGuid;
  /* 38..  1*/ Array<UINT64> memberList;
  /* 50..  1*/ FixedArray<INT32, 2> data;
};
struct ClientUpdateCapturePoint
{
  /*  0..  1*/ STRUCT capturePointInfo;
};
struct ClientClearAllSpellCharges
{
  /*  0..  1*/ UINT64 unit;
};
struct PlayerCliRequestLFGListBlacklist
{
};
struct JamAreaShareMappingInfo
{
  /*  0..  1*/ UINT32 areaShareID;
  /*  8..  1*/ Array<UINT32> areaIDs;
  /* 20..  1*/ UINT32 hostingRealm;
  /* 28..  1*/ Array<UINT32> otherRealms;
};
struct UserRouterClientAuthSession
{
  /*  0..  1*/ UINT32 siteID;
  /*  4..  1*/ INT8 loginServerType;
  /*  5..  1*/ INT8 buildType;
  /*  8..  1*/ UINT32 realmID;
  /*  c..  1*/ UINT16 build;
  /* 10..  1*/ UINT32 localChallenge;
  /* 14..  1*/ INT32 loginServerID;
  /* 18..  1*/ UINT32 regionID;
  /* 20..  1*/ UINT64 dosResponse;
  /* 28..  1*/ FixedArray<UINT8, 20> digest;
  /* 3c..  1*/ STRING account;
  /*53d..  1*/ BOOL useIPv6;
  /*540..  1*/ NOT_IMPLEMENTED addonInfo;
};
struct JamCliSceneObjectEvent
{
  /*  0..  1*/ STRING eventScript;
};
struct ClientCorpseTransportQuery
{
  /*  0..  1*/ V3 position;
  /*  c..  1*/ FLOAT facing;
};
struct PlayerCliQueryObjPosition
{
  /*  0..  1*/ BOOL toClipboard;
  /*  8..  1*/ UINT64 guid;
};
struct PlayerCliScenarioShutdown
{
};
struct PlayerCliUsedFollow
{
};
struct ClientFeatureSystemStatusGlueScreen
{
  /*  0..  1*/ BOOL bpayStoreAvailable;
  /*  1..  1*/ BOOL bpayStoreDisabledByParentalControls;
  /*  2..  1*/ BOOL charUndeleteEnabled;
  /*  3..  1*/ BOOL bpayStoreEnabled;
};
struct ClientDisplayToast
{
  /*  0..  1*/ BOOL bonusRoll;
  /*  4..  1*/ TOAST_TYPE type;
  /*  8..  1*/ UINT32 currencyID;
  /*  c..  1*/ UINT8 displayToastMethod;
  /*  d..  1*/ BOOL mailed;
  /* 10..  1*/ STRUCT item;
  /* 70..  1*/ INT32 lootSpec;
  /* 74..  1*/ UINT32 quantity;
};
struct ClientLogoutComplete
{
  /*  0..  1*/ UINT64 switchToCharacter;
};
struct PlayerCliSetSheathed
{
  /*  0..  1*/ INT32 currentSheathState;
  /*  4..  1*/ BOOL animate;
};
struct ClientBattlefieldPortDenied
{
};
struct GlobalGuildShiftRank
{
  /*  0..  1*/ BOOL shiftUp;
  /*  4..  1*/ INT32 rankOrder;
};
struct ClientLiveRegionGetAccountCharacterListResult
{
  /*  0..  1*/ BOOL success;
  /*  8..  1*/ Array<JamCliAccountCharacterData> characters;
  /* 20..  1*/ UINT32 token;
};
struct PlayerCliMailDelete
{
  /*  0..  1*/ INT32 deleteReason;
  /*  4..  1*/ INT32 mailID;
};
struct ClientVoiceChatStatus
{
  /*  0..  1*/ BOOL enabled;
};
struct ClientRolePollInform
{
  /*  0..  1*/ UINT64 from;
  /*  8..  1*/ UINT8 partyIndex;
};
struct JamMoveStateChange
{
  /*  0..  1*/ UINT16 messageID;
  /*  4..  1*/ UINT32 sequenceIndex;
  /*  8..  1*/ Optional<FLOAT> speed;
  /* 10..  1*/ Optional<JamKnockBackInfo> knockBack;
  /* 24..  1*/ Optional<INT32> vehicleRecID;
  /* 2c..  1*/ Optional<JamCollisionHeightInfo> collisionHeight;
  /* 3c..  1*/ Optional<JamCliMovementForce> movementForce;
};
struct JamCliPartyLFGInfo
{
  /*  0..  1*/ UINT8 myLfgFlags;
  /*  4..  1*/ UINT32 lfgSlot;
  /*  8..  1*/ UINT32 myLfgRandomSlot;
  /*  c..  1*/ BOOL lfgAborted;
  /*  d..  1*/ UINT8 myLfgPartialClear;
  /* 10..  1*/ FLOAT myLfgGearDiff;
  /* 14..  1*/ UINT8 myLfgStrangerCount;
  /* 15..  1*/ UINT8 myLfgKickVoteCount;
  /* 16..  1*/ UINT8 lfgBootCount;
  /* 17..  1*/ BOOL myLfgFirstReward;
};
struct UserClientBattlePetRequestJournalLock
{
};
struct ClientDynamicDropRollResult
{
  /*  0..  1*/ UINT8 dynamicDropResult;
  /*  4..  1*/ FLOAT roll;
  /*  8..  1*/ FLOAT chance;
  /* 10..  1*/ UINT64 losingPlayerGUID;
  /* 18..  1*/ UINT32 biggestLosingStreak;
  /* 1c..  1*/ UINT32 itemID;
};
struct PlayerCliSetTaxiBenchmarkMode
{
  /*  0..  1*/ BOOL enable;
};
struct ClientReadItemResultOK
{
  /*  0..  1*/ UINT64 item;
};
struct ClientLFGDisabled
{
};
struct PlayerCliCastSpell
{
  /*  0..  1*/ STRUCT cast;
};
struct JamLfgPlayerQuestRewardCurrency
{
  /*  0..  1*/ INT32 currencyID;
  /*  4..  1*/ INT32 quantity;
};
struct ClientPetSlotUpdated
{
  /*  0..  1*/ INT32 petSlotA;
  /*  4..  1*/ INT32 petNumberB;
  /*  8..  1*/ INT32 petNumberA;
  /*  c..  1*/ INT32 petSlotB;
};
struct ClientMoveSplineSetFlying
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct ClientAreaTriggerDebugSweep
{
  /*  0..  1*/ UINT64 triggerGUID;
  /*  8..  1*/ UINT32 timeFromCreation1;
  /*  c..  1*/ UINT32 timeFromCreation0;
};
struct ClientInstanceLock
{
  /*  0..  1*/ UINT32 mapID;
  /*  4..  1*/ UINT32 difficultyID;
  /*  8..  1*/ UINT64 instanceID;
  /* 10..  1*/ BOOL locked;
  /* 11..  1*/ BOOL extended;
  /* 14..  1*/ UINT32 timeRemaining;
  /* 18..  1*/ UINT32 completed_mask;
};
struct PlayerMoveStartDescend
{
  /*  0..  1*/ STRUCT status;
};
struct ClientCommentatorStateChanged
{
  /*  0..  1*/ BOOL enable;
  /*  8..  1*/ UINT64 guid;
};
struct PlayerCliObjectUpdateFailed
{
  /*  0..  1*/ UINT64 objectGUID;
};
struct UserClientSupportTicketSubmitComplaint
{
  /*  0..  1*/ STRUCT chatLog;
  /* 20..  1*/ STRING note;
  /*420..  1*/ Optional<JamCliSupportTicketGuildInfo> guildInfo;
  /*498..  1*/ Optional<JamCliSupportTicketMailInfo> mailInfo;
  /*24e8..  1*/ UINT64 targetCharacterGUID;
  /*24f0..  1*/ Optional<JamCliSupportTicketPetInfo> petInfo;
  /*2588..  1*/ Optional<JamCliSupportTicketCalendarEventInfo> calendarInfo;
  /*2628..  1*/ JAM_CLI_COMPLAINT_TYPE complaintType;
  /*262c..  1*/ STRUCT header;
};
struct PlayerCliStopDrawingServerSidePos
{
};
struct ClientAccountMountUpdate
{
  /*  0..  1*/ Array<INT32> mountSpellIDs;
  /* 18..  1*/ Array<BOOL> mountIsFavorite;
  /* 30..  1*/ BOOL isFullUpdate;
};
struct UserClientCalendarCopyEvent
{
  /*  0..  1*/ UINT64 moderatorID;
  /*  8..  1*/ UINT64 eventID;
  /* 10..  1*/ UINT32 date;
};
struct UserClientBattlePetRequestJournal
{
};
struct ClientSetTimeZoneInformation
{
  /*  0..  1*/ STRING serverTimeTZ;
  /* 80..  1*/ STRING gameTimeTZ;
};
struct ClientLootReleaseAll
{
};
struct UserClientOfferPetition
{
  /*  0..  1*/ UINT64 targetPlayer;
  /*  8..  1*/ UINT64 itemGUID;
};
struct ClientMailListResult
{
  /*  0..  1*/ INT32 totalNumRecords;
  /*  8..  1*/ Array<JamCliMailListEntry> mails;
};
struct PlayerCliLootItem
{
  /*  0..  1*/ Array<JamLootRequest> loot;
};
struct JamLfgPlayerQuestReward
{
  /*  0..  1*/ UINT32 mask;
  /*  4..  1*/ INT32 rewardMoney;
  /*  8..  1*/ INT32 rewardXP;
  /* 10..  1*/ Array<JamLfgPlayerQuestRewardItem> item;
  /* 28..  1*/ Array<JamLfgPlayerQuestRewardCurrency> currency;
  /* 40..  1*/ Array<JamLfgPlayerQuestRewardCurrency> bonusCurrency;
};
struct ClientSceneObjectPetBattleInitialUpdate
{
  /*  0..  1*/ STRUCT msgData;
  /*128..  1*/ UINT64 sceneObjectGUID;
};
struct ClientKickReason
{
  /*  0..  1*/ UINT8 reason;
};
struct ClientClearCooldown
{
  /*  0..  1*/ BOOL clearOnHold;
  /*  8..  1*/ UINT64 casterGUID;
  /* 10..  1*/ INT32 spellID;
};
struct PlayerCliSetFactionInactive
{
  /*  0..  1*/ BOOL state;
  /*  4..  1*/ INT32 index;
};
struct ClientGarrisonAddMissionResult
{
  /*  0..  1*/ STRUCT mission;
  /* 40..  1*/ INT32 result;
};
struct ClientCalendarClearPendingAction
{
};
struct PlayerCliAdvanceSpawnTime
{
  /*  0..  1*/ UINT32 seconds;
};
struct ClientVoiceSessionRosterUpdateMember
{
  /*  0..  1*/ UINT64 memberGUID;
  /*  8..  1*/ UINT8 networkId;
  /*  9..  1*/ UINT8 priority;
  /*  a..  1*/ UINT8 flags;
};
struct ClientBindPointUpdate
{
  /*  0..  1*/ UINT32 bindMapID;
  /*  4..  1*/ V3 bindPosition;
  /* 10..  1*/ UINT32 bindAreaID;
};
struct ClientMoveSkipTime
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 timeSkipped;
};
struct ClientBlackMarketOutbid
{
  /*  0..  1*/ STRUCT item;
  /* 60..  1*/ INT32 marketID;
  /* 64..  1*/ INT32 randomPropertiesID;
};
struct ClientSendKnownSpells
{
  /*  0..  1*/ BOOL initialLogin;
  /*  8..  1*/ Array<UINT32> knownSpells;
};
struct PlayerMoveStartSwimCheat
{
  /*  0..  1*/ STRUCT status;
};
struct ClientAttackSwingLandedLog
{
  /*  0..  1*/ STRUCT logData;
  /* 28..  1*/ NOT_IMPLEMENTED attackRoundInfo;
};
struct PlayerCreateGuildPetitionCheat
{
  /*  0..  1*/ STRING guildName;
};
struct PlayerCliItemTextQuery
{
  /*  0..  1*/ UINT64 id;
};
struct ClientGuildBankTextQueryResult
{
  /*  0..  1*/ INT32 tab;
  /*  4..  1*/ STRING text;
};
struct UserClientBattlePetDeleteJournal
{
};
struct ClientTimeSyncRequest
{
  /*  0..  1*/ UINT32 sequenceIndex;
};
struct ClientGMChangePVPRating
{
  /*  0..  1*/ BOOL success;
};
struct ClientDebugDrawDestroyGraph
{
  /*  0..  1*/ UINT32 id;
};
struct SpawnTrackerData
{
  /*  0..  1*/ Array<INT32> questID;
};
struct JamServerBuckDataEntry
{
  /*  0..  1*/ UINT64 arg;
  /*  8..  1*/ STRING argname;
  /* 68..  1*/ UINT64 count;
  /* 70..  1*/ UINT64 accum;
  /* 78..  1*/ UINT64 sqaccum;
  /* 80..  1*/ UINT64 maximum;
  /* 88..  1*/ UINT64 minimum;
};
struct ClientDestroyArenaUnit
{
  /*  0..  1*/ UINT64 guid;
};
struct PlayerCliSetStatCheat
{
  /*  0..  1*/ UINT32 value;
  /*  4..  1*/ UINT8 stat;
};
struct PlayerMoveForceRunBackSpeedChangeAck
{
  /*  0..  1*/ STRUCT data;
};
struct ClientServerInfoResponse
{
  /*  0..  1*/ Array<JamCliServerInfoLine> userServerInfo;
  /* 18..  1*/ Array<JamCliServerInfoLine> worldServerInfo;
};
struct SpellHistoryEntry
{
  /*  0..  1*/ UINT32 spellID;
  /*  4..  1*/ UINT32 itemID;
  /*  8..  1*/ UINT32 category;
  /*  c..  1*/ INT32 recoveryTime;
  /* 10..  1*/ INT32 categoryRecoveryTime;
  /* 14..  1*/ BOOL onHold;
};
struct UserClientCommentatorStartWargame
{
  /*  0..  1*/ UINT64 queueID;
  /*  8..  1*/ FixedArrayStrings<2 /*times*/, 49 /*chars*/> names;
};
struct ClientGMShowComplaints
{
  /*  0..  1*/ STRING summary;
};
struct PlayerCliGuildBankWithdrawMoney
{
  /*  0..  1*/ UINT64 banker;
  /*  8..  1*/ UINT64 money;
};
struct GdfSimPlayerResult
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ BOOL team;
  /*  c..  1*/ INT32 preRating;
  /* 10..  1*/ INT32 postRating;
  /* 14..  1*/ INT32 ratingChange;
  /* 18..  1*/ FLOAT preGdf;
  /* 1c..  1*/ FLOAT postGdf;
  /* 20..  1*/ FLOAT gdfChange;
  /* 24..  1*/ INT32 preGdfAsELO;
  /* 28..  1*/ INT32 postGdfAsELO;
  /* 2c..  1*/ INT32 gdfChangeAsELO;
  /* 30..  1*/ FLOAT preVariance;
  /* 34..  1*/ FLOAT postVariance;
  /* 38..  1*/ FLOAT varianceChange;
};
struct UserClientBattlePetSetFlags
{
  /*  0..  1*/ UINT64 battlePetGUID;
  /*  8..  1*/ UINT32 flags;
  /*  c..  1*/ JamCliBattlePetSetFlagControlType controlType;
};
struct PlayerCliQueryCreature
{
  /*  0..  1*/ UINT32 creatureID;
};
struct JamAuthSuccessInfo
{
  /*  0..  1*/ UINT32 virtualRealmAddress;
  /*  8..  1*/ Array<JamVirtualRealmInfo> virtualRealms;
  /* 20..  1*/ UINT32 timeRemain;
  /* 24..  1*/ UINT32 timeOptions;
  /* 28..  1*/ UINT32 timeRested;
  /* 2c..  1*/ UINT8 activeExpansionLevel;
  /* 2d..  1*/ UINT8 accountExpansionLevel;
  /* 2e..  1*/ BOOL isExpansionTrial;
  /* 30..  1*/ UINT32 timeSecondsUntilPCKick;
  /* 38..  1*/ Array<JamRaceClassAvailability> availableRaces;
  /* 50..  1*/ Array<JamRaceClassAvailability> availableClasses;
  /* 68..  1*/ Array<JamAvailableCharacterTemplateSet> templates;
  /* 80..  1*/ BOOL forceCharacterTemplate;
  /* 82..  1*/ Optional<UINT16> numPlayersHorde;
  /* 86..  1*/ Optional<UINT16> numPlayersAlliance;
  /* 8a..  1*/ BOOL isVeteranTrial;
  /* 8c..  1*/ UINT32 currencyID;
};
struct JamLFGPlayerRewards
{
  /*  0..  1*/ INT32 rewardItem;
  /*  4..  1*/ UINT32 rewardItemQuantity;
  /*  8..  1*/ INT32 bonusCurrency;
  /*  c..  1*/ BOOL isCurrency;
};
struct ClientMoveSetCanFly
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientLootRollsComplete
{
  /*  0..  1*/ UINT64 lootObj;
  /*  8..  1*/ UINT8 lootListID;
};
struct ClientAuctionOwnerBidNotification
{
  /*  0..  1*/ STRUCT info;
  /* 70..  1*/ UINT64 bidder;
  /* 78..  1*/ UINT64 minIncrement;
};
struct UserClientCharRaceOrFactionChange
{
  /*  0..  1*/ Optional<UINT8> hairColorID;
  /*  2..  1*/ UINT8 raceID;
  /*  3..  1*/ UINT8 sexID;
  /*  4..  1*/ Optional<UINT8> skinID;
  /*  6..  1*/ Optional<UINT8> facialHairStyleID;
  /*  8..  1*/ UINT64 guid;
  /* 10..  1*/ BOOL factionChange;
  /* 11..  1*/ STRING name;
  /* 42..  1*/ Optional<UINT8> faceID;
  /* 44..  1*/ Optional<UINT8> hairStyleID;
};
struct ClientAuctionCommandResult
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT64 minIncrement;
  /* 10..  1*/ UINT64 money;
  /* 18..  1*/ INT32 errorCode;
  /* 1c..  1*/ INT32 auctionItemID;
  /* 20..  1*/ INT32 bagResult;
  /* 24..  1*/ INT32 command;
};
struct PlayerCliItemPurchaseRefund
{
  /*  0..  1*/ UINT64 itemGUID;
};
struct JamServerBuckDataList
{
  /*  0..  1*/ UINT32 mpID;
  /*  8..  1*/ Array<JamServerBuckDataEntry> entries;
};
struct UserClientBattlenetChallengeResponse
{
  /*  0..  1*/ BATTLENET_CHALLENGE_RESULT result;
  /*  4..  1*/ UINT32 token;
  /*  8..  1*/ STRING battlenetError;
};
struct PlayerCliCompleteShipmentCheat
{
  /*  0..  1*/ UINT64 shipmentID;
};
struct PlayerMoveStartForward
{
  /*  0..  1*/ STRUCT status;
};
struct ClientGuildReset
{
  /*  0..  1*/ UINT64 guildGUID;
};
struct ClientClearTarget
{
  /*  0..  1*/ UINT64 guid;
};
struct ClientItemPurchaseRefundCurrency
{
  /*  0..  1*/ INT32 currencyID;
  /*  4..  1*/ INT32 currencyCount;
};
struct ClientDebugDrawQuad
{
  /*  0..  1*/ V2 size;
  /*  8..  1*/ FLOAT lifetime;
  /*  c..  1*/ UINT32 settings;
  /* 10..  1*/ STRING texture;
  /*114..  1*/ UINT32 id;
  /*118..  1*/ V2 topLeft;
  /*120..  1*/ UINT32 flags;
  /*124..  1*/ V2 uv_max;
  /*12c..  1*/ UINT32 color;
  /*130..  1*/ V2 uv_min;
};
struct ClientSendSpellHistory
{
  /*  0..  1*/ Array<SpellHistoryEntry> entries;
};
struct ClientPlayOneShotAnimKit
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ UINT16 animKitID;
};
struct PlayerCliAreaTrigger
{
  /*  0..  1*/ BOOL entered;
  /*  1..  1*/ BOOL fromClient;
  /*  4..  1*/ INT32 areaTriggerID;
};
struct JamLFGListJoinRequest
{
  /*  0..  1*/ UINT32 activityID;
  /*  4..  1*/ UINT32 requiredItemLevel;
  /*  8..  1*/ STRING name;
  /* 88..  1*/ STRING comment;
  /*488..  1*/ STRING voiceChat;
};
struct ClientGhost
{
  /*  0..  1*/ UINT64 target;
};
struct ClientMoveSetVehicleRecID
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
  /*  c..  1*/ INT32 vehicleRecID;
};
struct ClientCalendarSendNumPending
{
  /*  0..  1*/ UINT32 numPending;
};
struct PlayerCliTaxiQueryAvailableNodes
{
  /*  0..  1*/ UINT64 unit;
};
struct GlobalGuildAddBattlenetFriend
{
  /*  0..  1*/ UINT32 roleID;
  /*  8..  1*/ UINT64 clientToken;
  /* 10..  1*/ BOOL verifyOnly;
  /* 18..  1*/ UINT64 targetGUID;
  /* 20..  1*/ STRING invitationMsg;
};
struct PhaseShiftDataPhase
{
  /*  0..  1*/ UINT16 phaseFlags;
  /*  2..  1*/ UINT16 id;
};
struct ClientScriptCast
{
  /*  0..  1*/ INT32 spellID;
};
struct PlayerCliCDBLookup
{
  /*  0..  1*/ STRING searchString;
  /*100..  1*/ BOOL returnLocalizedStrings;
  /*104..  1*/ INT32 locale;
  /*108..  1*/ BOOL onlySearchLocalizedFields;
};
struct ClientGhosteeGone
{
};
struct PlayerMoveStopPitch
{
  /*  0..  1*/ STRUCT status;
};
struct ClientMoveSetSwimBackSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
  /*  c..  1*/ FLOAT speed;
};
struct ClientChallengeModeAttempt
{
  /*  0..  1*/ UINT32 instanceRealmAddress;
  /*  4..  1*/ UINT32 attemptID;
  /*  8..  1*/ INT32 completionTime;
  /*  c..  1*/ NOT_IMPLEMENTED completionDate;
  /* 2c..  1*/ INT32 medalEarned;
  /* 30..  1*/ Array<ClientChallengeModeMember> members;
};
struct ClientRefreshSpellHistory
{
  /*  0..  1*/ Array<SpellHistoryEntry> entries;
};
struct ClientCancelAutoRepeat
{
  /*  0..  1*/ UINT64 guid;
};
struct PlayerCliSetCharacterModel
{
  /*  0..  1*/ INT32 displayID;
};
struct ClientDamageCalcLog
{
  /*  0..  1*/ UINT32 sourceType;
  /*  8..  1*/ UINT64 attacker;
  /* 10..  1*/ Array<ClientDamageCalcLogEntry> entries;
  /* 28..  1*/ UINT32 spellID;
  /* 30..  1*/ UINT64 defender;
};
struct PlayerCliGarrisonLearnBuildingSpecializationCheat
{
  /*  0..  1*/ INT32 specializationID;
};
struct ClientGuildMemberUpdateNote
{
  /*  0..  1*/ STRING note;
  /* 88..  1*/ UINT64 member;
  /* 90..  1*/ BOOL isPublic;
};
struct ClientShowRatings
{
  /*  0..  1*/ FixedArray<INT32, 6> personalRating;
  /* 18..  1*/ FixedArray<FLOAT, 6> gdfRating;
  /* 30..  1*/ FixedArray<FLOAT, 6> gdfVariance;
};
struct ClientAELootTargetAck
{
};
struct UserClientCreateGuildCheat
{
  /*  0..  1*/ STRING guildName;
};
struct JamServerFirstAchievement
{
  /*  0..  1*/ UINT64 playerGuid;
  /*  8..  1*/ INT32 achievementID;
};
struct ClientNotifyDestLocSpellCast
{
  /*  0..  1*/ STRUCT data;
};
struct ClientGMSpawnTrackerDump
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ STRUCT spawnTrackerData;
};
struct PhaseShiftData
{
  /*  0..  1*/ UINT32 phaseShiftFlags;
  /*  4..  1*/ Array<PhaseShiftDataPhase> phases;
  /* 20..  1*/ UINT64 personalGUID;
};
struct PlayerCliLearnPetSpecializationGroup
{
  /*  0..  1*/ UINT64 petGUID;
  /*  8..  1*/ UINT32 specGroupIndex;
};
struct ClientShowMailbox
{
  /*  0..  1*/ UINT64 postmasterGUID;
};
struct UserClientSetPartyLeader
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ UINT8 partyIndex;
};
struct PlayerMoveForceFlightSpeedChangeAck
{
  /*  0..  1*/ STRUCT data;
};
struct ClientResumeToken
{
  /*  0..  1*/ UINT32 sequence;
  /*  4..  1*/ CLIENT_SUSPEND_REASON reason;
};
struct ClientVoidTransferResult
{
  /*  0..  1*/ INT32 result;
};
struct UserClientCalendarUpdateEvent
{
  /*  0..  1*/ UINT32 maxSize;
  /*  8..  1*/ STRUCT eventInfo;
};
struct ClientCalendarSendEvent
{
  /*  0..  1*/ UINT64 ownerGUID;
  /*  8..  1*/ UINT32 date;
  /*  c..  1*/ UINT32 lockDate;
  /* 10..  1*/ UINT8 getEventType;
  /* 11..  1*/ STRING description;
  /*412..  1*/ STRING eventName;
  /*494..  1*/ INT32 textureID;
  /*498..  1*/ UINT32 flags;
  /*49c..  1*/ UINT8 eventType;
  /*4a0..  1*/ Array<ClientCalendarEventInviteInfo> invites;
  /*4b8..  1*/ UINT64 eventGuildID;
  /*4c0..  1*/ UINT64 eventID;
};
struct SpellChargeEntry
{
  /*  0..  1*/ UINT32 category;
  /*  4..  1*/ UINT32 nextRecoveryTime;
  /*  8..  1*/ UINT8 consumedCharges;
};
struct PlayerCliQuestGiverQueryQuest
{
  /*  0..  1*/ INT32 questID;
  /*  8..  1*/ UINT64 questGiverGUID;
  /* 10..  1*/ BOOL respondToGiver;
};
struct UserClientAddFriend
{
  /*  0..  1*/ STRING notes;
  /*201..  1*/ STRING name;
};
struct GlobalGuildGetRoster
{
  /*  0..  1*/ UINT64 playerGUID;
  /*  8..  1*/ UINT64 guildGUID;
};
struct ClientBattlePayGetPurchaseListResponse
{
  /*  0..  1*/ Array<JamBattlePayPurchase> purchases;
  /* 18..  1*/ UINT32 result;
};
struct ClientGMTicketResponseError
{
};
struct PlayerCliEjectPassenger
{
  /*  0..  1*/ UINT64 passenger;
};
struct ClientUserlistRemove
{
  /*  0..  1*/ UINT8 channelFlags;
  /*  1..  1*/ STRING channelName;
  /* 84..  1*/ INT32 channelID;
  /* 88..  1*/ UINT64 removedUserGUID;
};
struct ClientMoveUpdate
{
  /*  0..  1*/ STRUCT status;
};
struct ClientBattlegroundInfoThrottled
{
};
struct ClientPetBattleRoundResult
{
  /*  0..  1*/ STRUCT msgData;
};
struct ClientPlaySound
{
  /*  0..  1*/ UINT64 sourceObjectGUID;
  /*  8..  1*/ INT32 soundKitID;
};
struct ClientQueryPetNameResponse
{
  /*  0..  1*/ UINT64 petID;
  /*  8..  1*/ BOOL allow;
  /*  9..  1*/ STRING name;
  /* 8a..  1*/ BOOL hasDeclined;
  /* 90..  1*/ TIME_T timestamp;
  /* 98..  1*/ FixedArrayStrings<5 /*times*/, 97 /*chars*/> declinedNames;
};
struct PlayerCliDumpObjects
{
  /*  0..  1*/ UINT32 filter;
};
struct PlayerCliGarrisonListFollowersCheat
{
};
struct ClientInstanceEncounterObjectiveComplete
{
  /*  0..  1*/ INT32 objectiveID;
};
struct PlayerCliDumpEncounter
{
  /*  0..  1*/ Optional<INT32> dungeonEncounterID;
};
struct ClientGuildKnownRecipes
{
  /*  0..  1*/ Array<JamGuildKnownRecipes> recipes;
};
struct ClientBattlefieldList
{
  /*  0..  1*/ UINT8 maxLevel;
  /*  1..  1*/ BOOL pvpAnywhere;
  /*  8..  1*/ UINT64 battlemasterGuid;
  /* 10..  1*/ BOOL isRandomBG;
  /* 11..  1*/ UINT8 minLevel;
  /* 12..  1*/ BOOL hasHolidayWinToday;
  /* 14..  1*/ INT32 battlemasterListID;
  /* 18..  1*/ BOOL hasRandomWinToday;
  /* 20..  1*/ Array<INT32> battlefields;
};
struct GlobalGuildShowRankDate
{
};
struct ClientAchievementEarned
{
  /*  0..  1*/ UINT32 earnerNativeRealm;
  /*  4..  1*/ BOOL initial;
  /*  8..  1*/ UINT64 earner;
  /* 10..  1*/ NOT_IMPLEMENTED time;
  /* 30..  1*/ INT32 achievementID;
  /* 34..  1*/ UINT32 earnerVirtualRealm;
  /* 38..  1*/ UINT64 sender;
};
struct ClientSendSpellCharges
{
  /*  0..  1*/ Array<SpellChargeEntry> entries;
};
struct ClientLoadEquipmentSet
{
  /*  0..  1*/ Array<JamEquipmentSetData> setData;
};
struct JamGMTicketCase
{
  /*  0..  1*/ INT32 caseID;
  /*  8..  1*/ TIME_T caseOpened;
  /* 10..  1*/ INT32 caseStatus;
  /* 14..  1*/ STRING url;
  /*418..  1*/ UINT32 cfgRealmID;
  /*420..  1*/ UINT64 characterID;
  /*428..  1*/ STRING waitTimeOverrideMessage;
  /*828..  1*/ INT32 waitTimeOverrideMinutes;
};
struct PlayerCliSetSORLoadout
{
  /*  0..  1*/ INT32 characterLoadoutID;
};
struct JamCliSavedThrottleObjectState
{
  /*  0..  1*/ UINT32 maxTries;
  /*  4..  1*/ UINT32 perMilliseconds;
  /*  8..  1*/ UINT32 tryCount;
  /*  c..  1*/ UINT32 lastResetTimeBeforeNow;
};
struct ClientGroupActionThrottled
{
};
struct ClientDBLookupResults
{
  /*  0..  1*/ UINT32 numResults;
  /*  8..  1*/ Array<UINT8> results;
};
struct PlayerCliSendLocalEvent
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ INT32 eventID;
};
struct ClientMoveSetCompoundState
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ Array<JamMoveStateChange> stateChanges;
};
struct GlobalGuildAssignMemberRank
{
  /*  0..  1*/ UINT64 member;
  /*  8..  1*/ INT32 rankOrder;
};
struct ClientLfgPlayerInfo
{
  /*  0..  1*/ STRUCT blackList;
  /* 28..  1*/ Array<JamLfgPlayerDungeonInfo> dungeon;
};
struct JamDumpObjectInfo
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ FLOAT visibleRange;
  /*  c..  1*/ V3 position;
  /* 18..  1*/ UINT32 displayID;
  /* 1c..  1*/ BOOL granted;
};
struct PlayerCliSceneTriggerEvent
{
  /*  0..  1*/ UINT32 sceneInstanceID;
  /*  4..  1*/ STRING event;
};
struct ClientChatPlayerAmbiguous
{
  /*  0..  1*/ STRING name;
};
struct UserClientDFJoin
{
  /*  0..  1*/ BOOL queueAsGroup;
  /*  4..  1*/ UINT32 roles;
  /*  8..  1*/ UINT8 partyIndex;
  /*  9..  1*/ STRING comment;
  /*110..  1*/ Array<UINT32> slots;
  /*128..  1*/ FixedArray<UINT32, 3> needs;
};
struct PlayerCliConquestAwardRandomBattlegroundCheat
{
};
struct ClientVoiceSessionRosterUpdate
{
  /*  0..  1*/ UINT16 comsatPort;
  /*  8..  1*/ UINT64 localMemberGUID;
  /* 10..  1*/ UINT16 sessionNetworkID;
  /* 12..  1*/ UINT8 sessionType;
  /* 13..  1*/ UINT8 localFlags;
  /* 14..  1*/ STRING channelName;
  /* 94..  1*/ UINT32 comsatAddress;
  /* 98..  1*/ UINT64 clientGUID;
  /* a0..  1*/ UINT8 localNetworkID;
  /* a8..  1*/ Array<ClientVoiceSessionRosterUpdateMember> members;
  /* c0..  1*/ FixedArray<UINT8, 16> digest;
};
struct ClientBattlePetJournal
{
  /*  0..  1*/ BOOL hasJournalLock;
  /*  8..  1*/ Array<JamClientBattlePet> pets;
  /* 20..  1*/ INT16 trapLevel;
  /* 28..  1*/ Array<JamClientPetBattleSlot> slots;
};
struct PlayerCliSwapInvItem
{
  /*  0..  1*/ STRUCT inv;
  /* 18..  1*/ UINT8 slot2;
  /* 19..  1*/ UINT8 slot1;
};
struct ClientBuyFailed
{
  /*  0..  1*/ UINT64 vendorGUID;
  /*  8..  1*/ UINT32 muid;
  /*  c..  1*/ UINT8 reason;
};
struct ClientSendUnlearnSpells
{
  /*  0..  1*/ Array<UINT32> spells;
};
struct PlayerCliWeatherSpeedCheat
{
  /*  0..  1*/ FLOAT newSpeed;
};
struct ClientOpenShipmentNPCResult
{
  /*  0..  1*/ INT32 charShipmentContainerID;
  /*  4..  1*/ BOOL success;
};
struct UserClientClearQuest
{
  /*  0..  1*/ STRING target;
  /*100..  1*/ UINT32 questID;
};
struct JamSpellCastRequest
{
  /*  0..  1*/ UINT8 castID;
  /*  4..  1*/ INT32 spellID;
  /*  8..  1*/ INT32 misc;
  /*  c..  1*/ UINT8 sendCastFlags;
  /* 10..  1*/ STRUCT target;
  /* e8..  1*/ STRUCT missileTrajectory;
  /* f0..  1*/ Optional<JamCliMovementStatus> moveUpdate;
  /*1a0..  1*/ Array<JamSpellWeight> weight;
};
struct JamResearchHistory
{
  /*  0..  1*/ INT32 projectID;
  /*  8..  1*/ TIME_T firstCompleted;
  /* 10..  1*/ INT32 completionCount;
};
struct UserClientSendRealmBroadcastMessage
{
  /*  0..  1*/ STRING text;
};
struct ClientMoveSplineStartSwim
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct JamCliAccountCharacterData
{
  /*  0..  1*/ UINT32 wowAccountID;
  /*  4..  1*/ UINT32 virtualRealmAddress;
  /*  8..  1*/ UINT64 guid;
  /* 10..  1*/ STRING name;
  /* 41..  1*/ STRING realmName;
  /*142..  1*/ UINT8 raceID;
  /*143..  1*/ UINT8 classID;
  /*144..  1*/ UINT8 sexID;
  /*145..  1*/ UINT8 experienceLevel;
};
struct ScenarioPOIPointData
{
  /*  0..  1*/ INT32 x;
  /*  4..  1*/ INT32 y;
};
struct UserClientCharDelete
{
  /*  0..  1*/ UINT64 guid;
};
struct ClientConnectionSuspendComms
{
  /*  0..  1*/ UINT32 serial;
};
struct ClientTransferAborted
{
  /*  0..  1*/ TRANSFER_ABORT transfertAbort;
  /*  4..  1*/ UINT8 arg;
  /*  8..  1*/ UINT32 mapID;
};
struct PlayerCliSetPreferredCemetery
{
  /*  0..  1*/ INT32 cemeteryID;
};
struct JamPetBattleFinalPet
{
  /*  0..  1*/ BOOL captured;
  /*  1..  1*/ BOOL caged;
  /*  2..  1*/ BOOL awardedXP;
  /*  3..  1*/ BOOL seenAction;
  /*  4..  1*/ UINT16 level;
  /*  6..  1*/ UINT16 xp;
  /*  8..  1*/ INT32 health;
  /*  c..  1*/ INT32 maxHealth;
  /* 10..  1*/ UINT16 initialLevel;
  /* 12..  1*/ UINT8 pboid;
};
struct JamCliPetitionInfo
{
  /*  0..  1*/ INT32 m_petitionID;
  /*  8..  1*/ UINT64 m_petitioner;
  /* 10..  1*/ STRING m_title;
  /* 90..  1*/ STRING m_bodyText;
  /*1090..  1*/ INT32 m_minSignatures;
  /*1094..  1*/ INT32 m_maxSignatures;
  /*1098..  1*/ INT32 m_deadLine;
  /*109c..  1*/ INT32 m_issueDate;
  /*10a0..  1*/ INT32 m_allowedGuildID;
  /*10a4..  1*/ INT32 m_allowedClasses;
  /*10a8..  1*/ INT32 m_allowedRaces;
  /*10ac..  1*/ INT16 m_allowedGender;
  /*10b0..  1*/ INT32 m_allowedMinLevel;
  /*10b4..  1*/ INT32 m_allowedMaxLevel;
  /*10b8..  1*/ INT32 m_numChoices;
  /*10bc..  1*/ INT32 m_staticType;
  /*10c0..  1*/ UINT32 m_muid;
  /*10c4..  1*/ FixedArrayStrings<10 /*times*/, 64 /*chars*/> m_choicetext;
};
struct UserClientGMSetCriteria
{
  /*  0..  1*/ INT32 criteriaID;
  /*  4..  1*/ STRING target;
  /*138..  1*/ INT32 quantity;
  /*140..  1*/ UINT64 guid;
};
struct ClientGmResurrectSuccess
{
};
struct ClientGuildEventBankMoneyChanged
{
  /*  0..  1*/ UINT64 money;
};
struct ClientAddItemPassive
{
  /*  0..  1*/ INT32 spellID;
};
struct PlayerMoveForceSwimSpeedChangeAck
{
  /*  0..  1*/ STRUCT data;
};
struct PBQueueDumpMember
{
  /*  0..  1*/ UINT64 memberGUID;
  /*  8..  1*/ FLOAT averageTeamRating;
  /*  c..  1*/ FLOAT currentTolerance;
  /* 10..  1*/ TIME_T secondsInQueue;
};
struct ClientSpellOrDamageImmune
{
  /*  0..  1*/ UINT64 victimGUID;
  /*  8..  1*/ BOOL isPeriodic;
  /*  c..  1*/ UINT32 spellID;
  /* 10..  1*/ UINT64 casterGUID;
};
struct ClientDumpObjectsData
{
  /*  0..  1*/ Array<JamDumpObjectInfo> objectInfo;
};
struct PlayerCliIncreaseCastTimeForSpell
{
  /*  0..  1*/ INT32 spellID;
};
struct JSONBnetCreateChallengeResponse
{
  /*  0..  1*/ STRING challenge_id;
  /* 41..  1*/ STRING challenge_url;
};
struct ClientPetUnlearnedSpells
{
  /*  0..  1*/ Array<INT32> spellID;
};
struct NotifyDestLocSpellCastData
{
  /*  0..  1*/ UINT64 caster;
  /*  8..  1*/ UINT64 destTransport;
  /* 10..  1*/ INT32 spellID;
  /* 14..  1*/ V3 sourceLoc;
  /* 20..  1*/ V3 destLoc;
  /* 2c..  1*/ FLOAT missileTrajectoryPitch;
  /* 30..  1*/ FLOAT missileTrajectorySpeed;
  /* 34..  1*/ UINT32 travelTime;
  /* 38..  1*/ UINT8 destLocSpellCastIndex;
  /* 39..  1*/ UINT8 castID;
};
struct ClientConvertRune
{
  /*  0..  1*/ UINT8 rune;
  /*  1..  1*/ UINT8 index;
};
struct PlayerCliReclaimCorpse
{
  /*  0..  1*/ UINT64 corpseGUID;
};
struct ClientBlackMarketBidOnItemResult
{
  /*  0..  1*/ INT32 marketID;
  /*  8..  1*/ STRUCT item;
  /* 68..  1*/ INT32 result;
};
struct ClientGarrisonUpgradeResult
{
  /*  0..  1*/ INT32 garrSiteLevelID;
  /*  4..  1*/ INT32 result;
};
struct JamBattlepayDisplayInfo
{
  /*  0..  1*/ Optional<UINT32> creatureDisplayInfoID;
  /*  8..  1*/ Optional<UINT32> fileDataID;
  /* 10..  1*/ STRING name1;
  /*211..  1*/ STRING name2;
  /*412..  1*/ STRING name3;
  /*1414..  1*/ Optional<UINT32> flags;
};
struct PlayerCliCreateItemCheat
{
  /*  0..  1*/ BOOL battlePayLocked;
  /*  1..  1*/ BOOL autoEquip;
  /*  2..  1*/ STRING context;
  /*404..  1*/ INT32 count;
  /*408..  1*/ UINT32 entryID;
};
struct ClientWardenData
{
  /*  0..  1*/ NOT_IMPLEMENTED packet;
};
struct ClientEquipmentSetID
{
  /*  0..  1*/ UINT64 GUID;
  /*  8..  1*/ INT32 setID;
};
struct ClientBlackMarketOpenResult
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ BOOL open;
};
struct PlayerMoveFallReset
{
  /*  0..  1*/ STRUCT status;
};
struct ClientPendingRaidLock
{
  /*  0..  1*/ UINT32 completedMask;
  /*  4..  1*/ BOOL warningOnly;
  /*  8..  1*/ INT32 timeUntilLock;
  /*  c..  1*/ BOOL extending;
};
struct ClientDispelFailed
{
  /*  0..  1*/ Array<INT32> failedSpells;
  /* 18..  1*/ UINT32 spellID;
  /* 20..  1*/ UINT64 victimGUID;
  /* 28..  1*/ UINT64 casterGUID;
};
struct PlayerCliSetLootSpecialization
{
  /*  0..  1*/ UINT32 specID;
};
struct PlayerCliSetTradeItem
{
  /*  0..  1*/ UINT8 tradeSlot;
  /*  1..  1*/ UINT8 itemSlotInPack;
  /*  2..  1*/ UINT8 packSlot;
};
struct PlayerCliGarrisonStartMission
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ Array<UINT64> followerDBIDs;
  /* 20..  1*/ INT32 missionRecID;
};
struct JamGuildRankTabPermissions
{
  /*  0..  1*/ INT32 flags;
  /*  4..  1*/ INT32 withdrawItemLimit;
};
struct ClientAuraPointsDepleted
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ UINT8 slot;
  /*  9..  1*/ UINT8 effectIndex;
};
struct ClientSetMaxWeeklyQuantity
{
  /*  0..  1*/ INT32 maxWeeklyQuantity;
  /*  4..  1*/ INT32 type;
};
struct UserClientBFMgrQueueExitRequest
{
  /*  0..  1*/ UINT64 queueID;
};
struct SkillLineData
{
  /*  0..  1*/ INT32 spellID;
  /*  8..  1*/ Array<INT32> skillLineIDs;
  /* 20..  1*/ Array<INT32> skillRanks;
  /* 38..  1*/ Array<INT32> skillMaxRanks;
  /* 50..  1*/ Array<INT32> knownAbilitySpellIDs;
};
struct ClientDebugDrawAddGraph
{
  /*  0..  1*/ STRING label;
  /* 80..  1*/ V2 bounds_min;
  /* 88..  1*/ UINT32 height;
  /* 8c..  1*/ UINT32 flags;
  /* 90..  1*/ UINT32 defaultSampleColor;
  /* 94..  1*/ UINT32 sampleCapacity;
  /* 98..  1*/ UINT32 id;
  /* 9c..  1*/ V2 bounds_max;
  /* a4..  1*/ UINT32 width;
};
struct ClientConnectionPong
{
  /*  0..  1*/ UINT32 serial;
};
struct ClientGmNamedPoints
{
  /*  0..  1*/ Array<ClientGMNamedPointsData> namedPoints;
};
struct PlayerCliLevelCheat
{
  /*  0..  1*/ UINT8 level;
};
struct PlayerCliShowPhasedTerrainHere
{
};
struct UserClientUpdateRaidTarget
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ UINT8 partyIndex;
  /*  9..  1*/ UINT8 symbol;
};
struct ClientLFGSearchResultParty
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 changeMask;
  /*  c..  1*/ STRING comment;
  /*110..  1*/ UINT64 instanceID;
  /*118..  1*/ UINT32 instanceCompletedMask;
  /*11c..  1*/ FixedArray<UINT8, 3> needs;
};
struct PlayerMoveSetRunMode
{
  /*  0..  1*/ STRUCT status;
};
struct PlayerCliRequestPetInfo
{
};
struct ClientUpdateInstanceOwnership
{
  /*  0..  1*/ INT32 iOwnInstance;
};
struct PlayerCliGuildBankQueryTab
{
  /*  0..  1*/ UINT64 banker;
  /*  8..  1*/ BOOL fullUpdate;
  /*  9..  1*/ UINT8 tab;
};
struct ClientSpellDamageShield
{
  /*  0..  1*/ INT32 spellID;
  /*  8..  1*/ UINT64 defender;
  /* 10..  1*/ Optional<JamSpellCastLogData> logData;
  /* 40..  1*/ INT32 overKill;
  /* 44..  1*/ INT32 totalDamage;
  /* 48..  1*/ UINT64 attacker;
  /* 50..  1*/ INT32 logAbsorbed;
  /* 54..  1*/ INT32 schoolMask;
};
struct ClientSetTaskComplete
{
  /*  0..  1*/ UINT32 taskID;
};
struct JamCliSupportTicketHeader
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ V3 position;
  /* 10..  1*/ FLOAT facing;
};
struct PlayerCliXpCheat
{
  /*  0..  1*/ INT32 desiredXP;
};
struct PlayerCliSortBags
{
};
struct JamVirtualRealmInfo
{
  /*  0..  1*/ UINT32 realmAddress;
  /*  4..  1*/ STRUCT realmNameInfo;
};
struct ClientMoveUnsetHovering
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientStartLootRoll
{
  /*  0..  1*/ UINT32 rollTime;
  /*  4..  1*/ UINT8 method;
  /*  8..  1*/ STRUCT item;
  /* 78..  1*/ INT32 mapID;
  /* 80..  1*/ UINT64 lootObj;
  /* 88..  1*/ UINT8 validRolls;
};
struct JamPVPBracketData
{
  /*  0..  1*/ INT32 rating;
  /*  4..  1*/ INT32 rank;
  /*  8..  1*/ INT32 weeklyPlayed;
  /*  c..  1*/ INT32 weeklyWon;
  /* 10..  1*/ INT32 seasonPlayed;
  /* 14..  1*/ INT32 seasonWon;
  /* 18..  1*/ INT32 weeklyBestRating;
  /* 1c..  1*/ UINT8 bracket;
};
struct PlayerMoveToggleCollisionCheat
{
  /*  0..  1*/ STRUCT status;
};
struct DebugAIState
{
  /*  0..  1*/ STRING debugState;
};
struct PlayerCliBlackMarketRequestItems
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ TIME_T lastUpdateID;
};
struct JamTradeItem
{
  /*  0..  1*/ UINT8 slot;
  /*  4..  1*/ INT32 entryID;
  /*  8..  1*/ INT32 stackCount;
  /* 10..  1*/ UINT64 giftCreator;
  /* 18..  1*/ Optional<JamUnwrappedTradeItem> unwrapped;
};
struct PlayerCliShowPhasesHere
{
};
struct PlayerCliGetShipmentsOfType
{
  /*  0..  1*/ INT32 containerID;
};
struct ClientLFGuildApplications
{
  /*  0..  1*/ Array<LFGuildApplicationData> application;
  /* 18..  1*/ INT32 numRemaining;
};
struct ClientNewWorld
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ UINT32 reason;
  /*  8..  1*/ FLOAT facing;
  /*  c..  1*/ V3 position;
};
struct ClientLFGRoleCheckUpdateMember
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ BOOL roleCheckComplete;
  /*  c..  1*/ UINT32 rolesDesired;
  /* 10..  1*/ UINT8 level;
};
struct ClientAccountProfile
{
  /*  0..  1*/ STRING filename;
  /* 40..  1*/ NOT_IMPLEMENTED profile;
};
struct JamFactionStandingData
{
  /*  0..  1*/ INT32 index;
  /*  4..  1*/ INT32 standing;
};
struct ClientSpellNonMeleeDamageLogDebugInfo
{
  /*  0..  1*/ FLOAT critRoll;
  /*  4..  1*/ FLOAT critNeeded;
  /*  8..  1*/ FLOAT hitRoll;
  /*  c..  1*/ FLOAT hitNeeded;
  /* 10..  1*/ FLOAT missChance;
  /* 14..  1*/ FLOAT dodgeChance;
  /* 18..  1*/ FLOAT parryChance;
  /* 1c..  1*/ FLOAT blockChance;
  /* 20..  1*/ FLOAT glanceChance;
  /* 24..  1*/ FLOAT crushChance;
};
struct PlayerCliCalculateVehicleSeatOffsetCheat
{
  /*  0..  1*/ UINT64 passengerGUID;
  /*  8..  1*/ V3 passengerRawPos;
};
struct PlayerCliSortBankBags
{
};
struct ClientLearnTalentFailed
{
  /*  0..  1*/ INT32 reason;
};
struct JamGarrisonPlotInfo
{
  /*  0..  1*/ INT32 garrPlotInstanceID;
  /*  4..  1*/ V3 plotPos;
  /* 10..  1*/ INT32 plotType;
};
struct ClientCalendarEventInviteNotesAlert
{
  /*  0..  1*/ UINT64 eventID;
  /*  8..  1*/ STRING notes;
};
struct PlayerCliBuyItem
{
  /*  0..  1*/ UINT64 vendorGUID;
  /*  8..  1*/ STRUCT item;
  /* 68..  1*/ UINT32 muid;
  /* 6c..  1*/ UINT32 slot;
  /* 70..  1*/ UINT8 itemType;
  /* 74..  1*/ INT32 quantity;
  /* 78..  1*/ UINT64 containerGUID;
};
struct GlobalGuildBankTextQuery
{
  /*  0..  1*/ INT32 tab;
};
struct ShipTransferPending
{
  /*  0..  1*/ UINT32 ID;
  /*  4..  1*/ INT32 originMapID;
};
struct ClientBattlePayPurchaseUpdate
{
  /*  0..  1*/ Array<JamBattlePayPurchase> purchases;
};
struct PlayerCliDebugAreaTriggerEvents
{
  /*  0..  1*/ INT32 level;
};
struct ClientPetSpells
{
  /*  0..  1*/ UINT64 petGUID;
  /*  8..  1*/ UINT16 creatureFamily;
  /*  a..  1*/ UINT16 specialization;
  /*  c..  1*/ UINT32 timeLimit;
  /* 10..  1*/ UINT32 petModeAndOrders;
  /* 18..  1*/ Array<UINT32> actions;
  /* 30..  1*/ Array<PetSpellCooldown> cooldowns;
  /* 48..  1*/ Array<PetSpellHistory> spellHistory;
  /* 60..  1*/ FixedArray<UINT32, 10> actionButtons;
};
struct PlayerCliShowAreaAurasHere
{
};
struct ClientMoveSplineSetPitchRate
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
};
struct ClientChallengeModeMap
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ INT32 bestCompletionMilliseconds;
  /*  8..  1*/ INT32 lastCompletionMilliseconds;
  /*  c..  1*/ INT32 bestMedal;
  /* 10..  1*/ NOT_IMPLEMENTED bestMedalDate;
  /* 30..  1*/ Array<INT16> bestSpecID;
};
struct CliChatAddonMessageRaid
{
  /*  0..  1*/ STRING text;
  /*100..  1*/ STRING prefix;
};
struct UserClientSetMoneyCheat
{
  /*  0..  1*/ STRING target;
  /* 38..  1*/ UINT64 amount;
};
struct ClientThreatClear
{
  /*  0..  1*/ UINT64 unitGUID;
};
struct PlayerCliGMSetPhase
{
  /*  0..  1*/ Array<UINT16> phaseID;
};
struct ClientSpellNonMeleeDamageLog
{
  /*  0..  1*/ INT32 absorbed;
  /*  4..  1*/ INT32 shieldBlock;
  /*  8..  1*/ UINT64 me;
  /* 10..  1*/ INT32 spellID;
  /* 14..  1*/ INT32 resisted;
  /* 18..  1*/ BOOL periodic;
  /* 19..  1*/ UINT8 schoolMask;
  /* 20..  1*/ UINT64 casterGUID;
  /* 28..  1*/ Optional<JamSpellCastLogData> logData;
  /* 58..  1*/ INT32 damage;
  /* 5c..  1*/ Optional<ClientSpellNonMeleeDamageLogDebugInfo> debugInfo;
  /* 88..  1*/ INT32 flags;
  /* 8c..  1*/ INT32 overKill;
};
struct JamCliItemTextCache
{
  /*  0..  1*/ STRING text;
};
struct UserClientTaxiClear
{
  /*  0..  1*/ UINT32 nodeID;
  /*  4..  1*/ STRING target;
};
struct PlayerCliUpgradeGarrison
{
  /*  0..  1*/ UINT64 npcGUID;
};
struct ClientSummonCancel
{
};
struct ClientGuildAchievementMembers
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ Array<ClientGuildAchievementMember> member;
  /* 20..  1*/ INT32 achievementID;
};
struct ClientBFMgrQueueInvite
{
  /*  0..  1*/ UINT64 queueID;
  /*  8..  1*/ UINT32 instanceID;
  /*  c..  1*/ UINT32 timeout;
  /* 10..  1*/ INT32 mapID;
  /* 14..  1*/ INT32 maxLevel;
  /* 18..  1*/ INT32 minLevel;
  /* 1c..  1*/ INT8 battleState;
  /* 1d..  1*/ INT8 index;
};
struct UserClientComplaint
{
  /*  0..  1*/ STRUCT offender;
  /* 10..  1*/ UINT8 complaintType;
  /* 18..  1*/ UINT64 eventGuid;
  /* 20..  1*/ UINT64 inviteGuid;
  /* 28..  1*/ UINT32 mailID;
  /* 2c..  1*/ STRUCT chat;
};
struct ClientGMNotifyAreaChange
{
  /*  0..  1*/ Array<JamRealmName> otherRealms;
  /* 18..  1*/ STRING areaShareInternalName;
  /* 7c..  1*/ STRUCT currentRealm;
  /*17d..  1*/ UINT8 areaShareID;
  /*180..  1*/ UINT32 areaID;
  /*184..  1*/ UINT32 currentRealmAddress;
};
struct JamGarrisonBuildingInfo
{
  /*  0..  1*/ INT32 garrPlotInstanceID;
  /*  4..  1*/ INT32 garrBuildingID;
  /*  8..  1*/ TIME_T timeBuilt;
  /* 10..  1*/ BOOL active;
  /* 14..  1*/ V3 buildingPos;
  /* 20..  1*/ FLOAT buildingFacing;
  /* 24..  1*/ INT32 currentGarSpecID;
};
struct UserClientUnclaimLicense
{
  /*  0..  1*/ INT32 license;
};
struct ClientSetForcedReactions
{
  /*  0..  1*/ Array<JamForcedReaction> reactions;
};
struct ClientTransferPending
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ Optional<ShipTransferPending> ship;
  /* 10..  1*/ Optional<INT32> transferSpellID;
};
struct PlayerCliRequestGuildPartyState
{
  /*  0..  1*/ UINT64 guildGUID;
};
struct JamBattlePayShopEntry
{
  /*  0..  1*/ UINT32 entryID;
  /*  4..  1*/ UINT32 groupID;
  /*  8..  1*/ UINT32 productID;
  /*  c..  1*/ INT32 ordering;
  /* 10..  1*/ UINT32 flags;
  /* 14..  1*/ UINT8 bannerType;
  /* 18..  1*/ Optional<JamBattlepayDisplayInfo> displayInfo;
};
struct ClientVoidStorageFailed
{
  /*  0..  1*/ UINT8 reason;
};
struct ClientResurrectRequest
{
  /*  0..  1*/ UINT64 resurrectOffererGUID;
  /*  8..  1*/ BOOL sickness;
  /*  c..  1*/ UINT32 resurrectOffererVirtualRealmAddress;
  /* 10..  1*/ STRING name;
  /* 44..  1*/ UINT32 petNumber;
  /* 48..  1*/ BOOL useTimer;
  /* 4c..  1*/ INT32 spellID;
};
struct ClientCalendarSendCalendarRaidResetInfo
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ UINT32 duration;
  /*  8..  1*/ INT32 offset;
};
struct PlayerCliTalkToGossip
{
  /*  0..  1*/ UINT64 gossipUnit;
};
struct GlobalGuildSetFocusedAchievement
{
  /*  0..  1*/ INT32 achievementID;
};
struct ClientVignetteUpdate
{
  /*  0..  1*/ STRUCT updated;
  /* 30..  1*/ BOOL forceUpdate;
  /* 38..  1*/ STRUCT removed;
  /* 50..  1*/ STRUCT added;
};
struct ClientSpellInstakillLog
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ UINT64 caster;
  /* 10..  1*/ INT32 spellID;
};
struct PlayerCliSetMaxItemLevel
{
  /*  0..  1*/ INT32 maxLevel;
};
struct ClientDefenseMessage
{
  /*  0..  1*/ INT32 zoneID;
  /*  4..  1*/ STRING messageText;
};
struct ClientMoveUpdateFlightBackSpeed
{
  /*  0..  1*/ FLOAT speed;
  /*  8..  1*/ STRUCT status;
};
struct PlayerCliDebugGameEventsStart
{
};
struct ClientPetBattlePVPChallenge
{
  /*  0..  1*/ UINT64 challengerGUID;
  /*  8..  1*/ STRUCT location;
};
struct ClientGuildEventBankContentsChanged
{
};
struct JamGarrisonRemoteBuildingInfo
{
  /*  0..  1*/ INT32 garrPlotInstanceID;
  /*  4..  1*/ INT32 garrBuildingID;
};
struct ClientQueryNPCTextResponse
{
  /*  0..  1*/ UINT32 textID;
  /*  4..  1*/ BOOL allow;
  /*  8..  1*/ NOT_IMPLEMENTED npcText;
};
struct PlayerCliSetRuneCount
{
  /*  0..  1*/ UINT8 frost;
  /*  1..  1*/ UINT8 unholy;
  /*  2..  1*/ UINT8 blood;
};
struct ClientGameEventDebugLog
{
  /*  0..  1*/ UINT64 triggeredBy;
  /*  8..  1*/ INT32 eventID;
  /*  c..  1*/ INT32 eventType;
  /* 10..  1*/ STRING reason;
  /* 90..  1*/ STRING triggeredByName;
  /*110..  1*/ STRING eventName;
};
struct ClientInstanceEncounterDisengageUnit
{
  /*  0..  1*/ UINT64 unit;
};
struct PlayerSaveGuildEmblem
{
  /*  0..  1*/ UINT64 vendor;
  /*  8..  1*/ INT32 bg;
  /*  c..  1*/ INT32 eStyle;
  /* 10..  1*/ INT32 eColor;
  /* 14..  1*/ INT32 bColor;
  /* 18..  1*/ INT32 bStyle;
};
struct ClientGuildRoster
{
  /*  0..  1*/ Array<ClientGuildRosterMemberData> memberData;
  /* 18..  1*/ INT32 guildFlags;
  /* 1c..  1*/ STRING welcomeText;
  /*21d..  1*/ STRING infoText;
  /*9f0..  1*/ NOT_IMPLEMENTED createDate;
  /*a10..  1*/ INT32 numAccounts;
  /*a14..  1*/ INT32 maxWeeklyRep;
};
struct JamBattlePayPurchase
{
  /*  0..  1*/ UINT64 purchaseID;
  /*  8..  1*/ UINT32 status;
  /*  c..  1*/ UINT32 resultCode;
  /* 10..  1*/ UINT32 productID;
  /* 14..  1*/ STRING walletName;
};
struct ClientNotifyReceivedMail
{
  /*  0..  1*/ FLOAT delay;
};
struct PlayerMoveForceRootAck
{
  /*  0..  1*/ STRUCT data;
};
struct PlayerMoveSetCollisionHeightAck
{
  /*  0..  1*/ STRUCT data;
  /* b0..  1*/ UPDATE_COLLISION_HEIGHT_REASON reason;
  /* b4..  1*/ UINT32 mountDisplayID;
  /* b8..  1*/ FLOAT height;
};
struct ClientAccountDataTimes
{
  /*  0..  1*/ TIME_T serverTime;
  /*  8..  1*/ UINT32 timeBits;
  /* 10..  1*/ FixedArray<TIME_T, 8> accountTimes;
};
struct PlayerCliMissileTrajectoryCollision
{
  /*  0..  1*/ UINT64 casterGUID;
  /*  8..  1*/ V3 collisionPos;
  /* 14..  1*/ INT32 spellID;
  /* 18..  1*/ UINT8 castID;
};
struct ClientSpellUpdateChainTargets
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ Array<UINT64> targets;
  /* 20..  1*/ INT32 spellID;
};
struct ClientDestroyObject
{
  /*  0..  1*/ BOOL isDead;
  /*  8..  1*/ UINT64 guid;
};
struct UserClientForceTakeLeader
{
  /*  0..  1*/ UINT8 partyIndex;
};
struct ClientPetGodMode
{
  /*  0..  1*/ BOOL enabled;
};
struct JamCliGarrisonRemoteSiteInfo
{
  /*  0..  1*/ INT32 garrSiteLevelID;
  /*  8..  1*/ Array<JamGarrisonRemoteBuildingInfo> buildings;
};
struct GlobalGuildRequestGuildXP
{
  /*  0..  1*/ UINT64 guildGUID;
};
struct ClientMapObjectivesInit
{
  /*  0..  1*/ Array<BattlegroundCapturePointInfo> capturePointInfo;
};
struct RaidTargetSymbol
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ UINT8 symbol;
};
struct PlayerCliScenarioSetStep
{
  /*  0..  1*/ INT32 stepID;
};
struct ClientChat
{
  /*  0..  1*/ STRUCT chat;
};
struct JamBattlePayDistributionObject
{
  /*  0..  1*/ UINT64 distributionID;
  /*  8..  1*/ UINT32 status;
  /*  c..  1*/ UINT32 productID;
  /* 10..  1*/ UINT64 targetPlayer;
  /* 18..  1*/ UINT32 targetVirtualRealm;
  /* 1c..  1*/ UINT32 targetNativeRealm;
  /* 20..  1*/ UINT64 purchaseID;
  /* 28..  1*/ Optional<JamBattlePayProduct> product;
  /*1488..  1*/ BOOL revoked;
};
struct UserClientVoiceAddIgnore
{
  /*  0..  1*/ STRING offenderName;
};
struct UserClientPetitionRenameGuild
{
  /*  0..  1*/ UINT64 petitionGuid;
  /*  8..  1*/ STRING newGuildName;
};
struct ClientBattlePetUpdates
{
  /*  0..  1*/ BOOL addedPet;
  /*  8..  1*/ Array<JamClientBattlePet> pets;
};
struct PlayerCliAutobankItem
{
  /*  0..  1*/ UINT8 packSlot;
  /*  8..  1*/ STRUCT inv;
  /* 20..  1*/ UINT8 slot;
};
struct ClientUpdateObject
{
  /*  0..  1*/ UINT32 numObjUpdates;
  /*  4..  1*/ UINT16 mapID;
  /*  8..  1*/ NOT_IMPLEMENTED data;
};
struct ClientForceActionShowResponse
{
  /*  0..  1*/ UINT32 debugCombatVictimActions;
  /*  4..  1*/ UINT32 debugCombatActions;
};
struct UserClientGetUndeleteCharacterCooldownStatus
{
};
struct PlayerCliSocketGems
{
  /*  0..  1*/ FixedArray<UINT64, 3> gemItem;
  /* 18..  1*/ UINT64 itemGuid;
};
struct ClientGarrisonOpenArchitect
{
  /*  0..  1*/ UINT64 npcGUID;
};
struct SpellChannelStartInterruptImmunities
{
  /*  0..  1*/ INT32 schoolImmunities;
  /*  4..  1*/ INT32 immunities;
};
struct ClientPlayerNotFoundFailure
{
};
struct PlayerCliCreateGameObject
{
  /*  0..  1*/ INT32 entryID;
};
struct JamClientCharacterListEntry
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ STRING name;
  /* 39..  1*/ UINT8 listPosition;
  /* 3a..  1*/ UINT8 raceID;
  /* 3b..  1*/ UINT8 classID;
  /* 3c..  1*/ UINT8 sexID;
  /* 3d..  1*/ UINT8 skinID;
  /* 3e..  1*/ UINT8 faceID;
  /* 3f..  1*/ UINT8 hairStyle;
  /* 40..  1*/ UINT8 hairColor;
  /* 41..  1*/ UINT8 facialHairStyle;
  /* 42..  1*/ UINT8 experienceLevel;
  /* 44..  1*/ INT32 zoneID;
  /* 48..  1*/ INT32 mapID;
  /* 4c..  1*/ V3 preloadPos;
  /* 58..  1*/ UINT64 guildGUID;
  /* 60..  1*/ UINT32 flags;
  /* 64..  1*/ UINT32 flags2;
  /* 68..  1*/ UINT32 flags3;
  /* 6c..  1*/ BOOL firstLogin;
  /* 70..  1*/ UINT32 petCreatureDisplayID;
  /* 74..  1*/ UINT32 petExperienceLevel;
  /* 78..  1*/ UINT32 petCreatureFamilyID;
  /* 7c..  1*/ BOOL boostInProgress;
  /* 80..  1*/ FixedArray<INT32, 2> professionIDs;
  /* 88..  1*/ FixedArray<JamClientCharacterListItem, 23> inventoryItems;
};
struct ClientMoveSplineSetHover
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct JamCliInspectEnchantData
{
  /*  0..  1*/ UINT32 id;
  /*  4..  1*/ UINT8 index;
};
struct PlayerCliQuestGiverStatusMultipleQuery
{
};
struct JamResyncRune
{
  /*  0..  1*/ UINT8 runeType;
  /*  1..  1*/ UINT8 cooldown;
};
struct PlayerCliMapControllerAddPointsCheat
{
  /*  0..  1*/ INT32 points;
  /*  4..  1*/ UINT8 team;
};
struct ClientSendRaidTargetUpdateAll
{
  /*  0..  1*/ Array<RaidTargetSymbol> targets;
  /* 18..  1*/ UINT8 partyIndex;
};
struct PlayerCliDebugTreasure
{
  /*  0..  1*/ BOOL enable;
};
struct ClientGuildEventPresenceChange
{
  /*  0..  1*/ BOOL loggedOn;
  /*  4..  1*/ UINT32 virtualRealmAddress;
  /*  8..  1*/ STRING name;
  /* 40..  1*/ UINT64 guid;
  /* 48..  1*/ BOOL mobile;
};
struct JamPlayerGuidLookupData
{
  /*  0..  1*/ BOOL isDeleted;
  /*  4..  1*/ UINT32 accountID;
  /*  8..  1*/ UINT64 bnetAccountID;
  /* 10..  1*/ UINT64 guidActual;
  /* 18..  1*/ STRING name;
  /* 4c..  1*/ UINT32 virtualRealmAddress;
  /* 50..  1*/ UINT8 race;
  /* 51..  1*/ UINT8 sex;
  /* 52..  1*/ UINT8 classID;
  /* 53..  1*/ UINT8 level;
  /* 54..  1*/ FixedArrayStrings<5 /*times*/, 65 /*chars*/> declinedNames;
};
struct ClientPlayOrphanSpellVisual
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ V3 sourceLocation;
  /* 14..  1*/ INT32 spellVisualID;
  /* 18..  1*/ BOOL speedAsTime;
  /* 1c..  1*/ FLOAT travelSpeed;
  /* 20..  1*/ V3 sourceOrientation;
  /* 2c..  1*/ V3 targetLocation;
};
struct ClientRemoveLossOfControl
{
  /*  0..  1*/ INT32 spellID;
  /*  8..  1*/ UINT64 caster;
  /* 10..  1*/ INT32 type;
};
struct PlayerMoveHoverAck
{
  /*  0..  1*/ STRUCT data;
};
struct UserClientNukeExpansionReward
{
};
struct JamCliGameObject
{
  /*  0..  1*/ UINT32 worldEffectID;
};
struct ClientPetitionSignResults
{
  /*  0..  1*/ UINT64 player;
  /*  8..  1*/ PETITION_ERROR error;
  /* 10..  1*/ UINT64 item;
};
struct PlayerCliResetWeeklyQuest
{
  /*  0..  1*/ INT32 questID;
};
struct SpellTargetedHealPrediction
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ STRUCT predict;
};
struct JSONBnetChallengeForm
{
  /*  0..  1*/ STRING type;
  /* 28..  1*/ DYNAMICSTRING prompt;
  /* 38..  1*/ Array<JamDynamicString> errors;
  /* 50..  1*/ Array<JSONBnetChallengeFormInput> inputs;
};
struct ClientSupercededSpells
{
  /*  0..  1*/ Array<INT32> spellID;
  /* 18..  1*/ Array<INT32> superceded;
};
struct ClientGossipText
{
  /*  0..  1*/ INT32 questID;
  /*  4..  1*/ INT32 questType;
  /*  8..  1*/ INT32 questLevel;
  /*  c..  1*/ BOOL repeatable;
  /*  d..  1*/ STRING questTitle;
  /*210..  1*/ FixedArray<INT32, 2> questFlags;
};
struct ClientPetTameFailure
{
  /*  0..  1*/ UINT8 result;
};
struct PlayerCliAuctionReplicateItems
{
  /*  0..  1*/ UINT64 auctioneer;
  /*  8..  1*/ UINT32 changeNumberCursor;
  /*  c..  1*/ UINT32 count;
  /* 10..  1*/ UINT32 changeNumberGlobal;
  /* 14..  1*/ UINT32 changeNumberTombstone;
};
struct JamCliCharacterShipment
{
  /*  0..  1*/ INT32 shipmentRecID;
  /*  8..  1*/ UINT64 shipmentID;
  /* 10..  1*/ TIME_T creationTime;
  /* 18..  1*/ TIME_T shipmentDuration;
};
struct ClientGarrisonLearnBlueprintResult
{
  /*  0..  1*/ INT32 buildingID;
  /*  4..  1*/ INT32 result;
};
struct ClientCalendarEventInviteModeratorStatus
{
  /*  0..  1*/ UINT8 status;
  /*  8..  1*/ UINT64 inviteGUID;
  /* 10..  1*/ UINT64 eventID;
  /* 18..  1*/ BOOL clearPending;
};
struct PlayerCliDebugPassiveAura
{
  /*  0..  1*/ INT32 spellID;
  /*  8..  1*/ UINT64 target;
  /* 10..  1*/ BOOL add;
};
struct ClientSetupCurrencyRecord
{
  /*  0..  1*/ INT32 type;
  /*  4..  1*/ INT32 quantity;
  /*  8..  1*/ Optional<INT32> weeklyQuantity;
  /* 10..  1*/ Optional<INT32> maxWeeklyQuantity;
  /* 18..  1*/ Optional<INT32> trackedQuantity;
  /* 20..  1*/ UINT8 flags;
};
struct JamWhoWord
{
  /*  0..  1*/ STRING word;
};
struct ClientMoveEnableGravity
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientResetAreaTrigger
{
  /*  0..  1*/ UINT64 triggerGUID;
  /*  8..  1*/ STRUCT areaTrigger;
};
struct PlayerMoveApplyMovementForceAck
{
  /*  0..  1*/ INT32 transportID;
  /*  4..  1*/ V2 direction;
  /*  c..  1*/ UINT32 movementForceID;
  /* 10..  1*/ STRUCT data;
};
struct JamItemReward
{
  /*  0..  1*/ INT32 itemID;
  /*  4..  1*/ INT32 itemDisplayID;
  /*  8..  1*/ UINT32 quantity;
};
struct ClientAuctionListBidderItemsResult
{
  /*  0..  1*/ UINT32 desiredDelay;
  /*  8..  1*/ Array<JamCliAuctionItem> items;
  /* 20..  1*/ UINT32 totalCount;
};
struct PlayerCliMailCreateTextItem
{
  /*  0..  1*/ UINT64 mailbox;
  /*  8..  1*/ INT32 mailID;
};
struct ClientSpellChannelStart
{
  /*  0..  1*/ INT32 spellID;
  /*  4..  1*/ Optional<SpellChannelStartInterruptImmunities> interruptImmunities;
  /* 10..  1*/ UINT64 casterGUID;
  /* 18..  1*/ Optional<SpellTargetedHealPrediction> healPrediction;
  /* 38..  1*/ UINT32 channelDuration;
};
struct UserClientCreateCharacter
{
  /*  0..  1*/ UINT8 facialHairStyleID;
  /*  1..  1*/ UINT8 faceID;
  /*  2..  1*/ UINT8 sexID;
  /*  3..  1*/ UINT8 hairStyleID;
  /*  4..  1*/ UINT8 skinID;
  /*  5..  1*/ UINT8 raceID;
  /*  6..  1*/ UINT8 classID;
  /*  7..  1*/ UINT8 outfitID;
  /*  8..  1*/ UINT8 hairColorID;
  /*  c..  1*/ Optional<INT32> templateSetID;
  /* 14..  1*/ STRING name;
};
struct PlayerCliReplaceTrophy
{
  /*  0..  1*/ UINT64 trophyGUID;
  /*  8..  1*/ INT32 newTrophyID;
};
struct ClientGuildBankQueryResults
{
  /*  0..  1*/ Array<JamGuildBankItemInfo> itemInfo;
  /* 18..  1*/ INT32 withdrawalsRemaining;
  /* 1c..  1*/ INT32 tab;
  /* 20..  1*/ Array<JamGuildBankTabInfo> tabInfo;
  /* 38..  1*/ BOOL fullUpdate;
  /* 40..  1*/ UINT64 money;
};
struct ClientPVPLogData
{
  /*  0..  1*/ Optional<UINT8> winner;
  /*  8..  1*/ Array<ClientPVPLogData_Player> players;
  /* 20..  1*/ Optional<ClientPVPLogData_RatingData> ratings;
  /* 3c..  1*/ FixedArray<INT8, 2> playerCount;
};
struct ClientDebugDrawMatrix
{
  /*  0..  1*/ FLOAT lifetime;
  /*  4..  1*/ V4 matrix00;
  /* 14..  1*/ UINT32 colory;
  /* 18..  1*/ V4 matrix30;
  /* 28..  1*/ UINT32 id;
  /* 2c..  1*/ UINT32 colorz;
  /* 30..  1*/ V4 matrix20;
  /* 40..  1*/ UINT32 settings;
  /* 44..  1*/ V4 matrix10;
  /* 54..  1*/ FLOAT axisscale;
  /* 58..  1*/ UINT32 colorx;
};
struct PlayerCliTaxiShowNodes
{
};
struct JamCharFactionChangeDisplayInfo
{
  /*  0..  1*/ STRING name;
  /* 31..  1*/ UINT8 sexID;
  /* 32..  1*/ UINT8 skinID;
  /* 33..  1*/ UINT8 hairColorID;
  /* 34..  1*/ UINT8 hairStyleID;
  /* 35..  1*/ UINT8 facialHairStyleID;
  /* 36..  1*/ UINT8 faceID;
  /* 37..  1*/ UINT8 raceID;
};
struct JamAddonInfo
{
  /*  0..  1*/ UINT8 status;
  /*  1..  1*/ BOOL infoProvided;
  /*  2..  1*/ BOOL keyProvided;
  /*  3..  1*/ BOOL urlProvided;
  /*  4..  1*/ UINT8 keyVersion;
  /*  8..  1*/ UINT32 revision;
  /*  c..  1*/ STRING url;
  /*10c..  1*/ FixedArray<INT8, 256> keyData;
};
struct PlayerCliGodMode
{
  /*  0..  1*/ BOOL enable;
};
struct ClientMoveSplineUnsetHover
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct JamWhoRequestServerInfo
{
  /*  0..  1*/ INT32 factionGroup;
  /*  4..  1*/ INT32 locale;
  /*  8..  1*/ UINT32 requesterVirtualRealmAddress;
};
struct ClientLFGListUpdateStatus
{
  /*  0..  1*/ BOOL listed;
  /*  4..  1*/ STRUCT request;
  /*50c..  1*/ UINT8 reason;
  /*510..  1*/ STRUCT ticket;
};
struct ClientQuestUpdateFailed
{
  /*  0..  1*/ INT32 questID;
};
struct ClientGMTicketCaseStatus
{
  /*  0..  1*/ TIME_T oldestTicketTime;
  /*  8..  1*/ TIME_T updateTime;
  /* 10..  1*/ Array<JamGMTicketCase> cases;
};
struct PlayerCliBankerActivate
{
  /*  0..  1*/ UINT64 banker;
};
struct CliChatMessageInstanceChat
{
  /*  0..  1*/ INT32 language;
  /*  4..  1*/ STRING text;
};
struct ClientAttackerStateUpdate
{
  /*  0..  1*/ Optional<JamSpellCastLogData> logData;
  /* 30..  1*/ NOT_IMPLEMENTED attackRoundInfo;
};
struct PlayerCliTargetCast
{
  /*  0..  1*/ INT32 spellID;
  /*  8..  1*/ UINT64 castTarget;
  /* 10..  1*/ UINT64 targetGUID;
  /* 18..  1*/ BOOL creatureAICast;
};
struct ClientSpellChannelUpdate
{
  /*  0..  1*/ UINT64 casterGUID;
  /*  8..  1*/ INT32 timeRemaining;
};
struct ClientMoveSetLandWalk
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct PlayerCliRequestForcedReactions
{
};
struct ClientCoinRemoved
{
  /*  0..  1*/ UINT64 lootObj;
};
struct ClientAbortNewWorld
{
};
struct PlayerMoveSetSwimSpeedCheat
{
  /*  0..  1*/ FLOAT speed;
};
struct ClientLogXPGain
{
  /*  0..  1*/ INT32 amount;
  /*  4..  1*/ FLOAT groupBonus;
  /*  8..  1*/ UINT8 reason;
  /*  9..  1*/ BOOL referAFriend;
  /*  c..  1*/ INT32 original;
  /* 10..  1*/ UINT64 victim;
};
struct PlayerCliRepopRequest
{
  /*  0..  1*/ BOOL checkInstance;
};
struct JamItemContext
{
  /*  0..  1*/ UINT8 context;
};
struct ClientCalendarEventInviteRemovedAlert
{
  /*  0..  1*/ UINT64 eventID;
  /*  8..  1*/ UINT32 date;
  /*  c..  1*/ UINT32 flags;
  /* 10..  1*/ UINT8 status;
};
struct PlayerCliGarrisonAssignFollowerToBuilding
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ UINT64 followerDBID;
  /* 10..  1*/ INT32 plotInstanceID;
};
struct LFGuildRecruitData
{
  /*  0..  1*/ UINT64 recruitGUID;
  /*  8..  1*/ STRING name;
  /* 3c..  1*/ UINT32 recruitVirtualRealm;
  /* 40..  1*/ STRING comment;
  /*440..  1*/ INT32 characterClass;
  /*444..  1*/ INT32 characterGender;
  /*448..  1*/ INT32 characterLevel;
  /*44c..  1*/ INT32 classRoles;
  /*450..  1*/ INT32 playStyle;
  /*454..  1*/ INT32 availability;
  /*458..  1*/ UINT32 secondsSinceCreated;
  /*45c..  1*/ UINT32 secondsUntilExpiration;
};
struct ClientPetAdded
{
  /*  0..  1*/ STRING name;
  /* 84..  1*/ INT32 creatureID;
  /* 88..  1*/ INT32 level;
  /* 8c..  1*/ UINT32 petNumber;
  /* 90..  1*/ INT32 displayID;
  /* 94..  1*/ UINT8 flags;
  /* 98..  1*/ INT32 petSlot;
};
struct JamWhoRequest
{
  /*  0..  1*/ INT32 minLevel;
  /*  4..  1*/ INT32 maxLevel;
  /*  8..  1*/ STRING name;
  /* 39..  1*/ STRING virtualRealmName;
  /*13a..  1*/ STRING guild;
  /*19b..  1*/ STRING guildVirtualRealmName;
  /*29c..  1*/ INT32 raceFilter;
  /*2a0..  1*/ INT32 classFilter;
  /*2a8..  1*/ Array<JamWhoWord> words;
  /*2c0..  1*/ BOOL showEnemies;
  /*2c1..  1*/ BOOL showArenaPlayers;
  /*2c2..  1*/ BOOL exactName;
  /*2c4..  1*/ Optional<JamWhoRequestServerInfo> serverInfo;
};
struct ClientDuelComplete
{
  /*  0..  1*/ BOOL started;
};
struct ClientConnectionConnectTo
{
  /*  0..  1*/ UINT64 key;
  /*  8..  1*/ UINT32 serial;
  /*  c..  1*/ FixedArray<UINT8, 256> where;
  /*10c..  1*/ UINT8 con;
};
struct ClientSocketGems
{
  /*  0..  1*/ UINT64 item;
  /*  8..  1*/ FixedArray<INT32, 3> sockets;
  /* 14..  1*/ INT32 socketMatch;
};
struct PlayerCliCreateSceneObjectCheat
{
  /*  0..  1*/ INT32 entryID;
  /*  4..  1*/ STRUCT scriptData;
};
struct ClientSpellCooldown
{
  /*  0..  1*/ Array<ClientSpellCooldownStruct> spellCooldowns;
  /* 18..  1*/ UINT64 caster;
  /* 20..  1*/ UINT8 flags;
};
struct ClientServerPerfStat
{
  /*  0..  1*/ STRING text;
};
struct UserClientReorderCharacters
{
  /*  0..  1*/ Array<JamUserClientReorderEntry> entries;
};
struct UserClientSendContactList
{
  /*  0..  1*/ UINT32 flags;
};
struct PlayerCliPushQuestToParty
{
  /*  0..  1*/ INT32 questID;
};
struct GlobalGuildFlagForRenameCheat
{
  /*  0..  1*/ BOOL setFlag;
};
struct JamItemBonuses
{
  /*  0..  1*/ Array<INT32> bonusListIDs;
};
struct UserClientBattlePetSetLevel
{
  /*  0..  1*/ Array<UINT64> battlePetGUIDs;
  /* 18..  1*/ UINT16 level;
};
struct PlayerCliMatchesCondition
{
  /*  0..  1*/ INT32 conditionID;
};
struct PlayerCliTaxiClearAllNodes
{
};
struct UserClientGhost
{
  /*  0..  1*/ BOOL enable;
  /*  1..  1*/ STRING playerName;
};
struct ClientMoveSplineSetFlightSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
};
struct JamWhoEntry
{
  /*  0..  1*/ STRUCT playerData;
  /*1a0..  1*/ UINT64 guildGUID;
  /*1a8..  1*/ UINT32 guildVirtualRealmAddress;
  /*1ac..  1*/ STRING guildName;
  /*210..  1*/ INT32 areaID;
  /*214..  1*/ BOOL isGM;
};
struct UserClientDFSearchLeave
{
  /*  0..  1*/ UINT32 slot;
};
struct UserClientGMTicketCreate
{
  /*  0..  1*/ V3 pos;
  /*  c..  1*/ INT32 mapID;
  /* 10..  1*/ UINT8 flags;
  /* 11..  1*/ BOOL needMoreHelp;
  /* 12..  1*/ BOOL needResponse;
  /* 13..  1*/ STRING description;
  /*7e8..  1*/ NOT_IMPLEMENTED chatHistoryData;
};
struct PlayerCliSaveEquipmentSet
{
  /*  0..  1*/ STRUCT set;
};
struct ClientUpdateDungeonEncounterForLoot
{
};
struct PlayerCliSeamlessTransferCheat
{
  /*  0..  1*/ INT32 transferID;
};
struct ClientSpellModifier
{
  /*  0..  1*/ UINT8 modIndex;
  /*  8..  1*/ Array<ClientSpellModifierData> modifierData;
};
struct UserClientSetImmigrantHostSearchLog
{
  /*  0..  1*/ BOOL report;
};
struct JamItemBonusInstanceData
{
  /*  0..  1*/ STRUCT context;
  /*  8..  1*/ STRUCT bonuses;
};
struct PlayerCliSwapVoidItem
{
  /*  0..  1*/ UINT64 npc;
  /*  8..  1*/ UINT64 voidItem;
  /* 10..  1*/ UINT32 dstSlot;
};
struct ClientGMDestroyCorpse
{
  /*  0..  1*/ BOOL success;
};
struct JamWhoResponse
{
  /*  0..  1*/ Array<JamWhoEntry> entries;
};
struct UserClientGetAccountCharacterList
{
  /*  0..  1*/ UINT32 token;
};
struct PlayerCliPetAbandon
{
  /*  0..  1*/ UINT64 pet;
};
struct GlobalGuildQueryNews
{
  /*  0..  1*/ UINT64 guildGUID;
};
struct ClientQueryTimeResponse
{
  /*  0..  1*/ TIME_T currentTime;
  /*  8..  1*/ INT32 timeOutRequest;
};
struct PlayerCliCompleteGuildAchievement
{
  /*  0..  1*/ INT32 achievementID;
};
struct ClientSetFlatSpellModifier
{
  /*  0..  1*/ Array<ClientSpellModifier> modifiers;
};
struct JamCliStructSendMail
{
  /*  0..  1*/ UINT64 mailbox;
  /*  8..  1*/ STRING target;
  /*13a..  1*/ STRING subject;
  /*23b..  1*/ STRING body;
  /*a0c..  1*/ INT32 stationeryID;
  /*a10..  1*/ INT32 packageID;
  /*a18..  1*/ Array<JamCliStructMailAttachment> attachments;
  /*a30..  1*/ UINT64 sendMoney;
  /*a38..  1*/ UINT64 cod;
};
struct PlayerCliPurgeDeletedItems
{
};
struct PlayerCliSetGrantableLevels
{
  /*  0..  1*/ UINT32 levels;
};
struct JamItemInstance
{
  /*  0..  1*/ INT32 itemID;
  /*  4..  1*/ INT32 randomPropertiesSeed;
  /*  8..  1*/ INT32 randomPropertiesID;
  /* 10..  1*/ Optional<JamItemBonusInstanceData> itemBonus;
  /* 38..  1*/ Optional<CompactArrayIi15TSGrowableArrayIiEjLi0EE> modifications;
};
struct ClientRaidDifficultySet
{
  /*  0..  1*/ INT32 difficultyID;
};
struct PlayerCliCheatTestJamFactory
{
  /*  0..  1*/ UINT32 msgid;
};
struct ClientEncounterStart
{
  /*  0..  1*/ INT32 difficultyID;
  /*  4..  1*/ INT32 groupSize;
  /*  8..  1*/ INT32 encounterID;
};
struct VignetteClientData
{
  /*  0..  1*/ UINT64 objGUID;
  /*  8..  1*/ V3 position;
  /* 14..  1*/ INT32 vignetteID;
};
struct JamQualifiedGUID
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 virtualRealmAddress;
};
struct UserClientSilencePartyTalker
{
  /*  0..  1*/ BOOL silence;
  /*  8..  1*/ UINT64 target;
  /* 10..  1*/ UINT8 partyIndex;
};
struct PlayerMoveGravityDisableAck
{
  /*  0..  1*/ STRUCT data;
};
struct UserClientBFMgrAdvanceState
{
  /*  0..  1*/ INT32 queueID;
};
struct PlayerMoveTeleportCheat
{
  /*  0..  1*/ FLOAT facing;
  /*  4..  1*/ V3 position;
};
struct PlayerCliRuneRegenDebug
{
  /*  0..  1*/ BOOL enable;
};
struct UserClientSupportTicketSubmitBug
{
  /*  0..  1*/ STRING note;
  /*400..  1*/ STRUCT header;
};
struct ClientGroupUninvite
{
};
struct JamBonusObjectiveData
{
  /*  0..  1*/ INT32 bonusObjectiveID;
  /*  4..  1*/ BOOL objectiveComplete;
};
struct ClientEnableBarberShop
{
};
struct UserClientCalendarComplain
{
  /*  0..  1*/ UINT64 inviteID;
  /*  8..  1*/ UINT64 eventID;
  /* 10..  1*/ UINT64 invitedByGUID;
};
struct UserClientGmRevealTo
{
  /*  0..  1*/ UINT32 type;
  /*  4..  1*/ STRING name;
};
struct PlayerCliRechargeCheat
{
};
struct PlayerCliIgnoreKnockbackCheat
{
};
struct UserClientQuestPOIQuery
{
  /*  0..  1*/ INT32 missingQuestCount;
  /*  4..  1*/ FixedArray<INT32, 50> missingQuestPOIs;
};
struct JamPlayerGuidLookupHint
{
  /*  0..  1*/ Optional<UINT32> virtualRealmAddress;
  /*  8..  1*/ Optional<UINT32> nativeRealmAddress;
};
struct PlayerCliLootRoll
{
  /*  0..  1*/ UINT64 lootObj;
  /*  8..  1*/ UINT8 lootListID;
  /*  9..  1*/ UINT8 rollType;
};
struct ClientEncounterEnd
{
  /*  0..  1*/ INT32 groupSize;
  /*  4..  1*/ BOOL success;
  /*  8..  1*/ INT32 difficultyID;
  /*  c..  1*/ INT32 encounterID;
};
struct DBQuery
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ INT32 recordID;
};
struct JamGarrisonFollower
{
  /*  0..  1*/ UINT64 dbID;
  /*  8..  1*/ INT32 garrFollowerID;
  /*  c..  1*/ INT32 creatureID;
  /* 10..  1*/ INT32 garrGivenNameID;
  /* 14..  1*/ INT32 garrFamilyNameID;
  /* 18..  1*/ INT32 gender;
  /* 1c..  1*/ INT32 spec;
  /* 20..  1*/ INT32 race;
  /* 24..  1*/ INT32 quality;
  /* 28..  1*/ INT32 followerLevel;
  /* 2c..  1*/ INT32 itemLevelWeapon;
  /* 30..  1*/ INT32 itemLevelArmor;
  /* 34..  1*/ INT32 xp;
  /* 38..  1*/ INT32 currentBuildingID;
  /* 3c..  1*/ INT32 currentMissionID;
  /* 40..  1*/ Array<INT32> abilityID;
};
struct UserClientConvertRaid
{
  /*  0..  1*/ BOOL raid;
};
struct PlayerCliAICheat
{
  /*  0..  1*/ BOOL on;
};
struct JamCurrencyReward
{
  /*  0..  1*/ UINT32 currencyID;
  /*  4..  1*/ UINT32 quantity;
};
struct ClientLFGuildApplicantListChanged
{
};
struct PlayerCliGMSpawnTrackerDump
{
  /*  0..  1*/ UINT64 target;
};
struct ClientGroupDestroyed
{
};
struct ClientMoveSplineDisableCollision
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct ClientBeastmasterFailed
{
};
struct UserClientToggleDifficulty
{
};
struct JamCliSupportTicketCalendarEventInfo
{
  /*  0..  1*/ UINT64 eventID;
  /*  8..  1*/ UINT64 inviteID;
  /* 10..  1*/ STRING eventTitle;
};
struct PlayerMoveEnableSwimToFlyTransAck
{
  /*  0..  1*/ STRUCT data;
};
struct PlayerCliDechargeCheat
{
};
struct PlayerCliSetPetSlot
{
  /*  0..  1*/ UINT64 stableMaster;
  /*  8..  1*/ UINT32 petNumber;
  /*  c..  1*/ UINT8 destSlot;
};
struct JamCliMailAttachedItemEnchant
{
  /*  0..  1*/ INT32 enchant;
  /*  4..  1*/ UINT32 duration;
  /*  8..  1*/ INT32 charges;
};
struct PlayerCliSetBankAutosortDisabled
{
  /*  0..  1*/ BOOL disable;
};
struct ClientGuildSendGuildXP
{
  /*  0..  1*/ INT64 guildXPToLevel;
  /*  8..  1*/ INT64 memberTotalXP;
  /* 10..  1*/ INT64 memberWeeklyXP;
  /* 18..  1*/ INT64 guildTotalXP;
};
struct JamGarrisonMission
{
  /*  0..  1*/ UINT64 dbID;
  /*  8..  1*/ INT32 missionRecID;
  /* 10..  1*/ TIME_T offerTime;
  /* 18..  1*/ TIME_T offerDuration;
  /* 20..  1*/ TIME_T startTime;
  /* 28..  1*/ TIME_T travelDuration;
  /* 30..  1*/ TIME_T missionDuration;
  /* 38..  1*/ INT32 missionState;
};
struct ClientDebugDrawSetSourceColor
{
  /*  0..  1*/ UINT32 color;
  /*  4..  1*/ UINT32 id;
  /*  8..  1*/ UINT32 sourceID;
};
struct CliChatAddonMessageInstanceChat
{
  /*  0..  1*/ STRING prefix;
  /* 11..  1*/ STRING text;
};
struct PlayerCliForceAction
{
  /*  0..  1*/ UINT8 category;
  /*  1..  1*/ BOOL onSelf;
  /*  2..  1*/ BOOL set;
};
struct ClientLFGuildApplicationsListChanged
{
};
struct ClientSpellStart
{
  /*  0..  1*/ STRUCT cast;
};
struct JamCliBnetLicense
{
  /*  0..  1*/ INT32 licenseID;
  /*  8..  1*/ TIME_T expiration;
};
struct ClientQuestGiverOfferRewardMessage
{
  /*  0..  1*/ INT32 portraitTurnIn;
  /*  4..  1*/ INT32 portraitGiver;
  /*  8..  1*/ STRING portraitGiverText;
  /*408..  1*/ STRING questTitle;
  /*608..  1*/ STRING portraitTurnInText;
  /*a08..  1*/ STRING portraitGiverName;
  /*b08..  1*/ STRING rewardText;
  /*16c0..  1*/ STRING portraitTurnInName;
  /*17c0..  1*/ STRUCT questData;
  /*18d0..  1*/ INT32 questPackageID;
};
struct UserClientCommentatorEnable
{
  /*  0..  1*/ INT32 enable;
};
struct JamClientAuctionItemForSale
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 useCount;
};
struct UserClientCheatBattlePetSetQuality
{
  /*  0..  1*/ UINT16 breedQuality;
  /*  8..  1*/ UINT64 battlePetGUID;
  /* 10..  1*/ BOOL allPetsInJournal;
};
struct JamCliMailAttachedItem
{
  /*  0..  1*/ UINT8 position;
  /*  4..  1*/ INT32 attachID;
  /*  8..  1*/ STRUCT item;
  /* 68..  1*/ INT32 count;
  /* 6c..  1*/ INT32 charges;
  /* 70..  1*/ UINT32 maxDurability;
  /* 74..  1*/ INT32 durability;
  /* 78..  1*/ BOOL unlocked;
  /* 7c..  1*/ FixedArray<JamCliMailAttachedItemEnchant, 8> enchants;
};
struct PlayerCliQueryPetName
{
  /*  0..  1*/ UINT64 petID;
  /*  8..  1*/ UINT64 unitGUID;
};
struct UserClientLiveRegionCharacterCopy
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 virtualRealmAddress;
  /*  c..  1*/ UINT32 token;
};
struct ClientGuildSendMaxDailyXP
{
  /*  0..  1*/ INT64 xp;
};
struct UserClientDoReadyCheck
{
  /*  0..  1*/ UINT8 partyIndex;
};
struct JamCliMovementTransport
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ V3 position;
  /* 14..  1*/ FLOAT facing;
  /* 18..  1*/ UINT8 vehicleSeatIndex;
  /* 1c..  1*/ UINT32 moveTime;
  /* 20..  1*/ Optional<UINT32> prevMoveTime;
  /* 28..  1*/ Optional<INT32> vehicleRecID;
};
struct PlayerMoveEmbeddedHeartbeat
{
  /*  0..  1*/ STRUCT status;
};
struct UserClientRequestAccountData
{
  /*  0..  1*/ UINT8 dataType;
};
struct PlayerCliMailGetList
{
  /*  0..  1*/ UINT64 mailbox;
};
struct ClientMoveSplineUnroot
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct UserClientAddIgnore
{
  /*  0..  1*/ STRING name;
};
struct PlayerCliShowAdvertsCheat
{
  /*  0..  1*/ UINT32 detailLevel;
  /*  4..  1*/ FLOAT radius;
  /*  8..  1*/ BOOL on;
};
struct ClientGuildChangeNameResult
{
  /*  0..  1*/ BOOL success;
};
struct ClientAuraCastLog
{
  /*  0..  1*/ UINT64 victim;
  /*  8..  1*/ UINT64 attacker;
  /* 10..  1*/ FLOAT applyRoll;
  /* 14..  1*/ INT32 spellID;
  /* 18..  1*/ FLOAT applyRollNeeded;
};
struct UserClientSetDungeonDifficulty
{
  /*  0..  1*/ UINT32 difficultyID;
};
struct ClientCheatPlayerLookup
{
  /*  0..  1*/ UINT8 experienceLevel;
  /*  1..  1*/ UINT8 faceID;
  /*  4..  1*/ UINT32 flags;
  /*  8..  1*/ UINT32 flags3;
  /*  c..  1*/ UINT8 raceID;
  /* 10..  1*/ UINT32 zoneID;
  /* 14..  1*/ UINT32 petExperienceLevel;
  /* 18..  1*/ UINT8 firstLogin;
  /* 19..  1*/ UINT8 sexID;
  /* 1a..  1*/ UINT8 hairStyleID;
  /* 1c..  1*/ UINT32 mapID;
  /* 20..  1*/ UINT8 classID;
  /* 28..  1*/ UINT64 guid;
  /* 30..  1*/ V3 position;
  /* 3c..  1*/ UINT32 petCreatureFamilyID;
  /* 40..  1*/ STRING name;
  /* 71..  1*/ UINT8 hairColorID;
  /* 72..  1*/ UINT8 skinID;
  /* 74..  1*/ UINT32 petDisplayInfoID;
  /* 78..  1*/ UINT64 guildGUID;
  /* 80..  1*/ UINT32 flags2;
  /* 84..  1*/ UINT8 facialHairStyleID;
};
struct PlayerCliLeavePetBattleQueue
{
  /*  0..  1*/ STRUCT ticket;
};
struct JamCliMailListEntry
{
  /*  0..  1*/ INT32 mailID;
  /*  4..  1*/ UINT8 senderType;
  /*  8..  1*/ Optional<UINT64> senderCharacter;
  /* 18..  1*/ STRUCT senderHint;
  /* 28..  1*/ Optional<INT32> altSenderID;
  /* 30..  1*/ UINT64 cod;
  /* 38..  1*/ INT32 packageID;
  /* 3c..  1*/ INT32 stationeryID;
  /* 40..  1*/ UINT64 sentMoney;
  /* 48..  1*/ INT32 flags;
  /* 4c..  1*/ FLOAT daysLeft;
  /* 50..  1*/ INT32 mailTemplateID;
  /* 54..  1*/ STRING subject;
  /*154..  1*/ STRING body;
  /*2098..  1*/ Array<JamCliMailAttachedItem> attachments;
};
struct ClientGuildSendRankChange
{
  /*  0..  1*/ UINT64 other;
  /*  8..  1*/ BOOL promote;
  /* 10..  1*/ UINT64 officer;
  /* 18..  1*/ UINT32 rankID;
};
struct ClientLFGQueueStatus
{
  /*  0..  1*/ STRUCT ticket;
  /* 18..  1*/ UINT32 queuedTime;
  /* 1c..  1*/ UINT32 avgWaitTime;
  /* 20..  1*/ UINT32 slot;
  /* 24..  1*/ UINT32 avgWaitTimeMe;
  /* 28..  1*/ FixedArray<UINT8, 3> lastNeeded;
  /* 2c..  1*/ FixedArray<UINT32, 3> avgWaitTimeByRole;
};
struct JamBattlepayProductItem
{
  /*  0..  1*/ UINT32 ID;
  /*  4..  1*/ UINT32 itemID;
  /*  8..  1*/ UINT32 quantity;
  /*  c..  1*/ Optional<JamBattlepayDisplayInfo> displayInfo;
  /*142c..  1*/ BOOL hasPet;
  /*1430..  1*/ Optional<BATTLEPETRESULT> petResult;
  /*1438..  1*/ BOOL hasMount;
};
struct ClientIsQuestCompleteResponse
{
  /*  0..  1*/ INT32 questID;
  /*  4..  1*/ BOOL complete;
};
struct JamCliMovementFallVelocity
{
  /*  0..  1*/ V2 direction;
  /*  8..  1*/ FLOAT speed;
};
struct ClientGMTicketStatusUpdate
{
  /*  0..  1*/ INT32 statusInt;
};
struct PlayerCliSpiritHealerActivate
{
  /*  0..  1*/ UINT64 healer;
};
struct GlobalChallengeModeDumpLeaders
{
  /*  0..  1*/ INT32 mapID;
};
struct ClientFriendStatus
{
  /*  0..  1*/ UINT32 virtualRealmAddress;
  /*  4..  1*/ STRING notes;
  /*208..  1*/ UINT32 classID;
  /*20c..  1*/ UINT8 status;
  /*210..  1*/ UINT64 guid;
  /*218..  1*/ UINT32 level;
  /*21c..  1*/ UINT32 areaID;
  /*220..  1*/ UINT8 friendResult;
};
struct JamInvUpdate
{
  /*  0..  1*/ Array<JamInvItem> items;
};
struct PlayerCliDestroyMonster
{
  /*  0..  1*/ UINT64 monster;
};
struct UserClientChangeGdfPVPRating
{
  /*  0..  1*/ FLOAT variance;
  /*  4..  1*/ FLOAT rating;
  /*  8..  1*/ INT32 bracket;
};
struct ClientResistLog
{
  /*  0..  1*/ UINT64 attacker;
  /*  8..  1*/ UINT64 victim;
  /* 10..  1*/ FLOAT resistRoll;
  /* 14..  1*/ INT32 castLevel;
  /* 18..  1*/ INT32 spellID;
  /* 1c..  1*/ FLOAT resistRollNeeded;
  /* 20..  1*/ UINT8 resistLogFlags;
};
struct PlayerCliSetAllExplored
{
};
struct ClientGMCharacterRestoreResponse
{
  /*  0..  1*/ UINT32 srcAccount;
  /*  8..  1*/ Array<JamClientGMCharacterRestoreResponseWarning> warningStrings;
  /* 20..  1*/ STRING resultDescription;
  /*120..  1*/ UINT32 dstAccount;
  /*124..  1*/ BOOL success;
  /*128..  1*/ UINT32 resultCode;
  /*12c..  1*/ UINT32 token;
  /*130..  1*/ UINT64 newCharacterGUID;
  /*138..  1*/ UINT64 oldCharacterGUID;
};
struct ClientPVPCredit
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ INT32 honor;
  /*  c..  1*/ INT32 rank;
};
struct PlayerCliBattlemasterJoin
{
  /*  0..  1*/ BOOL joinAsGroup;
  /*  1..  1*/ UINT8 roles;
  /*  8..  1*/ UINT64 queueID;
  /* 10..  1*/ FixedArray<INT32, 2> blacklistMap;
};
struct ClientUndeleteCooldownStatusResponse
{
  /*  0..  1*/ BOOL onCooldown;
};
struct JamCliMailNextTimeEntry
{
  /*  0..  1*/ UINT64 senderGUID;
  /*  8..  1*/ STRUCT senderHint;
  /* 18..  1*/ FLOAT timeLeft;
  /* 1c..  1*/ INT32 altSenderID;
  /* 20..  1*/ UINT8 altSenderType;
  /* 24..  1*/ INT32 stationeryID;
};
struct PlayerCliGarrisonSetBuildingActive
{
  /*  0..  1*/ INT32 plotInstanceID;
};
struct ClientGuildCommandResult
{
  /*  0..  1*/ STRING name;
  /* 84..  1*/ INT32 result;
  /* 88..  1*/ INT32 command;
};
struct UserClientSetRole
{
  /*  0..  1*/ UINT64 changedUnit;
  /*  8..  1*/ UINT32 role;
  /*  c..  1*/ UINT8 partyIndex;
};
struct ClientAttackStop
{
  /*  0..  1*/ UINT64 attacker;
  /*  8..  1*/ UINT64 victim;
  /* 10..  1*/ BOOL nowDead;
};
struct JamCliMovementFallOrLand
{
  /*  0..  1*/ UINT32 time;
  /*  4..  1*/ FLOAT jumpVelocity;
  /*  8..  1*/ Optional<JamCliMovementFallVelocity> velocity;
};
struct UserClientGmCharacterRestore
{
  /*  0..  1*/ Array<UINT8> data;
  /* 18..  1*/ UINT32 locale;
  /* 1c..  1*/ UINT32 clientToken;
  /* 20..  1*/ UINT32 toAccount;
  /* 24..  1*/ BOOL compressed;
};
struct ClientOpenContainer
{
  /*  0..  1*/ UINT64 container;
};
struct PlayerAddGuildXPCheat
{
  /*  0..  1*/ INT32 xp;
};
struct ClientGarrisonPlaceBuildingResult
{
  /*  0..  1*/ INT32 result;
  /*  8..  1*/ STRUCT buildingInfo;
};
struct UserClientMinimapPing
{
  /*  0..  1*/ V2 position;
  /*  8..  1*/ UINT8 partyIndex;
};
struct ClientResumeCastBar
{
  /*  0..  1*/ INT32 spellID;
  /*  8..  1*/ UINT64 guid;
  /* 10..  1*/ UINT64 target;
  /* 18..  1*/ UINT32 timeRemaining;
  /* 1c..  1*/ BOOL hasInterruptImmunities;
  /* 20..  1*/ INT32 schoolImmunities;
  /* 24..  1*/ INT32 immunities;
  /* 28..  1*/ UINT32 totalTime;
};
struct ClientCustomLoadScreen
{
  /*  0..  1*/ INT32 teleportSpellID;
};
struct UserClientWhoIs
{
  /*  0..  1*/ STRING charName;
};
struct PlayerCliDestroyMailCheat
{
};
struct ClientCalendarEventInviteStatus
{
  /*  0..  1*/ UINT32 flags;
  /*  8..  1*/ UINT64 eventID;
  /* 10..  1*/ UINT8 status;
  /* 11..  1*/ BOOL clearPending;
  /* 14..  1*/ UINT32 responseTime;
  /* 18..  1*/ UINT32 date;
  /* 20..  1*/ UINT64 inviteGUID;
};
struct PlayerCliQuestGiverChooseReward
{
  /*  0..  1*/ UINT64 questGiverGUID;
  /*  8..  1*/ INT32 questID;
  /*  c..  1*/ INT32 itemChoiceID;
};
struct GlobalLFGuildRemoveRecruit
{
  /*  0..  1*/ UINT64 guildGUID;
};
struct ClientPetitionRenameGuildResponse
{
  /*  0..  1*/ UINT64 petitionGuid;
  /*  8..  1*/ STRING newGuildName;
};
struct PlayerCliInvisDumpCheat
{
  /*  0..  1*/ UINT64 target;
};
struct ClientChannelNotifyLeft
{
  /*  0..  1*/ STRING channel;
  /* 80..  1*/ INT32 chatChannelID;
  /* 84..  1*/ BOOL suspended;
};
struct JamCliAuctionItemEnchant
{
  /*  0..  1*/ INT32 ID;
  /*  4..  1*/ UINT32 expiration;
  /*  8..  1*/ INT32 charges;
  /*  c..  1*/ UINT8 slot;
};
struct ClientMoveSplineSetRunSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
};
struct ClientSummonRaidMemberValidateReason
{
  /*  0..  1*/ UINT64 member;
  /*  8..  1*/ INT32 reasonCode;
};
struct ClientStopElapsedTimer
{
  /*  0..  1*/ UINT32 timerID;
  /*  4..  1*/ BOOL keepTimer;
};
struct VignetteClientDataSet
{
  /*  0..  1*/ STRUCT idList;
  /* 18..  1*/ Array<VignetteClientData> data;
};
struct JamCliMovementStatus
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 moveFlags0;
  /*  c..  1*/ UINT32 moveFlags1;
  /* 10..  1*/ UINT32 moveTime;
  /* 14..  1*/ V3 position;
  /* 20..  1*/ FLOAT facing;
  /* 28..  1*/ Optional<JamCliMovementTransport> transport;
  /* 60..  1*/ FLOAT pitch;
  /* 64..  1*/ Optional<JamCliMovementFallOrLand> fall;
  /* 80..  1*/ FLOAT stepUpStartElevation;
  /* 84..  1*/ BOOL hasSpline;
  /* 85..  1*/ BOOL heightChangeFailed;
  /* 88..  1*/ Array<UINT32> removeForcesIDs;
  /* a0..  1*/ UINT32 moveIndex;
  /* a4..  1*/ BOOL remoteTimeValid;
};
struct ClientPlayedTime
{
  /*  0..  1*/ INT32 totalTime;
  /*  4..  1*/ BOOL triggerEvent;
  /*  8..  1*/ INT32 levelTime;
};
struct PlayerCliSetCriteriaCheat
{
  /*  0..  1*/ UINT64 quantity;
  /*  8..  1*/ UINT32 criteriaID;
};
struct ClientCharacterUpgradeStarted
{
  /*  0..  1*/ UINT64 characterGUID;
};
struct PlayerMoveCharmTeleportCheat
{
  /*  0..  1*/ FLOAT facing;
  /*  4..  1*/ V3 position;
};
struct PlayerCliSetEncounterProfiler
{
  /*  0..  1*/ BOOL enable;
  /*  4..  1*/ INT32 encounterID;
  /*  8..  1*/ STRING mailTo;
};
struct UserClientWipeServerFirstAchievements
{
};
struct ClientGuildNews
{
  /*  0..  1*/ Array<JamGuildNewsEvent> news;
};
struct ClientSpellDelayed
{
  /*  0..  1*/ UINT64 caster;
  /*  8..  1*/ INT32 actualDelay;
};
struct ClientAreaShareMappingsResponse
{
  /*  0..  1*/ Array<JamAreaShareMappingInfo> mappings;
};
struct PlayerCliBattlePetsReconvert
{
};
struct ClientEnchantmentLog
{
  /*  0..  1*/ UINT64 caster;
  /*  8..  1*/ UINT64 owner;
  /* 10..  1*/ UINT64 itemGUID;
  /* 18..  1*/ INT32 itemID;
  /* 1c..  1*/ INT32 enchantSlot;
  /* 20..  1*/ INT32 enchantment;
};
struct PlayerCliQueryObjRotation
{
  /*  0..  1*/ UINT64 guid;
};
struct JamCliAuctionItem
{
  /*  0..  1*/ STRUCT item;
  /* 60..  1*/ INT32 count;
  /* 64..  1*/ INT32 charges;
  /* 68..  1*/ Array<JamCliAuctionItemEnchant> enchantments;
  /* 80..  1*/ INT32 flags;
  /* 84..  1*/ INT32 auctionItemID;
  /* 88..  1*/ UINT64 owner;
  /* 90..  1*/ UINT64 minBid;
  /* 98..  1*/ UINT64 minIncrement;
  /* a0..  1*/ UINT64 buyoutPrice;
  /* a8..  1*/ INT32 durationLeft;
  /* ac..  1*/ UINT8 deleteReason;
  /* ad..  1*/ BOOL censorServerSideInfo;
  /* ae..  1*/ BOOL censorBidInfo;
  /* b0..  1*/ UINT64 itemGUID;
  /* b8..  1*/ UINT32 ownerAccountID;
  /* bc..  1*/ UINT32 endTime;
  /* c0..  1*/ UINT64 bidder;
  /* c8..  1*/ UINT64 bidAmount;
};
struct UserClientWorldTeleport
{
  /*  0..  1*/ UINT64 transport;
  /*  8..  1*/ FLOAT facing;
  /*  c..  1*/ UINT32 mapID;
  /* 10..  1*/ V3 position;
};
struct ClientPVPSeason
{
  /*  0..  1*/ INT32 previousSeason;
  /*  4..  1*/ INT32 currentSeason;
};
struct ClientSummonRaidMemberValidateFailed
{
  /*  0..  1*/ Array<ClientSummonRaidMemberValidateReason> members;
};
struct ClientInstanceReset
{
  /*  0..  1*/ UINT32 mapID;
};
struct JamCliSplineFilterKey
{
  /*  0..  1*/ FLOAT in;
  /*  4..  1*/ FLOAT out;
};
struct PlayerCliTestDropRate
{
  /*  0..  1*/ UINT32 treasureID;
  /*  4..  1*/ Optional<UINT32> itemQuality;
  /*  c..  1*/ Optional<INT32> classID;
  /* 14..  1*/ Optional<UINT32> itemID;
  /* 1c..  1*/ Optional<INT32> subClassID;
  /* 24..  1*/ INT32 lootLevel;
};
struct GlobalGuildSetRankPermissions
{
  /*  0..  1*/ UINT32 oldFlags;
  /*  4..  1*/ INT32 rankID;
  /*  8..  1*/ INT32 rankOrder;
  /*  c..  1*/ STRING rankName;
  /* 50..  1*/ UINT32 flags;
  /* 54..  1*/ UINT32 withdrawGoldLimit;
  /* 58..  1*/ FixedArray<UINT32, 8> tabFlags;
  /* 78..  1*/ FixedArray<UINT32, 8> tabWithdrawItemLimit;
};
struct PlayerCliGMAllPhases
{
};
struct ClientCharacterRenameResult
{
  /*  0..  1*/ STRING name;
  /* 31..  1*/ UINT8 result;
  /* 38..  1*/ Optional<UINT64> guid;
};
struct PlayerCliSetAchievementsHidden
{
  /*  0..  1*/ BOOL hidden;
};
struct ClientVoiceParentalControls
{
  /*  0..  1*/ BOOL enableMicrophone;
  /*  1..  1*/ BOOL enableVoiceChat;
};
struct ClientMoveSplineSetWalkBackSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
};
struct UserClientGetServerFirstAchievements
{
};
struct ClientOnMonsterMove
{
  /*  0..  1*/ STRUCT splineData;
  /* d8..  1*/ UINT64 moverGUID;
  /* e0..  1*/ V3 position;
};
struct JamClientSpellLogEffectGenericVictimParams
{
  /*  0..  1*/ UINT64 victim;
};
struct JamCliPartyPlayerInfo
{
  /*  0..  1*/ STRING name;
  /* 38..  1*/ UINT64 guid;
  /* 40..  1*/ UINT8 connected;
  /* 41..  1*/ UINT8 subgroup;
  /* 42..  1*/ UINT8 flags;
  /* 43..  1*/ UINT8 rolesAssigned;
};
struct ClientShowTaxiNodesWindowInfo
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ INT32 currentNode;
};
struct PlayerCliReportPvPPlayerAFK
{
  /*  0..  1*/ UINT64 offender;
};
struct ClientReadItemResultFailed
{
  /*  0..  1*/ UINT64 item;
  /*  8..  1*/ READ_ITEM_FAILURE subcode;
  /*  c..  1*/ INT32 delay;
};
struct UserClientClearQuestLog
{
  /*  0..  1*/ STRING target;
  /*100..  1*/ UINT32 questID;
};
struct PlayerCliCancelCast
{
  /*  0..  1*/ INT32 spellID;
  /*  4..  1*/ UINT8 castID;
};
struct JamCliVendorItem
{
  /*  0..  1*/ UINT32 m_muid;
  /*  4..  1*/ INT32 m_type;
  /*  8..  1*/ STRUCT item;
  /* 68..  1*/ INT32 m_quantity;
  /* 6c..  1*/ INT32 m_price;
  /* 70..  1*/ INT32 m_durability;
  /* 74..  1*/ INT32 m_stackCount;
  /* 78..  1*/ INT32 m_extendedCostID;
  /* 7c..  1*/ INT32 m_playerConditionFailed;
  /* 80..  1*/ BOOL m_doNotFilterOnVendor;
};
struct ClientPetMode
{
  /*  0..  1*/ UINT64 petGUID;
  /*  8..  1*/ UINT32 petMode;
};
struct UserClientSendWorldBroadcastMessage
{
  /*  0..  1*/ STRING text;
};
struct ClientMoveSplineUnsetFlying
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct ClientLFGRoleCheckUpdate
{
  /*  0..  1*/ BOOL isBeginning;
  /*  8..  1*/ Array<UINT32> joinSlots;
  /* 20..  1*/ UINT64 bgQueueID;
  /* 28..  1*/ UINT8 partyIndex;
  /* 29..  1*/ UINT8 roleCheckStatus;
  /* 30..  1*/ Array<ClientLFGRoleCheckUpdateMember> members;
};
struct ClientInstanceInfo
{
  /*  0..  1*/ Array<ClientInstanceLock> locks;
};
struct JamCliSplineFilter
{
  /*  0..  1*/ Array<JamCliSplineFilterKey> filterKeys;
  /* 18..  1*/ UINT16 filterFlags;
};
struct UserClientCharForceDelete
{
  /*  0..  1*/ UINT64 guid;
};
struct JamCommentatorPlayer
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ JAMSERVERSPEC userServer;
};
struct PlayerCliObjectUpdateRescued
{
  /*  0..  1*/ UINT64 objectGUID;
};
struct UserClientGMCreateItemTarget
{
  /*  0..  1*/ STRUCT creationContext;
  /*  4..  1*/ INT32 itemID;
  /*  8..  1*/ STRING target;
  /*140..  1*/ UINT64 guid;
};
struct ClientSpellInterruptLog
{
  /*  0..  1*/ UINT64 victim;
  /*  8..  1*/ UINT64 caster;
  /* 10..  1*/ INT32 spellID;
  /* 14..  1*/ INT32 interruptedSpellID;
};
struct UserClientQueryCorpseLocationFromClient
{
};
struct JamClientSpellLogEffectFeedPetParams
{
  /*  0..  1*/ INT32 itemID;
};
struct ClientBattlePetCageDateError
{
  /*  0..  1*/ INT32 secondsUntilCanCage;
};
struct ClientMailQueryNextTimeResult
{
  /*  0..  1*/ Array<JamCliMailNextTimeEntry> next;
  /* 18..  1*/ FLOAT nextMailTime;
};
struct PlayerCliMasterLootItem
{
  /*  0..  1*/ Array<JamLootRequest> loot;
  /* 18..  1*/ UINT64 target;
};
struct UserClientLFGuildAddRecruit
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ INT32 availability;
  /*  c..  1*/ INT32 classRoles;
  /* 10..  1*/ INT32 playStyle;
  /* 14..  1*/ STRING comment;
};
struct PlayerCliJoinPetBattleQueue
{
};
struct ClientSceneObjectPetBattleFirstRound
{
  /*  0..  1*/ STRUCT msgData;
  /* 58..  1*/ UINT64 sceneObjectGUID;
};
struct ClientLFGUpdateStatus
{
  /*  0..  1*/ UINT32 requestedRoles;
  /*  4..  1*/ BOOL notifyUI;
  /*  8..  1*/ Array<UINT32> slots;
  /* 20..  1*/ BOOL lfgJoined;
  /* 21..  1*/ UINT8 reason;
  /* 28..  1*/ Array<UINT64> suspendedPlayers;
  /* 40..  1*/ UINT8 subType;
  /* 41..  1*/ BOOL queued;
  /* 42..  1*/ STRING comment;
  /*148..  1*/ STRUCT ticket;
  /*160..  1*/ BOOL joined;
  /*161..  1*/ BOOL isParty;
  /*162..  1*/ FixedArray<UINT8, 3> needs;
};
struct ClientRealmQueryResponse
{
  /*  0..  1*/ UINT32 virtualRealmAddress;
  /*  4..  1*/ UINT8 lookupState;
  /*  5..  1*/ STRUCT nameInfo;
};
struct JamCliMovementSplineMove
{
  /*  0..  1*/ UINT32 flags;
  /*  4..  1*/ UINT8 face;
  /*  8..  1*/ INT32 elapsed;
  /*  c..  1*/ UINT32 duration;
  /* 10..  1*/ FLOAT durationModifier;
  /* 14..  1*/ FLOAT nextDurationModifier;
  /* 18..  1*/ Optional<FLOAT> jumpGravity;
  /* 20..  1*/ Optional<UINT32> specialTime;
  /* 28..  1*/ Array<C3Vector> points;
  /* 40..  1*/ UINT8 mode;
  /* 48..  1*/ Optional<JamCliSplineFilter> splineFilter;
  /* 70..  1*/ FLOAT faceDirection;
  /* 78..  1*/ UINT64 faceGUID;
  /* 80..  1*/ V3 faceSpot;
};
struct PlayerCliSetWatchedFaction
{
  /*  0..  1*/ INT32 index;
};
struct ClientGarrisonStartMissionResult
{
  /*  0..  1*/ INT32 result;
  /*  8..  1*/ STRUCT mission;
  /* 48..  1*/ Array<UINT64> followerDBIDs;
};
struct PlayerCliQueryVehicleStatus
{
  /*  0..  1*/ UINT64 target;
};
struct ClientInspectHonorStats
{
  /*  0..  1*/ UINT64 playerGUID;
  /*  8..  1*/ UINT32 lifetimeHK;
  /*  c..  1*/ UINT16 yesterdayHK;
  /*  e..  1*/ UINT16 todayHK;
  /* 10..  1*/ UINT8 lifetimeMaxRank;
};
struct ClientFishNotHooked
{
};
struct ClientPlayerBound
{
  /*  0..  1*/ UINT64 binderID;
  /*  8..  1*/ UINT32 areaID;
};
struct ClientMoveSplineRoot
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct JamClientSpellLogEffectTradeSkillItemParams
{
  /*  0..  1*/ INT32 itemID;
};
struct ClientBlackMarketWon
{
  /*  0..  1*/ INT32 marketID;
  /*  4..  1*/ INT32 randomPropertiesID;
  /*  8..  1*/ STRUCT item;
};
struct ClientChangePlayerDifficultyResult
{
  /*  0..  1*/ SET_PLAYER_DIFFICULTY_RESULTS result;
  /*  4..  1*/ INT32 difficultyRecID;
  /*  8..  1*/ INT32 mapID;
  /*  c..  1*/ INT32 instanceDifficultyID;
  /* 10..  1*/ DIFFICULTY_COOLDOWN_REASON cooldownReason;
  /* 18..  1*/ TIME_T cooldown;
  /* 20..  1*/ UINT64 guid;
};
struct PlayerCliStartProjectCheat
{
  /*  0..  1*/ UINT32 projectID;
};
struct UserClientForceImmigrantHostSearch
{
};
struct PlayerCliOpenItem
{
  /*  0..  1*/ UINT8 slot;
  /*  1..  1*/ UINT8 packSlot;
};
struct JamCliGuildInfoRank
{
  /*  0..  1*/ INT32 m_rankID;
  /*  4..  1*/ INT32 m_rankOrder;
  /*  8..  1*/ STRING m_rankName;
};
struct ClientTimeAdjustment
{
  /*  0..  1*/ UINT32 sequenceIndex;
  /*  4..  1*/ FLOAT timeScale;
};
struct ClientCancelScene
{
  /*  0..  1*/ UINT32 sceneInstanceID;
};
struct ClientDebugDrawSetGraphBounds
{
  /*  0..  1*/ V2 bounds_max;
  /*  8..  1*/ UINT32 id;
  /*  c..  1*/ V2 bounds_min;
};
struct JamBattlePayProduct
{
  /*  0..  1*/ UINT32 productID;
  /*  8..  1*/ UINT64 normalPriceFixedPoint;
  /* 10..  1*/ UINT64 currentPriceFixedPoint;
  /* 18..  1*/ Array<JamBattlepayProductItem> items;
  /* 30..  1*/ UINT8 type;
  /* 31..  1*/ UINT8 choiceType;
  /* 34..  1*/ UINT32 flags;
  /* 38..  1*/ Optional<JamBattlepayDisplayInfo> displayInfo;
};
struct JamCliMovementSpline
{
  /*  0..  1*/ UINT32 ID;
  /*  4..  1*/ V3 destination;
  /* 10..  1*/ Optional<JamCliMovementSplineMove> move;
};
struct ClientPlayerSkinned
{
  /*  0..  1*/ BOOL freeRepop;
};
struct PlayerCliUseSkillCheat
{
  /*  0..  1*/ UINT32 skillID;
  /*  4..  1*/ UINT32 count;
};
struct PlayerCliPetBattleQuitNotify
{
};
struct PlayerCliWrapItem
{
  /*  0..  1*/ STRUCT inv;
};
struct ClientFishEscaped
{
};
struct JamLootItem
{
  /*  0..  1*/ LOOT_LIST_ITEM_TYPE type;
  /*  4..  1*/ LOOT_ITEM_UI_TYPE uiType;
  /*  8..  1*/ UINT32 quantity;
  /*  c..  1*/ UINT8 lootItemType;
  /*  d..  1*/ UINT8 lootListID;
  /*  e..  1*/ BOOL canTradeToTapList;
  /* 10..  1*/ STRUCT loot;
};
struct JamClientSpellLogEffectExtraAttacksParams
{
  /*  0..  1*/ UINT64 victim;
  /*  8..  1*/ UINT32 numAttacks;
};
struct JamCliQuestInfoObjectiveSimple
{
  /*  0..  1*/ INT32 id;
  /*  4..  1*/ INT32 objectID;
  /*  8..  1*/ INT32 amount;
  /*  c..  1*/ UINT8 type;
};
struct JamClientTargetThreat
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ UINT32 threat;
};
struct PlayerCliPetitionShowList
{
  /*  0..  1*/ UINT64 petitionUnit;
};
struct PlayerCliGdfSimCheatResult
{
  /*  0..  1*/ Array<GdfSimPlayerResult> players;
  /* 18..  1*/ FixedArray<INT32, 2> preMMR;
  /* 20..  1*/ FixedArray<INT32, 2> postMMR;
};
struct PlayerCliQueryGameObject
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 gameObjectID;
};
struct ClientSetVeteranTrial
{
  /*  0..  1*/ BOOL isVeteranTrial;
};
struct ClientMoveUnsetCanFly
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientLootAllPassed
{
  /*  0..  1*/ UINT64 lootObj;
  /*  8..  1*/ STRUCT item;
};
struct ClientBattlePetError
{
  /*  0..  1*/ BATTLEPETRESULT battlePetResult;
  /*  4..  1*/ INT32 creatureID;
};
struct UserRouterClientQueuedMessagesEnd
{
  /*  0..  1*/ UINT32 timestamp;
};
struct JamClientAuctionBidderNotification
{
  /*  0..  1*/ INT32 auctionItemID;
  /*  8..  1*/ UINT64 bidder;
  /* 10..  1*/ STRUCT item;
};
struct UserClientResetRealmSelector
{
};
struct PlayerCliSetActionBarToggles
{
  /*  0..  1*/ UINT8 mask;
};
struct PlayerCliPetBattleFinalNotify
{
};
struct CliCharacterObjectTest
{
  /*  0..  1*/ INT32 ping;
};
struct PlayerCliCompleteShipment
{
  /*  0..  1*/ UINT64 shipmentID;
  /*  8..  1*/ UINT64 npcGUID;
};
struct ClientGuildMoveStarting
{
  /*  0..  1*/ UINT64 guildGUID;
};
struct ClientTreasureDebug
{
  /*  0..  1*/ UINT32 depth;
  /*  4..  1*/ STRING text;
};
struct ClientItemPurchaseContents
{
  /*  0..  1*/ UINT32 money;
  /*  4..  1*/ FixedArray<ClientItemPurchaseRefundItem, 5> items;
  /* 2c..  1*/ FixedArray<ClientItemPurchaseRefundCurrency, 5> currencies;
};
struct JamClientSpellLogEffectPowerDrainParams
{
  /*  0..  1*/ UINT64 victim;
  /*  8..  1*/ UINT32 points;
  /*  c..  1*/ UINT32 powerType;
  /* 10..  1*/ FLOAT amplitude;
};
struct ClientDebugDrawTriangle
{
  /*  0..  1*/ UINT32 colorb;
  /*  4..  1*/ UINT32 colora;
  /*  8..  1*/ UINT32 settings;
  /*  c..  1*/ V3 a;
  /* 18..  1*/ V3 c;
  /* 24..  1*/ UINT32 colorc;
  /* 28..  1*/ V3 b;
  /* 34..  1*/ UINT32 id;
  /* 38..  1*/ FLOAT lifetime;
};
struct UserClientEnableGMTicketSystem
{
};
struct ClientSetMovementAnimKit
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ UINT16 animKitID;
};
struct PlayerCliPetBattleRequestWild
{
  /*  0..  1*/ STRUCT location;
  /* 30..  1*/ UINT64 targetGUID;
};
struct GlobalGuildDeclineInvitation
{
};
struct ClientLFGBlackListSlot
{
  /*  0..  1*/ INT32 slot;
  /*  4..  1*/ INT32 reason;
  /*  8..  1*/ INT32 subReason1;
  /*  c..  1*/ INT32 subReason2;
};
struct ClientClearQuestCompletedBits
{
  /*  0..  1*/ Array<INT32> qbits;
};
struct ClientGMTicketResponse
{
  /*  0..  1*/ UINT32 responseID;
  /*  4..  1*/ STRING description;
  /*7d8..  1*/ UINT32 ticketID;
  /*7dc..  1*/ STRING responseText;
};
struct ClientCalendarCommandResult
{
  /*  0..  1*/ STRING name;
  /*132..  1*/ UINT8 command;
  /*133..  1*/ UINT8 result;
};
struct PlayerCliActivateTaxi
{
  /*  0..  1*/ UINT64 vendor;
  /*  8..  1*/ UINT32 startNode;
  /*  c..  1*/ UINT32 destNode;
};
struct GlobalChallengeModeRequestLeaders
{
  /*  0..  1*/ TIME_T lastGuildUpdate;
  /*  8..  1*/ INT32 mapID;
  /* 10..  1*/ TIME_T lastRealmUpdate;
};
struct JamMonsterSplineFilter
{
  /*  0..  1*/ Array<JamMonsterSplineFilterKey> filterKeys;
  /* 18..  1*/ UINT16 filterFlags;
  /* 1c..  1*/ FLOAT baseSpeed;
  /* 20..  1*/ INT16 startOffset;
  /* 24..  1*/ FLOAT distToPrevFilterKey;
  /* 28..  1*/ INT16 addedToStart;
};
struct ClientRAFEmailEnabledResponse
{
  /*  0..  1*/ JAM_RAF_EMAIL_ENABLED_RESPONSE result;
};
struct PlayerCliGameSpeedSet
{
  /*  0..  1*/ FLOAT speed;
};
struct PlayerCliPetBattleScriptErrorNotify
{
};
struct PlayerMoveSetRelativePosition
{
  /*  0..  1*/ V3 position;
  /*  c..  1*/ FLOAT facing;
};
struct ClientChallengeModeRequestLeadersResult
{
  /*  0..  1*/ TIME_T lastRealmUpdate;
  /*  8..  1*/ Array<ClientChallengeModeAttempt> guildLeaders;
  /* 20..  1*/ INT32 mapID;
  /* 28..  1*/ TIME_T lastGuildUpdate;
  /* 30..  1*/ Array<ClientChallengeModeAttempt> realmLeaders;
};
struct JamClientSpellLogEffectDurabilityDamageParams
{
  /*  0..  1*/ UINT64 victim;
  /*  8..  1*/ INT32 itemID;
  /*  c..  1*/ INT32 amount;
};
struct GlobalGuildLeave
{
};
struct UserClientPartyInvite
{
  /*  0..  1*/ UINT64 targetGuid;
  /*  8..  1*/ UINT32 proposedRoles;
  /*  c..  1*/ STRING targetName;
  /*13e..  1*/ UINT8 partyIndex;
  /*13f..  1*/ STRING targetRealm;
  /*240..  1*/ UINT32 targetCfgRealmID;
};
struct ClientResetRangedCombatTimer
{
  /*  0..  1*/ INT32 delay;
};
struct PlayerCliSetCharacterCustomization
{
  /*  0..  1*/ INT32 variationValue;
  /*  4..  1*/ INT32 variationIndex;
};
struct ClientEmote
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 emoteID;
};
struct UserClientClearExplore
{
  /*  0..  1*/ STRING target;
  /*100..  1*/ UINT32 areaID;
};
struct PlayerCliGarrisonSetActiveBuildingSpecialization
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ INT32 plotInstanceID;
  /*  c..  1*/ INT32 specializationID;
};
struct PlayerMoveFeatherFallAck
{
  /*  0..  1*/ STRUCT data;
};
struct ClientGuildInvite
{
  /*  0..  1*/ UINT32 emblemColor;
  /*  4..  1*/ INT32 level;
  /*  8..  1*/ UINT32 emblemStyle;
  /* 10..  1*/ UINT64 guildGUID;
  /* 18..  1*/ STRING guildName;
  /* 7c..  1*/ UINT32 oldGuildVirtualRealmAddress;
  /* 80..  1*/ STRING oldGuildName;
  /* e4..  1*/ UINT32 background;
  /* e8..  1*/ UINT64 oldGuildGUID;
  /* f0..  1*/ UINT32 borderStyle;
  /* f4..  1*/ UINT32 guildVirtualRealmAddress;
  /* f8..  1*/ STRING inviterName;
  /*12c..  1*/ UINT32 borderColor;
  /*130..  1*/ UINT32 inviterVirtualRealmAddress;
};
struct UserClientDFGetJoinStatus
{
};
struct ClientDBReply
{
  /*  0..  1*/ UINT32 tableHash;
  /*  4..  1*/ UINT32 timestamp;
  /*  8..  1*/ INT32 recordID;
  /* 10..  1*/ NOT_IMPLEMENTED data;
};
struct GlobalGuildAutoDeclineInvitation
{
};
struct UserClientGMShowComplaints
{
  /*  0..  1*/ STRING name;
};
struct ClientServerFirstAchievements
{
  /*  0..  1*/ Array<JamServerFirstAchievement> achievements;
};
struct ClientGMTicketSystemStatus
{
  /*  0..  1*/ INT32 status;
};
struct UserClientSetPartyAssignment
{
  /*  0..  1*/ UINT8 partyIndex;
  /*  8..  1*/ UINT64 target;
  /* 10..  1*/ UINT8 assignment;
  /* 11..  1*/ BOOL set;
};
struct ClientSummonRequest
{
  /*  0..  1*/ UINT64 summonerGUID;
  /*  8..  1*/ UINT32 summonerVirtualRealmAddress;
  /*  c..  1*/ INT32 areaID;
};
struct ClientPetBattleQueueProposeMatch
{
};
struct PlayerCliCancelModSpeedNoControlAuras
{
  /*  0..  1*/ UINT64 targetGUID;
};
struct ClientGMTicketUpdate
{
  /*  0..  1*/ UINT8 result;
};
struct UserClientDFBootPlayerVote
{
  /*  0..  1*/ BOOL vote;
};
struct ClientVoidItemSwapResponse
{
  /*  0..  1*/ UINT64 voidItemB;
  /*  8..  1*/ UINT64 voidItemA;
  /* 10..  1*/ UINT32 voidItemSlotB;
  /* 14..  1*/ UINT32 voidItemSlotA;
};
struct JamClientSpellLogEffect
{
  /*  0..  1*/ INT32 effect;
  /*  8..  1*/ Array<JamClientSpellLogEffectPowerDrainParams> powerDrainTargets;
  /* 20..  1*/ Array<JamClientSpellLogEffectExtraAttacksParams> extraAttacksTargets;
  /* 38..  1*/ Array<JamClientSpellLogEffectDurabilityDamageParams> durabilityDamageTargets;
  /* 50..  1*/ Array<JamClientSpellLogEffectGenericVictimParams> genericVictimTargets;
  /* 68..  1*/ Array<JamClientSpellLogEffectTradeSkillItemParams> tradeSkillTargets;
  /* 80..  1*/ Array<JamClientSpellLogEffectFeedPetParams> feedPetTargets;
};
struct CalendarEventInitialInviteInfo
{
  /*  0..  1*/ UINT64 inviteGUID;
  /*  8..  1*/ UINT8 level;
};
struct PlayerCliQuestGiverAutoLaunch
{
  /*  0..  1*/ UINT64 questGiverGUID;
  /*  8..  1*/ INT32 questID;
};
struct GlobalGuildUpdateMotdText
{
  /*  0..  1*/ STRING motdText;
};
struct ClientBattlePayGetDistributionListResponse
{
  /*  0..  1*/ UINT32 result;
  /*  8..  1*/ Array<JamBattlePayDistributionObject> distributionObjects;
};
struct PlayerCliCreateShadowPlayers
{
  /*  0..  1*/ UINT16 numCopies;
  /*  2..  1*/ INT8 type;
};
struct ClientUserlistUpdate
{
  /*  0..  1*/ UINT8 channelFlags;
  /*  1..  1*/ UINT8 userFlags;
  /*  2..  1*/ STRING channelName;
  /* 88..  1*/ UINT64 updatedUserGUID;
  /* 90..  1*/ INT32 channelID;
};
struct ClientMoveUpdateTeleport
{
  /*  0..  1*/ STRUCT status;
  /* a8..  1*/ Array<JamCliMovementForce> movementForces;
  /* c0..  1*/ Optional<FLOAT> swimBackSpeed;
  /* c8..  1*/ Optional<FLOAT> flightSpeed;
  /* d0..  1*/ Optional<FLOAT> swimSpeed;
  /* d8..  1*/ Optional<FLOAT> walkSpeed;
  /* e0..  1*/ Optional<FLOAT> turnRate;
  /* e8..  1*/ Optional<FLOAT> runSpeed;
  /* f0..  1*/ Optional<FLOAT> flightBackSpeed;
  /* f8..  1*/ Optional<FLOAT> runBackSpeed;
  /*100..  1*/ Optional<FLOAT> pitchRate;
};
struct ClientGuildMemberDailyReset
{
};
struct ClientPetBattleReplacementsMade
{
  /*  0..  1*/ STRUCT msgData;
};
struct ClientCommentatorMapInfo
{
  /*  0..  1*/ UINT64 playerInstanceID;
  /*  8..  1*/ Array<JamCommentatorMap> maps;
};
struct ClientQueryBattlePetNameResponse
{
  /*  0..  1*/ UINT64 battlePetID;
  /*  8..  1*/ INT32 creatureID;
  /*  c..  1*/ BOOL allow;
  /*  d..  1*/ STRING name;
  /* 8e..  1*/ BOOL hasDeclined;
  /* 8f..  1*/ FixedArrayStrings<5 /*times*/, 97 /*chars*/> declinedNames;
  /*278..  1*/ TIME_T timestamp;
};
struct PlayerCliSetGlyphSlot
{
  /*  0..  1*/ UINT16 glyphSlot;
  /*  2..  1*/ UINT8 slot;
};
struct JamMonsterSplineFilterKey
{
  /*  0..  1*/ INT16 idx;
  /*  2..  1*/ UINT16 speed;
};
struct JamMovementMonsterSpline
{
  /*  0..  1*/ UINT32 ID;
  /*  4..  1*/ V3 destination;
  /* 10..  1*/ BOOL crzTeleport;
  /* 18..  1*/ STRUCT move;
};
struct ClientInstanceEncounterStart
{
  /*  0..  1*/ UINT32 nextCombatResChargeTime;
  /*  4..  1*/ UINT32 combatResChargeRecovery;
  /*  8..  1*/ INT32 maxInCombatResCount;
  /*  c..  1*/ INT32 inCombatResCount;
};
struct PlayerCliSetEncounterVar
{
  /*  0..  1*/ INT32 dungeonEncounterID;
  /*  4..  1*/ STRING varName;
  /* 44..  1*/ BOOL attempt;
  /* 48..  1*/ FLOAT varValue;
};
struct ClientGuildMembersWithRecipe
{
  /*  0..  1*/ INT32 spellID;
  /*  8..  1*/ Array<UINT64> members;
  /* 20..  1*/ INT32 skillLineID;
};
struct BattlegroundPlayerPosition
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ V2 pos;
  /* 10..  1*/ INT8 iconID;
  /* 11..  1*/ INT8 arenaSlot;
};
struct PlayerMoveStartAscend
{
  /*  0..  1*/ STRUCT status;
};
struct ClientAreaShareInfoResponse
{
  /*  0..  1*/ UINT32 areaShareInfoID;
  /*  4..  1*/ UINT32 currentRealm;
  /*  8..  1*/ UINT32 areaID;
  /* 10..  1*/ Array<UINT32> otherRealms;
};
struct ClientSpellExecuteLog
{
  /*  0..  1*/ INT32 spellID;
  /*  8..  1*/ UINT64 caster;
  /* 10..  1*/ Array<JamClientSpellLogEffect> effects;
  /* 28..  1*/ Optional<JamSpellCastLogData> logData;
};
struct PlayerTimeAdjustmentResponse
{
  /*  0..  1*/ UINT32 sequenceIndex;
  /*  4..  1*/ UINT32 clientTime;
};
struct ClientStartMirrorTimer
{
  /*  0..  1*/ INT32 scale;
  /*  4..  1*/ INT32 maxValue;
  /*  8..  1*/ INT32 timer;
  /*  c..  1*/ INT32 spellID;
  /* 10..  1*/ INT32 value;
  /* 14..  1*/ BOOL paused;
};
struct PlayerCliShowPeriodicAuras
{
  /*  0..  1*/ BOOL enable;
};
struct JamCliEuropaTicketConfig
{
  /*  0..  1*/ STRUCT throttleState;
};
struct PlayerCliUndress
{
};
struct UserClientDBQuery
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 tableHash;
  /*  c..  1*/ INT32 recordID;
};
struct ClientGameSpeedSet
{
  /*  0..  1*/ FLOAT newSpeed;
};
struct CommentatorPlayerInfo
{
  /*  0..  1*/ UINT64 playerGUID;
  /*  8..  1*/ UINT32 damageDone;
  /*  c..  1*/ UINT32 damageTaken;
  /* 10..  1*/ UINT32 healingDone;
  /* 14..  1*/ UINT32 healingTaken;
  /* 18..  1*/ UINT16 kills;
  /* 1a..  1*/ UINT16 deaths;
  /* 1c..  1*/ INT8 faction;
};
struct PlayerCliSendGeneralTrigger
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ INT32 eventID;
};
struct GlobalGuildOfficerRemoveMember
{
  /*  0..  1*/ UINT64 removee;
};
struct ClientLFGPlayerReward
{
  /*  0..  1*/ INT32 rewardMoney;
  /*  4..  1*/ UINT32 queuedSlot;
  /*  8..  1*/ Array<JamLFGPlayerRewards> rewards;
  /* 20..  1*/ INT32 addedXP;
  /* 24..  1*/ UINT32 actualSlot;
};
struct JamCliMovementForce
{
  /*  0..  1*/ UINT32 ID;
  /*  4..  1*/ V3 direction;
  /* 10..  1*/ UINT32 transportID;
  /* 14..  1*/ FLOAT magnitude;
  /* 18..  1*/ UINT8 type;
};
struct PlayerCliSetDifficultyID
{
  /*  0..  1*/ UINT32 difficultyID;
};
struct JamClientSpamRecord
{
  /*  0..  1*/ STRING spamMessage;
};
struct UserClientVoiceDelIgnore
{
  /*  0..  1*/ STRUCT player;
};
struct JamCliPartyLootSettings
{
  /*  0..  1*/ UINT64 lootMaster;
  /*  8..  1*/ UINT8 lootMethod;
  /*  9..  1*/ UINT8 lootThreshold;
};
struct PlayerCliConquestResetWeeklyCapCheat
{
};
struct ClientBattlePetDeleted
{
  /*  0..  1*/ UINT64 battlePetGUID;
};
struct PlayerCliSplitItem
{
  /*  0..  1*/ UINT8 toSlot;
  /*  1..  1*/ UINT8 toPackSlot;
  /*  2..  1*/ UINT8 fromPackSlot;
  /*  4..  1*/ INT32 quantity;
  /*  8..  1*/ STRUCT inv;
  /* 20..  1*/ UINT8 fromSlot;
};
struct PlayerCliAuctionListPendingSales
{
};
struct ClientTotemCreated
{
  /*  0..  1*/ UINT64 totem;
  /*  8..  1*/ INT32 spellID;
  /*  c..  1*/ INT32 duration;
  /* 10..  1*/ UINT8 slot;
};
struct PlayerCliGameObjUse
{
  /*  0..  1*/ UINT64 gameObjectGUID;
};
struct ClientCreateShipmentResponse
{
  /*  0..  1*/ UINT64 shipmentID;
  /*  8..  1*/ INT32 result;
  /*  c..  1*/ INT32 shipmentRecID;
};
struct PlayerCliUseItem
{
  /*  0..  1*/ UINT8 packSlot;
  /*  8..  1*/ STRUCT cast;
  /*1c0..  1*/ UINT8 slot;
  /*1c8..  1*/ UINT64 castItem;
};
struct ClientSetupResearchHistory
{
  /*  0..  1*/ Array<JamResearchHistory> history;
};
struct ClientMoveSplineStopSwim
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct ScenarioBlobData
{
  /*  0..  1*/ INT32 blobID;
  /*  4..  1*/ INT32 mapID;
  /*  8..  1*/ INT32 worldMapAreaID;
  /*  c..  1*/ INT32 floor;
  /* 10..  1*/ INT32 priority;
  /* 14..  1*/ INT32 flags;
  /* 18..  1*/ INT32 worldEffectID;
  /* 1c..  1*/ INT32 playerConditionID;
  /* 20..  1*/ Array<ScenarioPOIPointData> points;
};
struct CliChatChannelSilenceVoice
{
  /*  0..  1*/ STRING channelName;
  /* 80..  1*/ STRING name;
};
struct ClientBattlenetChallengeStart
{
  /*  0..  1*/ UINT32 token;
  /*  4..  1*/ STRING challengeURL;
};
struct ClientPetGUIDs
{
  /*  0..  1*/ Array<UINT64> petGUIDs;
};
struct ClientDontAutoPushSpellsToActionBar
{
};
struct JamBattlePayProductGroup
{
  /*  0..  1*/ UINT32 groupID;
  /*  4..  1*/ STRING name;
  /*104..  1*/ INT32 iconFileDataID;
  /*108..  1*/ UINT8 displayType;
  /*10c..  1*/ INT32 ordering;
};
struct PlayerCliDeleteCriteriaCheat
{
  /*  0..  1*/ INT32 criteriaID;
};
struct JamCliMovementUpdate
{
  /*  0..  1*/ STRUCT status;
  /* a8..  1*/ FLOAT walkSpeed;
  /* ac..  1*/ FLOAT runSpeed;
  /* b0..  1*/ FLOAT runBackSpeed;
  /* b4..  1*/ FLOAT swimSpeed;
  /* b8..  1*/ FLOAT swimBackSpeed;
  /* bc..  1*/ FLOAT flightSpeed;
  /* c0..  1*/ FLOAT flightBackSpeed;
  /* c4..  1*/ FLOAT turnRate;
  /* c8..  1*/ FLOAT pitchRate;
  /* d0..  1*/ Optional<JamCliMovementSpline> spline;
  /*180..  1*/ Array<JamCliMovementForce> movementForces;
};
struct ClientGmResurrectFailure
{
};
struct ClientRemoveItemPassive
{
  /*  0..  1*/ INT32 spellID;
};
struct JamEquipmentSetItem
{
  /*  0..  1*/ UINT64 item;
  /*  8..  1*/ UINT8 containerSlot;
  /*  9..  1*/ UINT8 slot;
};
struct ClientPetBattleDebugQueueDumpResponse
{
  /*  0..  1*/ Array<PBQueueDumpMember> members;
  /* 18..  1*/ TIME_T averageQueueTime;
};
struct PlayerCliActivePVPCheat
{
};
struct PlayerCliItemEffectValidateCheat
{
};
struct ClientForceAnim
{
  /*  0..  1*/ STRING arguments;
  /*200..  1*/ UINT64 target;
};
struct PlayerCliRespecTalentCheat
{
  /*  0..  1*/ INT32 id;
  /*  4..  1*/ UINT8 respecType;
};
struct PlayerCliRequestCemeteryList
{
};
struct ClientUpdateActionButtons
{
  /*  0..  1*/ FixedArray<UINT64, 132> actionButtons;
  /*420..  1*/ UINT8 reason;
};
struct CliChatUnregisterAllAddonPrefixes
{
};
struct ClientQuestPOIQueryResponse
{
  /*  0..  1*/ Array<JamQuestPOIData> questPOIData;
  /* 18..  1*/ INT32 numPOIs;
};
struct ClientAddRunePower
{
  /*  0..  1*/ UINT32 addedRunesMask;
};
struct ClientBattlenetChallengeAbort
{
  /*  0..  1*/ UINT32 token;
  /*  4..  1*/ BOOL timeout;
};
struct PlayerCliTriggerMovieCheat
{
  /*  0..  1*/ UINT32 movieID;
};
struct ClientGarrisonAddFollowerResult
{
  /*  0..  1*/ STRUCT follower;
  /* 58..  1*/ INT32 result;
};
struct JamCliPosition
{
  /*  0..  1*/ V3 position;
  /*  c..  1*/ FLOAT facing;
};
struct PlayerCliSetTitle
{
  /*  0..  1*/ INT32 title;
};
struct GlobalGuildDelete
{
};
struct ClientPhaseShiftChange
{
  /*  0..  1*/ UINT64 client;
  /*  8..  1*/ NOT_IMPLEMENTED preloadMapIDs;
  /* 38..  1*/ STRUCT phaseShift;
  /* 60..  1*/ NOT_IMPLEMENTED uiWorldMapAreaIDSwaps;
  /* 90..  1*/ NOT_IMPLEMENTED visibleMapIDs;
};
struct ClientMoveApplyMovementForce
{
  /*  0..  1*/ STRUCT force;
  /* 20..  1*/ UINT64 moverGUID;
  /* 28..  1*/ UINT32 sequenceIndex;
};
struct ClientQuestForceRemoved
{
  /*  0..  1*/ INT32 questID;
};
struct ClientBlackMarketItem
{
  /*  0..  1*/ INT32 marketID;
  /*  4..  1*/ INT32 sellerNPC;
  /*  8..  1*/ STRUCT item;
  /* 68..  1*/ INT32 quantity;
  /* 70..  1*/ UINT64 minBid;
  /* 78..  1*/ UINT64 minIncrement;
  /* 80..  1*/ UINT64 currentBid;
  /* 88..  1*/ INT32 secondsRemaining;
  /* 8c..  1*/ BOOL highBid;
  /* 90..  1*/ INT32 numBids;
};
struct PlayerMoveTimeSkipped
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 timeSkipped;
};
struct PlayerCliDisablePVPCheat
{
};
struct ClientSpellFailure
{
  /*  0..  1*/ UINT64 casterUnit;
  /*  8..  1*/ INT32 spellID;
  /*  c..  1*/ UINT8 reason;
  /*  d..  1*/ UINT8 castID;
};
struct PlayerCliGMSetXPGainEnabled
{
  /*  0..  1*/ BOOL enable;
};
struct PlayerClearTradeItem
{
  /*  0..  1*/ UINT8 tradeSlot;
};
struct ClientMoveCharacterCheatFailure
{
};
struct PlayerCliGarrisonCompleteMission
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ INT32 missionRecID;
};
struct ClientGuildPermissionsQueryResults
{
  /*  0..  1*/ INT32 numTabs;
  /*  4..  1*/ INT32 withdrawGoldLimit;
  /*  8..  1*/ INT32 flags;
  /* 10..  1*/ Array<JamGuildRankTabPermissions> tab;
  /* 28..  1*/ UINT32 rankID;
};
struct ClientPetitionAlreadySigned
{
  /*  0..  1*/ UINT64 signerGUID;
};
struct UserClientCalendarEventRSVP
{
  /*  0..  1*/ UINT64 inviteID;
  /*  8..  1*/ UINT64 eventID;
  /* 10..  1*/ UINT8 status;
};
struct ClientDebugDrawAddGraphAt
{
  /*  0..  1*/ STRING label;
  /* 80..  1*/ UINT32 defaultSampleColor;
  /* 84..  1*/ V2 bounds_min;
  /* 8c..  1*/ V2 bounds_max;
  /* 94..  1*/ UINT32 width;
  /* 98..  1*/ INT32 x;
  /* 9c..  1*/ UINT32 height;
  /* a0..  1*/ INT32 y;
  /* a4..  1*/ UINT32 sampleCapacity;
  /* a8..  1*/ UINT32 flags;
  /* ac..  1*/ UINT32 id;
};
struct ClientGuildNewsDeleted
{
  /*  0..  1*/ INT32 id;
};
struct UserClientGmCharacterSave
{
  /*  0..  1*/ STRING characterName;
  /* 34..  1*/ UINT32 flags;
};
struct ClientGMGearRatingResponse
{
  /*  0..  1*/ FLOAT gearRating;
};
struct PlayerCliEffectiveLevelCheat
{
  /*  0..  1*/ UINT8 level;
};
struct JamCliVehicleCreate
{
  /*  0..  1*/ INT32 recID;
  /*  4..  1*/ FLOAT initialRawFacing;
};
struct ClientGuildInviteExpired
{
};
struct ClientLFGSearchResultPlayer
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 changeMask;
  /*  c..  1*/ UINT8 level;
  /*  d..  1*/ UINT8 chrClass;
  /*  e..  1*/ UINT8 race;
  /* 10..  1*/ UINT32 armor;
  /* 14..  1*/ UINT32 spellDamage;
  /* 18..  1*/ UINT32 plusHealing;
  /* 1c..  1*/ UINT32 critMelee;
  /* 20..  1*/ UINT32 critRanged;
  /* 24..  1*/ UINT32 critSpell;
  /* 28..  1*/ FLOAT mp5;
  /* 2c..  1*/ FLOAT mp5InCombat;
  /* 30..  1*/ UINT32 attackPower;
  /* 34..  1*/ UINT32 agility;
  /* 38..  1*/ UINT32 maxHealth;
  /* 3c..  1*/ UINT32 maxMana;
  /* 40..  1*/ UINT32 bossKills;
  /* 44..  1*/ FLOAT gearRating;
  /* 48..  1*/ FLOAT avgItemLevel;
  /* 4c..  1*/ UINT32 defenseRating;
  /* 50..  1*/ UINT32 dodgeRating;
  /* 54..  1*/ UINT32 blockRating;
  /* 58..  1*/ UINT32 parryRating;
  /* 5c..  1*/ UINT32 hasteRating;
  /* 60..  1*/ FLOAT expertise;
  /* 64..  1*/ UINT32 specID;
  /* 68..  1*/ UINT32 virtualRealmAddress;
  /* 6c..  1*/ UINT32 nativeRealmAddress;
  /* 70..  1*/ STRING comment;
  /*170..  1*/ BOOL isLeader;
  /*178..  1*/ UINT64 partyGuid;
  /*180..  1*/ UINT8 rolesDesired;
  /*184..  1*/ UINT32 area;
  /*188..  1*/ UINT8 status;
  /*190..  1*/ UINT64 instanceID;
  /*198..  1*/ UINT32 instanceCompletedMask;
};
struct PlayerMoveTeleportAck
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 ackIndex;
  /*  c..  1*/ UINT32 moveTime;
};
struct ClientQuestConfirmAccept
{
  /*  0..  1*/ STRING questTitle;
  /*400..  1*/ UINT64 initiatedBy;
  /*408..  1*/ INT32 questID;
};
struct ClientNotifyMissileTrajectoryCollision
{
  /*  0..  1*/ UINT64 caster;
  /*  8..  1*/ V3 collisionPos;
  /* 14..  1*/ UINT8 castID;
};
struct PlayerCliGuildBankBuyTab
{
  /*  0..  1*/ UINT64 banker;
  /*  8..  1*/ UINT8 bankTab;
};
struct PlayerCliQueryTime
{
};
struct ClientGroupDecline
{
  /*  0..  1*/ STRING name;
};
struct PlayerCliUnitAnimTierCheat
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ INT32 newTier;
};
struct JamRaceClassAvailability
{
  /*  0..  1*/ UINT8 raceOrClassID;
  /*  1..  1*/ UINT8 requiredExpansion;
};
struct ClientMoveKnockBack
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ V2 direction;
  /* 10..  1*/ FLOAT horzSpeed;
  /* 14..  1*/ UINT32 sequenceIndex;
  /* 18..  1*/ FLOAT vertSpeed;
};
struct ClientLootRoll
{
  /*  0..  1*/ UINT64 player;
  /*  8..  1*/ INT32 roll;
  /* 10..  1*/ STRUCT item;
  /* 80..  1*/ UINT8 rollType;
  /* 88..  1*/ UINT64 lootObj;
  /* 90..  1*/ BOOL autopassed;
};
struct PlayerCliResetFactionCheat
{
};
struct UserRouterClientAuthContinuedSession
{
  /*  0..  1*/ UINT64 key;
  /*  8..  1*/ UINT64 dosResponse;
  /* 10..  1*/ FixedArray<UINT8, 20> digest;
};
struct PlayerMoveSetFacing
{
  /*  0..  1*/ STRUCT status;
};
struct ClientDebugAIState
{
  /*  0..  1*/ Array<DebugAIState> debugStates;
  /* 18..  1*/ UINT64 guid;
};
struct UserClientCalendarGet
{
};
struct PlayerCliBlackMarketBidOnItem
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ STRUCT item;
  /* 68..  1*/ INT32 marketID;
  /* 70..  1*/ UINT64 bidAmount;
};
struct JamCliAnimKitCreate
{
  /*  0..  1*/ UINT16 aiID;
  /*  2..  1*/ UINT16 movementID;
  /*  4..  1*/ UINT16 meleeID;
};
struct PlayerCliCreateShipment
{
  /*  0..  1*/ UINT64 npcGUID;
};
struct ClientGuildChallengeUpdate
{
  /*  0..  1*/ FixedArray<INT32, 6> maxCount;
  /* 18..  1*/ FixedArray<INT32, 6> xp;
  /* 30..  1*/ FixedArray<INT32, 6> gold;
  /* 48..  1*/ FixedArray<INT32, 6> currentCount;
  /* 60..  1*/ FixedArray<INT32, 6> maxLevelGold;
};
struct ClientLoginVerifyWorld
{
  /*  0..  1*/ FLOAT facing;
  /*  4..  1*/ INT32 mapID;
  /*  8..  1*/ UINT32 reason;
  /*  c..  1*/ V3 position;
};
struct ClientTitleEarned
{
  /*  0..  1*/ INT32 index;
};
struct ClientChallengeModeDumpLeadersResult
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ BOOL success;
  /*  8..  1*/ Array<ClientChallengeModeAttempt> leaders;
};
struct PlayerCliLogoutRequest
{
};
struct ClientSetFactionStanding
{
  /*  0..  1*/ Array<JamFactionStandingData> faction;
  /* 18..  1*/ FLOAT bonusFromAchievementSystem;
  /* 1c..  1*/ FLOAT referAFriendBonus;
  /* 20..  1*/ BOOL showVisual;
};
struct PlayerCliNeutralPlayerSelectFaction
{
  /*  0..  1*/ INT32 faction;
};
struct ClientUpdateWeeklySpellUsage
{
  /*  0..  1*/ STRUCT usage;
};
struct ClientClearBossEmotes
{
};
struct ClientUpdateTalentData
{
  /*  0..  1*/ STRUCT info;
};
struct UserClientPlayerLogin
{
  /*  0..  1*/ STRUCT clientSettings;
  /*  8..  1*/ UINT64 playerGUID;
};
struct ClientCalendarRaidLockoutAdded
{
  /*  0..  1*/ UINT64 instanceID;
  /*  8..  1*/ UINT32 difficultyID;
  /*  c..  1*/ INT32 timeRemaining;
  /* 10..  1*/ UINT32 serverTime;
  /* 14..  1*/ INT32 mapID;
};
struct PlayerCliAutoEquipItem
{
  /*  0..  1*/ UINT8 slot;
  /*  8..  1*/ STRUCT inv;
  /* 20..  1*/ UINT8 packSlot;
};
struct PlayerCliBuyBackItem
{
  /*  0..  1*/ UINT64 vendorGUID;
  /*  8..  1*/ UINT32 slot;
};
struct GlobalGuildBankLockByGM
{
  /*  0..  1*/ STRING guildName;
};
struct ClientGuildCriteriaUpdate
{
  /*  0..  1*/ Array<JamGuildCriteriaProgress> progress;
};
struct ClientBattlePayConfirmPurchase
{
  /*  0..  1*/ UINT64 currentPriceFixedPoint;
  /*  8..  1*/ UINT64 purchaseID;
  /* 10..  1*/ UINT32 serverToken;
};
struct UserClientRestoreBattlePetsHealth
{
  /*  0..  1*/ INT8 healthPct;
};
struct PlayerCliDebugAreaTriggerUnitEvents
{
  /*  0..  1*/ UINT64 unit;
};
struct ClientScenarioBoot
{
};
struct UserClientAddBattlenetFriend
{
  /*  0..  1*/ UINT32 roleID;
  /*  4..  1*/ BOOL verifyOnly;
  /*  8..  1*/ UINT64 targetGUID;
  /* 10..  1*/ UINT64 clientToken;
  /* 18..  1*/ UINT32 targetVirtualRealmAddress;
  /* 1c..  1*/ STRING invitationMsg;
};
struct ClientMoveSetRunSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
  /*  c..  1*/ UINT32 sequenceIndex;
};
struct ClientChallengeModeAllMapStats
{
  /*  0..  1*/ Array<ClientChallengeModeMap> maps;
};
struct PlayerCliForceActionShow
{
};
struct UserClientGMTicketUpdateText
{
  /*  0..  1*/ STRING description;
};
struct ClientProposeLevelGrant
{
  /*  0..  1*/ UINT64 sender;
};
struct PlayerCliGMPhaseAdd
{
  /*  0..  1*/ Array<UINT16> phaseID;
};
struct PlayerCliLogoutCancel
{
};
struct ClientQueryItemTextResponse
{
  /*  0..  1*/ UINT64 id;
  /*  8..  1*/ BOOL valid;
  /*  9..  1*/ STRUCT item;
};
struct PlayerCliGarrisonPlaceBuildingCheat
{
  /*  0..  1*/ BOOL activate;
  /*  4..  1*/ INT32 buildingID;
  /*  8..  1*/ INT32 plotInstanceID;
};
struct JamCliGuildRankData
{
  /*  0..  1*/ UINT32 rankID;
  /*  4..  1*/ UINT32 rankOrder;
  /*  8..  1*/ STRING rankName;
  /* 4c..  1*/ UINT32 flags;
  /* 50..  1*/ UINT32 withdrawGoldLimit;
  /* 54..  1*/ FixedArray<UINT32, 8> tabFlags;
  /* 74..  1*/ FixedArray<UINT32, 8> tabWithdrawItemLimit;
};
struct ClientBFMgrStateChanged
{
  /*  0..  1*/ UINT64 queueID;
  /*  8..  1*/ INT32 state;
};
struct ClientForceObjectRelink
{
  /*  0..  1*/ UINT64 objectGUID;
};
struct ClientSpellFailedOther
{
  /*  0..  1*/ UINT64 casterUnit;
  /*  8..  1*/ INT32 spellID;
  /*  c..  1*/ UINT8 reason;
  /*  d..  1*/ UINT8 castID;
};
struct ClientGuildAchievementEarned
{
  /*  0..  1*/ INT32 achievementID;
  /*  8..  1*/ UINT64 guildGUID;
  /* 10..  1*/ NOT_IMPLEMENTED timeEarned;
};
struct PlayerCliQueryCountdownTimer
{
  /*  0..  1*/ UINT32 timerType;
};
struct JamCliAreaTriggerCylinder
{
  /*  0..  1*/ FLOAT radius;
  /*  4..  1*/ FLOAT radiusTarget;
  /*  8..  1*/ FLOAT height;
  /*  c..  1*/ FLOAT heightTarget;
};
struct JamVoidItem
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT64 creator;
  /* 10..  1*/ UINT32 slot;
  /* 18..  1*/ STRUCT item;
};
struct JamCliPartyDifficultySettings
{
  /*  0..  1*/ UINT32 dungeonDifficultyID;
  /*  4..  1*/ UINT32 raidDifficultyID;
};
struct ClientCalendarSendCalendarHolidayInfo
{
  /*  0..  1*/ INT32 holidayID;
  /*  4..  1*/ INT32 region;
  /*  8..  1*/ INT32 looping;
  /*  c..  1*/ INT32 priority;
  /* 10..  1*/ INT32 filterType;
  /* 14..  1*/ STRING textureFilename;
  /* 54..  1*/ FixedArray<INT32, 26> date;
  /* bc..  1*/ FixedArray<INT32, 10> duration;
  /* e4..  1*/ FixedArray<INT32, 10> calendarFlags;
};
struct PlayerCliGossipSelectOption
{
  /*  0..  1*/ UINT64 gossipUnit;
  /*  8..  1*/ INT32 gossipIndex;
  /*  c..  1*/ INT32 gossipID;
  /* 10..  1*/ STRING promotionCode;
};
struct GlobalGuildGetAchievementMembers
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ UINT64 playerGUID;
  /* 10..  1*/ INT32 achievementID;
};
struct PlayerCliLogoutInstant
{
};
struct ClientLiveRegionAccountRestoreResult
{
  /*  0..  1*/ UINT32 token;
  /*  4..  1*/ BOOL success;
};
struct PlayerCliRestockVendorCheat
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ BOOL stockAll;
};
struct ClientChatPlayerNotfound
{
  /*  0..  1*/ STRING name;
};
struct ClientMoveUpdateTurnRate
{
  /*  0..  1*/ FLOAT speed;
  /*  8..  1*/ STRUCT status;
};
struct ClientBonusRollEmpty
{
};
struct PlayerCliDebugGameEventsStop
{
};
struct ClientPetBattleFinalizeLocation
{
  /*  0..  1*/ STRUCT location;
};
struct ClientQueryPlayerNameResponse
{
  /*  0..  1*/ UINT64 player;
  /*  8..  1*/ UINT8 result;
  /* 10..  1*/ STRUCT data;
};
struct PlayerCliSetRuneCooldown
{
  /*  0..  1*/ FLOAT blood;
  /*  4..  1*/ FLOAT unholy;
  /*  8..  1*/ FLOAT chromatic;
  /*  c..  1*/ FLOAT frost;
};
struct ClientBFMgrEntryInvite
{
  /*  0..  1*/ INT32 areaID;
  /*  8..  1*/ TIME_T expireTime;
  /* 10..  1*/ UINT64 queueID;
};
struct ClientInstanceEncounterChangePriority
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ UINT8 targetFramePriority;
};
struct UserClientDFProposalResponse
{
  /*  0..  1*/ UINT32 proposalID;
  /*  8..  1*/ STRUCT ticket;
  /* 20..  1*/ BOOL accepted;
  /* 28..  1*/ UINT64 instanceID;
};
struct PlayerTabardVendorActivate
{
  /*  0..  1*/ UINT64 vendor;
};
struct JamCliAreaTriggerBox
{
  /*  0..  1*/ V3 extents;
  /*  c..  1*/ V3 extentsTarget;
};
struct ClientGuildRosterUpdate
{
  /*  0..  1*/ Array<ClientGuildRosterMemberData> memberData;
};
struct ClientGuildEventDisbanded
{
};
struct ClientAddBattlenetFriendResponse
{
  /*  0..  1*/ Optional<UINT16> battlenetError;
  /*  8..  1*/ UINT64 clientToken;
  /* 10..  1*/ JamAddBattlenetFriendError result;
};
struct PlayerCliUseEquipmentSet
{
  /*  0..  1*/ STRUCT inv;
  /* 18..  1*/ FixedArray<JamEquipmentSetItem, 19> items;
};
struct PlayerSetActiveMover
{
  /*  0..  1*/ UINT64 activeMover;
};
struct ClientGameTimeUpdate
{
  /*  0..  1*/ INT32 gameTimeHolidayOffset;
  /*  4..  1*/ INT32 serverTimeHolidayOffset;
  /*  8..  1*/ UINT32 gameTime;
  /*  c..  1*/ UINT32 serverTime;
};
struct GlobalLFGuildGetGuildPost
{
};
struct PlayerCliSaveCUFProfiles
{
  /*  0..  1*/ Array<JamCliCUFProfile> profiles;
};
struct UserClientSupportTicketSubmitSuggestion
{
  /*  0..  1*/ STRUCT header;
  /* 14..  1*/ STRING note;
};
struct ClientPartyInvite
{
  /*  0..  1*/ BOOL allowMultipleRoles;
  /*  4..  1*/ UINT32 inviterCfgRealmID;
  /*  8..  1*/ BOOL mightCRZYou;
  /*  9..  1*/ BOOL canAccept;
  /* 10..  1*/ UINT64 inviterGuid;
  /* 18..  1*/ BOOL mustBeBNetFriend;
  /* 1c..  1*/ UINT32 lfgCompletedMask;
  /* 20..  1*/ UINT32 proposedRoles;
  /* 28..  1*/ Array<UINT32> lfgSlots;
  /* 40..  1*/ BOOL isXRealm;
  /* 41..  1*/ STRING inviterRealmName;
  /*142..  1*/ STRING inviterName;
  /*178..  1*/ UINT64 inviterBNetAccountID;
};
struct UserClientMountSetFavorite
{
  /*  0..  1*/ INT32 mountSpellID;
  /*  4..  1*/ BOOL isFavorite;
};
struct UserClientCalendarEventSignUp
{
  /*  0..  1*/ BOOL tentative;
  /*  8..  1*/ UINT64 eventID;
};
struct ClientTaxiNodeStatus
{
  /*  0..  1*/ TAXISTATUS status;
  /*  8..  1*/ UINT64 unit;
};
struct GlobalGuildSetMaxDailyXP
{
  /*  0..  1*/ INT32 maxGuildDailyXP;
};
struct UserClientGMInvis
{
  /*  0..  1*/ INT32 action;
  /*  4..  1*/ STRING playerName;
};
struct ClientExplorationExperience
{
  /*  0..  1*/ INT32 experience;
  /*  4..  1*/ INT32 areaID;
};
struct ClientQuestGiverQuestDetails
{
  /*  0..  1*/ STRING portraitTurnInName;
  /*100..  1*/ BOOL displayPopup;
  /*101..  1*/ STRING portraitGiverName;
  /*208..  1*/ Array<JamCliQuestInfoObjectiveSimple> objectives;
  /*220..  1*/ STRING portraitGiverText;
  /*620..  1*/ BOOL startCheat;
  /*624..  1*/ STRUCT questRewards;
  /*700..  1*/ UINT64 questGiverGUID;
  /*708..  1*/ INT32 questID;
  /*70c..  1*/ STRING questTitle;
  /*90c..  1*/ BOOL autoLaunched;
  /*910..  1*/ Array<QuestDescEmote> descEmotes;
  /*928..  1*/ INT32 questPackageID;
  /*92c..  1*/ INT32 portraitGiver;
  /*930..  1*/ STRING descriptionText;
  /*14e8..  1*/ UINT64 informUnit;
  /*14f0..  1*/ INT32 suggestedPartyMembers;
  /*14f4..  1*/ INT32 portraitTurnIn;
  /*14f8..  1*/ Array<INT32> learnSpells;
  /*1510..  1*/ STRING portraitTurnInText;
  /*1910..  1*/ STRING logDescription;
  /*24c8..  1*/ FixedArray<INT32, 2> questFlags;
};
struct PlayerCliScenarioStart
{
  /*  0..  1*/ INT32 scenarioID;
};
struct ClientWho
{
  /*  0..  1*/ STRUCT response;
};
struct JamCliAreaTriggerPolygon
{
  /*  0..  1*/ Array<C2Vector> vertices;
  /* 18..  1*/ Array<C2Vector> verticesTarget;
  /* 30..  1*/ FLOAT height;
  /* 34..  1*/ FLOAT heightTarget;
};
struct ClientBattlePetTrapLevel
{
  /*  0..  1*/ INT16 trapLevel;
};
struct HotfixNotify
{
  /*  0..  1*/ UINT32 tableHash;
  /*  4..  1*/ INT32 recordID;
  /*  8..  1*/ UINT32 timestamp;
};
struct ClientPetNameInvalid
{
  /*  0..  1*/ STRUCT renameData;
  /*26c..  1*/ UINT8 result;
};
struct UserClientCheatResetUndeleteCooldown
{
};
struct PlayerCliRepairItem
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ BOOL useGuildBank;
  /* 10..  1*/ UINT64 itemGUID;
};
struct PlayerMoveStopSwimCheat
{
  /*  0..  1*/ STRUCT status;
};
struct ClientGarrisonOpenMissionNPC
{
  /*  0..  1*/ UINT64 npcGUID;
};
struct PlayerCliGetMirrorImageData
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ INT32 displayID;
};
struct JamClientRestrictedFactionChangeRule
{
  /*  0..  1*/ INT32 mask;
  /*  4..  1*/ UINT8 raceID;
};
struct PlayerCliRespawnLastPet
{
};
struct JamCliInspectItemData
{
  /*  0..  1*/ UINT64 creatorGUID;
  /*  8..  1*/ STRUCT item;
  /* 68..  1*/ UINT8 index;
  /* 69..  1*/ BOOL usable;
  /* 70..  1*/ Array<JamCliInspectEnchantData> enchants;
};
struct GlobalLFGuildGetApplications
{
};
struct ClientResyncRunes
{
  /*  0..  1*/ Array<JamResyncRune> runes;
};
struct PlayerCliMapControllerSetGameTimeCheat
{
  /*  0..  1*/ INT32 seconds;
};
struct ClientAccountInfoResponse
{
  /*  0..  1*/ INT32 bnetAccountID;
  /*  8..  1*/ Array<JamCliBnetLicense> gameAccountLicenses;
  /* 20..  1*/ Array<JamCliBnetLicense> bnetAccountLicenses;
  /* 38..  1*/ INT32 gameAccountFlags;
  /* 3c..  1*/ INT32 localAccountFlags;
  /* 40..  1*/ STRING bnetAccountName;
  /*544..  1*/ INT32 bnetAccountFlags;
  /*548..  1*/ INT32 gameAccountID;
  /*54c..  1*/ STRING gameAccountName;
};
struct PlayerCliItemBonusDebug
{
  /*  0..  1*/ BOOL enable;
};
struct JamCliAreaTriggerSpline
{
  /*  0..  1*/ UINT32 timeToTarget;
  /*  4..  1*/ UINT32 elapsedTimeForMovement;
  /*  8..  1*/ Array<C3Vector> points;
};
struct ClientGuildEventRankChanged
{
  /*  0..  1*/ INT32 rankID;
};
struct ClientCancelSpellVisualKit
{
  /*  0..  1*/ UINT64 source;
  /*  8..  1*/ INT32 spellVisualKitID;
};
struct ClientDebugDrawAura
{
  /*  0..  1*/ UINT64 caster;
  /*  8..  1*/ INT32 spellID;
  /*  c..  1*/ V3 position;
};
struct PlayerMoveFallLand
{
  /*  0..  1*/ STRUCT status;
};
struct ClientPetitionDeclined
{
  /*  0..  1*/ UINT64 decliner;
};
struct PlayerMoveForceWalkSpeedChangeAck
{
  /*  0..  1*/ STRUCT data;
};
struct PlayerCliResetMonthlyQuest
{
  /*  0..  1*/ INT32 questID;
};
struct JSONBnetChallengeResponse
{
  /*  0..  1*/ STRING error_code;
  /* 21..  1*/ STRING challenge_id;
  /* 68..  1*/ STRUCT challenge;
  /* d0..  1*/ BOOL done;
};
struct UserClientPetBattleDebugQueueDump
{
};
struct ClientGuildEventRanksUpdated
{
};
struct ClientLearnedSpells
{
  /*  0..  1*/ Array<INT32> spellID;
  /* 18..  1*/ BOOL suppressMessaging;
};
struct PlayerCliResetChallengeMode
{
};
struct ClientGossipMessage
{
  /*  0..  1*/ Array<ClientGossipOptions> gossipOptions;
  /* 18..  1*/ INT32 friendshipFactionID;
  /* 20..  1*/ UINT64 gossipGUID;
  /* 28..  1*/ Array<ClientGossipText> gossipQuestText;
  /* 40..  1*/ INT32 textID;
  /* 44..  1*/ INT32 gossipID;
};
struct UserClientCommentatorGetMapInfo
{
  /*  0..  1*/ STRING playerName;
};
struct ClientServerInfoQueryResponse
{
  /*  0..  1*/ STRING response;
};
struct PlayerCliAuctionListOwnerItems
{
  /*  0..  1*/ UINT64 auctioneer;
  /*  8..  1*/ UINT32 offset;
};
struct ClientGarrisonRequestBlueprintAndSpecializationDataResult
{
  /*  0..  1*/ Array<INT32> specializationsKnown;
  /* 18..  1*/ Array<INT32> blueprintsKnown;
};
struct ClientSetDFFastLaunchResult
{
  /*  0..  1*/ BOOL set;
};
struct PlayerCliPerformActionSetCheat
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ INT32 actionSetID;
};
struct ClientInstanceEncounterEnd
{
};
struct ClientMoveDisableCollision
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientAreaTriggerRePath
{
  /*  0..  1*/ STRUCT areaTriggerSpline;
  /* 20..  1*/ UINT64 triggerGUID;
};
struct ClientMailCommandResult
{
  /*  0..  1*/ INT32 command;
  /*  4..  1*/ INT32 mailID;
  /*  8..  1*/ INT32 qtyInInventory;
  /*  c..  1*/ INT32 bagResult;
  /* 10..  1*/ INT32 attachID;
  /* 14..  1*/ INT32 errorCode;
};
struct UserClientUpdateAccountData
{
  /*  0..  1*/ TIME_T time;
  /*  8..  1*/ UINT32 size;
  /*  c..  1*/ UINT8 dataType;
  /* 10..  1*/ NOT_IMPLEMENTED compressedData;
};
struct ClientAuctionListPendingSalesResult
{
  /*  0..  1*/ Array<JamCliMailListEntry> mails;
  /* 18..  1*/ INT32 totalNumRecords;
};
struct SetPvpRankCheat
{
  /*  0..  1*/ INT32 rank;
};
struct PlayerCliUnacceptTrade
{
};
struct PlayerMoveForceSwimBackSpeedChangeAck
{
  /*  0..  1*/ STRUCT data;
};
struct UserClientDelIgnore
{
  /*  0..  1*/ STRUCT player;
};
struct PlayerCliGarrisonAddUniqueFollowerCheat
{
  /*  0..  1*/ INT32 garrFollowerID;
};
struct JamGuildBankLogEntry
{
  /*  0..  1*/ UINT64 playerGUID;
  /*  8..  1*/ UINT32 timeOffset;
  /*  c..  1*/ INT8 entryType;
  /* 10..  1*/ Optional<UINT64> money;
  /* 20..  1*/ Optional<INT32> itemID;
  /* 28..  1*/ Optional<INT32> count;
  /* 30..  1*/ Optional<INT8> otherTab;
};
struct ClientWargameRequestSuccessfullySentToOpponent
{
  /*  0..  1*/ UINT64 opponent;
};
struct ClientDebugDrawText
{
  /*  0..  1*/ UINT8 alignment;
  /*  4..  1*/ UINT32 id;
  /*  8..  1*/ UINT32 color;
  /*  c..  1*/ UINT32 settings;
  /* 10..  1*/ FLOAT lifetime;
  /* 14..  1*/ FLOAT height;
  /* 18..  1*/ V2 location;
  /* 20..  1*/ STRING text;
};
struct ClientGuildEventTabAdded
{
};
struct JamBannedAddonInfo
{
  /*  0..  1*/ INT32 id;
  /*  8..  1*/ TIME_T lastModified;
  /* 10..  1*/ INT32 flags;
  /* 14..  1*/ FixedArray<UINT32, 4> nameMD5;
  /* 24..  1*/ FixedArray<UINT32, 4> versionMD5;
};
struct PlayerCliPetGodMode
{
  /*  0..  1*/ BOOL enable;
};
struct JamClientOpponentSpecData
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ INT32 specializationID;
};
struct JamMovementSpline
{
  /*  0..  1*/ UINT32 flags;
  /*  4..  1*/ UINT8 face;
  /*  5..  1*/ UINT8 animTier;
  /*  8..  1*/ UINT32 tierTransStartTime;
  /*  c..  1*/ INT32 elapsed;
  /* 10..  1*/ UINT32 moveTime;
  /* 14..  1*/ FLOAT jumpGravity;
  /* 18..  1*/ UINT32 specialTime;
  /* 20..  1*/ Array<C3Vector> points;
  /* 38..  1*/ UINT8 mode;
  /* 39..  1*/ UINT8 vehicleExitVoluntary;
  /* 40..  1*/ UINT64 transportGUID;
  /* 48..  1*/ INT8 vehicleSeat;
  /* 50..  1*/ Array<UINT32> packedDeltas;
  /* 68..  1*/ Optional<JamMonsterSplineFilter> splineFilter;
  /* a0..  1*/ FLOAT faceDirection;
  /* a8..  1*/ UINT64 faceGUID;
  /* b0..  1*/ V3 faceSpot;
};
struct ClientInstanceEncounterInCombatResurrection
{
};
struct ClientLFGListUpdateBlacklist
{
  /*  0..  1*/ STRUCT blacklist;
};
struct ClientNukeAllObjectsDueToSeamlessPort
{
};
struct ClientQuestUpdateFailedTimer
{
  /*  0..  1*/ INT32 questID;
};
struct ClientSetDungeonDifficulty
{
  /*  0..  1*/ UINT32 difficultyID;
};
struct PlayerCliGetGarrisonInfo
{
};
struct PlayerCliBuyBankSlot
{
  /*  0..  1*/ UINT64 banker;
};
struct UserClientCalendarGetNumPending
{
};
struct JamClientTaskProgress
{
  /*  0..  1*/ UINT32 taskID;
  /*  4..  1*/ UINT32 failureTime;
  /*  8..  1*/ UINT32 flags;
  /* 10..  1*/ Array<UINT16> counts;
};
struct PlayerMoveForceTurnRateChangeAck
{
  /*  0..  1*/ STRUCT data;
};
struct PlayerCliTargetScriptCast
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ INT32 spellID;
};
struct PlayerCliCancelAutoRepeatSpell
{
};
struct ClientMoveSetFeatherFall
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientAELootTargets
{
  /*  0..  1*/ UINT32 count;
};
struct UserClientReferAFriendCheat
{
  /*  0..  1*/ STRING name;
};
struct ClientCriteriaDeleted
{
  /*  0..  1*/ INT32 criteriaID;
};
struct ClientGuildEventTabDeleted
{
};
struct PlayerCliSetSelection
{
  /*  0..  1*/ UINT64 selection;
};
struct ClientArenaPrepOpponentSpecializations
{
  /*  0..  1*/ Array<JamClientOpponentSpecData> opponentData;
};
struct PlayerCliGarrisonRemoveFollowerFromBuilding
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ UINT64 followerDBID;
};
struct ClientLFGuildRecruits
{
  /*  0..  1*/ Array<LFGuildRecruitData> recruits;
  /* 18..  1*/ TIME_T updateTime;
};
struct JamCliSceneLocalScriptData
{
  /*  0..  1*/ STRING data;
};
struct ClientPetStableInfo
{
  /*  0..  1*/ UINT32 petSlot;
  /*  4..  1*/ UINT32 petNumber;
  /*  8..  1*/ UINT32 creatureID;
  /*  c..  1*/ UINT32 displayID;
  /* 10..  1*/ UINT32 experienceLevel;
  /* 14..  1*/ STRING petName;
  /* 95..  1*/ UINT8 petFlags;
};
struct UserClientInitiateRolePoll
{
  /*  0..  1*/ UINT8 partyIndex;
};
struct ClientDuelWinner
{
  /*  0..  1*/ STRING beatenName;
  /* 31..  1*/ STRING winnerName;
  /* 62..  1*/ BOOL fled;
  /* 64..  1*/ UINT32 beatenVirtualRealmAddress;
  /* 68..  1*/ UINT32 winnerVirtualRealmAddress;
};
struct ClientGroupNewLeader
{
  /*  0..  1*/ UINT8 partyIndex;
  /*  1..  1*/ STRING name;
};
struct ClientGmSilence
{
  /*  0..  1*/ BOOL silenced;
  /*  1..  1*/ BOOL success;
};
struct PlayerCliDestroySceneObjectCheat
{
  /*  0..  1*/ UINT64 sceneObjGUID;
};
struct ClientInstanceEncounterPhaseShiftChanged
{
};
struct UserClientChangeSubGroup
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ UINT8 subgroup;
  /*  9..  1*/ UINT8 partyIndex;
};
struct UserClientBattlePayDistributionSelectChoice
{
  /*  0..  1*/ UINT64 distributionID;
  /*  8..  1*/ UINT64 targetCharacter;
  /* 10..  1*/ UINT32 productChoice;
  /* 14..  1*/ UINT32 clientToken;
};
struct ClientServerPerf
{
  /*  0..  1*/ Array<ClientServerPerfStat> stats;
};
struct UserClientWho
{
  /*  0..  1*/ STRUCT request;
  /*2d8..  1*/ Array<INT32> areas;
};
struct ClientCalendarEventRemovedAlert
{
  /*  0..  1*/ UINT64 eventID;
  /*  8..  1*/ BOOL clearPending;
  /*  c..  1*/ UINT32 date;
};
struct PlayerCliQuestPushResult
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ INT32 questID;
  /*  c..  1*/ UINT8 result;
};
struct GlobalGuildSetReplaceGMSeconds
{
  /*  0..  1*/ INT32 seconds;
};
struct ClientBattlePayStartPurchaseResponse
{
  /*  0..  1*/ UINT64 purchaseID;
  /*  8..  1*/ UINT32 purchaseResult;
  /*  c..  1*/ UINT32 clientToken;
};
struct PlayerCliDeleteAccountAchievement
{
  /*  0..  1*/ INT32 achievementID;
};
struct ClientQueryQuestInfoResponse
{
  /*  0..  1*/ BOOL allow;
  /*  8..  1*/ STRUCT info;
  /*2f08..  1*/ UINT32 questID;
};
struct JamCliPlayerSceneInstances
{
  /*  0..  1*/ Array<UINT32> sceneInstanceIDs;
};
struct ClientChallengeModeComplete
{
  /*  0..  1*/ UINT32 mapID;
  /*  4..  1*/ UINT32 time;
  /*  8..  1*/ UINT32 medalEarned;
  /* 10..  1*/ STRUCT reward;
};
struct ClientHighestThreatUpdate
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ Array<ThreatInfo> threatList;
  /* 20..  1*/ UINT64 highestThreatGUID;
};
struct PlayerCliAutostoreBankItem
{
  /*  0..  1*/ STRUCT inv;
  /* 18..  1*/ UINT8 slot;
  /* 19..  1*/ UINT8 packSlot;
};
struct PlayerCliDeleteEquipmentSet
{
  /*  0..  1*/ UINT64 ID;
};
struct PlayerMoveSetCanTurnWhileFallingAck
{
  /*  0..  1*/ STRUCT data;
};
struct PlayerCliGarrisonCreateCheat
{
  /*  0..  1*/ INT32 garrSiteID;
};
struct ClientGuildAchievementDeleted
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ INT32 achievementID;
  /*  c..  1*/ NOT_IMPLEMENTED timeDeleted;
};
struct ClientBFMgrQueueRequestResponse
{
  /*  0..  1*/ INT8 result;
  /*  1..  1*/ INT8 battleState;
  /*  8..  1*/ UINT64 failedPlayerGUID;
  /* 10..  1*/ UINT64 queueID;
  /* 18..  1*/ BOOL loggingIn;
  /* 1c..  1*/ INT32 areaID;
};
struct JamClientGMTicketInfo
{
  /*  0..  1*/ INT32 ticketID;
  /*  4..  1*/ STRING ticketDescription;
  /*7d5..  1*/ UINT8 category;
  /*7d8..  1*/ TIME_T ticketOpenTime;
  /*7e0..  1*/ TIME_T oldestTicketTime;
  /*7e8..  1*/ TIME_T updateTime;
  /*7f0..  1*/ UINT8 assignedToGM;
  /*7f1..  1*/ UINT8 openedByGM;
  /*7f2..  1*/ STRING waitTimeOverrideMessage;
  /*bf4..  1*/ INT32 waitTimeOverrideMinutes;
};
struct GlobalGuildBankRemainingWithdrawMoneyQuery
{
};
struct ClientPageText
{
  /*  0..  1*/ UINT64 gameObjectGUID;
};
struct PlayerCliUnlearnSpecialization
{
  /*  0..  1*/ UINT8 specializationIndex;
};
struct ClientCastFailed
{
  /*  0..  1*/ INT32 failedArg2;
  /*  4..  1*/ INT32 reason;
  /*  8..  1*/ INT32 failedArg1;
  /*  c..  1*/ INT32 spellID;
  /* 10..  1*/ UINT8 castID;
};
struct VignetteInstanceIDList
{
  /*  0..  1*/ Array<UINT64> IDs;
};
struct ClientGameObjectPlaySpellVisual
{
  /*  0..  1*/ UINT64 objectGUID;
  /*  8..  1*/ UINT64 activatorGUID;
  /* 10..  1*/ INT32 spellVisualID;
};
struct ClientCalendarSendCalendarInviteInfo
{
  /*  0..  1*/ UINT64 eventID;
  /*  8..  1*/ UINT64 inviteID;
  /* 10..  1*/ UINT64 inviterGUID;
  /* 18..  1*/ UINT8 status;
  /* 19..  1*/ UINT8 moderator;
  /* 1a..  1*/ UINT8 inviteType;
};
struct PlayerCliPetCancelAura
{
  /*  0..  1*/ UINT64 petGUID;
  /*  8..  1*/ INT32 spellID;
};
struct GlobalGuildGetRanks
{
  /*  0..  1*/ UINT64 guildGUID;
};
struct ClientHotfixNotifyBlob
{
  /*  0..  1*/ Array<HotfixNotify> hotfixes;
};
struct ClientPlayMusic
{
  /*  0..  1*/ INT32 soundKitID;
};
struct PlayerCliUnlearnMount
{
  /*  0..  1*/ INT32 mountID;
};
struct ClientChatRestricted
{
  /*  0..  1*/ UINT8 reason;
};
struct PlayerMoveSetIgnoreMovementForcesAck
{
  /*  0..  1*/ STRUCT data;
};
struct ClientMoveUpdateSwimSpeed
{
  /*  0..  1*/ STRUCT status;
  /* a8..  1*/ FLOAT speed;
};
struct ClientReadyCheckResponse
{
  /*  0..  1*/ BOOL isReady;
  /*  8..  1*/ UINT64 player;
  /* 10..  1*/ UINT64 partyGUID;
};
struct GlobalGuildPermissionsQuery
{
};
struct PlayerCliAcceptLevelGrant
{
  /*  0..  1*/ UINT64 granter;
};
struct UserClientFlagQuest
{
  /*  0..  1*/ STRING target;
  /*100..  1*/ UINT32 questID;
};
struct PlayerCliCheatSetUnitLootSeed
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ UINT32 lootSeed;
};
struct ClientSpiritHealerConfirm
{
  /*  0..  1*/ UINT64 unit;
};
struct UserClientRequestAreaShareMappings
{
};
struct UserClientGMUpdateTicketStatus
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ INT32 ticketID;
  /*  c..  1*/ INT32 statusInt;
};
struct UserClientRequestPartyMemberStats
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ UINT8 partyIndex;
};
struct PlayerMoveGravityEnableAck
{
  /*  0..  1*/ STRUCT data;
};
struct UserClientGMAccountOnline
{
  /*  0..  1*/ UINT32 accountID;
};
struct PlayerMoveStartSwim
{
  /*  0..  1*/ STRUCT status;
};
struct PlayerCliNoDamageVariance
{
  /*  0..  1*/ BOOL enable;
  /*  8..  1*/ UINT64 target;
};
struct UserClientPaidServiceCheat
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ INT32 serviceID;
};
struct PlayerMoveSetCanFlyAck
{
  /*  0..  1*/ STRUCT data;
};
struct UserClientResetInstances
{
};
struct UserClientGmResurrect
{
  /*  0..  1*/ STRING name;
};
struct GlobalGuildEventLogQuery
{
};
struct GlobalGuildSetLevelCheat
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ INT32 level;
};
struct PlayerCliIgnoreMovementForcesCheat
{
};
struct UserClientKeepAlive
{
};
struct PlayerCliChallengeModeCheat
{
  /*  0..  1*/ INT32 itemLevel;
};
struct ClientTalentsInvoluntarilyReset
{
  /*  0..  1*/ BOOL isPetTalents;
};
struct ClientOnCancelExpectedRideVehicleAura
{
};
struct UserClientDBQueryBulk
{
  /*  0..  1*/ UINT32 tableHash;
  /*  8..  1*/ Array<DBQuery> queries;
};
struct PlayerCliFarSight
{
  /*  0..  1*/ BOOL enable;
};
struct ClientInitWorldStates
{
  /*  0..  1*/ Array<JamClientWorldStateInfo> worldstates;
  /* 18..  1*/ INT32 areaID;
  /* 1c..  1*/ INT32 subareaID;
  /* 20..  1*/ INT32 mapID;
};
struct PlayerCliDestroyItem
{
  /*  0..  1*/ UINT32 count;
  /*  4..  1*/ UINT8 slotNum;
  /*  5..  1*/ UINT8 containerId;
};
struct PlayerMoveSetFly
{
  /*  0..  1*/ STRUCT status;
};
struct ClientTradeUpdated
{
  /*  0..  1*/ UINT64 gold;
  /*  8..  1*/ UINT32 currentStateIndex;
  /*  c..  1*/ UINT8 whichPlayer;
  /* 10..  1*/ UINT32 clientStateIndex;
  /* 18..  1*/ Array<JamTradeItem> items;
  /* 30..  1*/ INT32 currencyType;
  /* 34..  1*/ UINT32 ID;
  /* 38..  1*/ INT32 proposedEnchantment;
  /* 3c..  1*/ INT32 currencyQuantity;
};
struct PlayerCliBootMe
{
};
struct ClientMoveSplineEnableCollision
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct JamCliSupportTicketPetInfo
{
  /*  0..  1*/ UINT64 petID;
  /*  8..  1*/ STRING petName;
};
struct PlayerCliSetCurrencyFlags
{
  /*  0..  1*/ UINT32 flags;
  /*  4..  1*/ UINT32 currencyID;
};
struct ClientMoveToggleLogging
{
};
struct PlayerCliSetBankBagSlotAutosortDisabled
{
  /*  0..  1*/ BOOL disable;
  /*  4..  1*/ UINT32 bagIndex;
};
struct ClientGarrisonBuildingRemoved
{
  /*  0..  1*/ INT32 garrPlotInstanceID;
  /*  4..  1*/ INT32 garrBuildingID;
};
struct ClientGuildEventPlayerLeft
{
  /*  0..  1*/ STRING leaverName;
  /* 34..  1*/ UINT32 leaverVirtualRealmAddress;
  /* 38..  1*/ BOOL removed;
  /* 40..  1*/ UINT64 leaverGUID;
  /* 48..  1*/ UINT32 removerVirtualRealmAddress;
  /* 4c..  1*/ STRING removerName;
  /* 80..  1*/ UINT64 removerGUID;
};
struct JamCliSceneObjCreate
{
  /*  0..  1*/ Optional<JamCliSceneLocalScriptData> localScriptData;
  /* 88..  1*/ Optional<JamPetBattleFullUpdate> petBattleFullUpdate;
};
struct UserClientStartWarGame
{
  /*  0..  1*/ UINT64 opposingPartyMember;
  /*  8..  1*/ UINT64 queueID;
  /* 10..  1*/ BOOL tournamentRules;
  /* 14..  1*/ UINT32 opposingPartyMemberVirtualRealmAddress;
  /* 18..  1*/ UINT32 opposingPartyMemberCfgRealmID;
};
struct UserClientGMLagReport
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ INT32 lagKind;
  /*  8..  1*/ V3 loc;
};
struct GlobalGuildReplaceGuildMaster
{
};
struct UserClientLFGuildSetGuildPost
{
  /*  0..  1*/ STRING comment;
  /*400..  1*/ INT32 availability;
  /*404..  1*/ BOOL active;
  /*408..  1*/ INT32 playStyle;
  /*40c..  1*/ INT32 classRoles;
  /*410..  1*/ INT32 levelRange;
};
struct ClientDuelOutOfBounds
{
};
struct PlayerCliStartQuest
{
  /*  0..  1*/ BOOL abandonExisting;
  /*  4..  1*/ INT32 questID;
  /*  8..  1*/ BOOL autoAccept;
};
struct PlayerCliScenarioAdvanceStep
{
};
struct JamCliQuestInfoChoiceItem
{
  /*  0..  1*/ INT32 itemID;
  /*  4..  1*/ INT32 quantity;
  /*  8..  1*/ INT32 displayID;
};
struct UserClientPetRename
{
  /*  0..  1*/ STRUCT renameData;
};
struct PlayerCliAuctionSellItem
{
  /*  0..  1*/ UINT64 buyoutPrice;
  /*  8..  1*/ Array<JamClientAuctionItemForSale> items;
  /* 20..  1*/ UINT64 auctioneer;
  /* 28..  1*/ UINT64 minBid;
  /* 30..  1*/ UINT32 runTime;
};
struct UserClientShowTradeSkill
{
  /*  0..  1*/ UINT64 playerGUID;
  /*  8..  1*/ INT32 skillLineID;
  /*  c..  1*/ INT32 spellID;
};
struct ClientMoveToggleFallLogging
{
};
struct PlayerCliQueryBattlePetName
{
  /*  0..  1*/ UINT64 battlePetID;
  /*  8..  1*/ UINT64 unitGUID;
};
struct UserClientServerInfoRequest
{
};
struct ClientGuildReputationReactionChanged
{
  /*  0..  1*/ UINT64 memberGUID;
};
struct UserClientBeastmaster
{
  /*  0..  1*/ INT32 op;
  /*  4..  1*/ STRING targetName;
};
struct JamCliObjCreate
{
  /*  0..  1*/ BOOL noBirthAnim;
  /*  1..  1*/ BOOL enablePortals;
  /*  2..  1*/ BOOL playHoverAnim;
  /*  3..  1*/ BOOL isSuppressingGreetings;
  /*  8..  1*/ Optional<JamCliMovementUpdate> move;
  /*1a8..  1*/ Optional<JamCliMovementTransport> passenger;
  /*1e0..  1*/ Optional<JamCliPosition> stationary;
  /*1f8..  1*/ Optional<UINT64> combatVictim;
  /*208..  1*/ Optional<UINT32> serverTime;
  /*210..  1*/ Optional<JamCliVehicleCreate> vehicle;
  /*21c..  1*/ Optional<JamCliAnimKitCreate> animKit;
  /*228..  1*/ Optional<INT64> rotation;
  /*238..  1*/ Optional<JamCliAreaTrigger> areaTrigger;
  /*330..  1*/ Optional<JamCliGameObject> gameObject;
  /*338..  1*/ BOOL thisIsYou;
  /*339..  1*/ BOOL replaceActive;
  /*340..  1*/ Optional<JamCliSceneObjCreate> sceneObjCreate;
  /*500..  1*/ Optional<JamCliPlayerSceneInstances> scenePendingInstances;
  /*520..  1*/ Array<UINT32> pauseTimes;
};
struct UserClientReadyCheckResponse
{
  /*  0..  1*/ UINT8 partyIndex;
  /*  8..  1*/ UINT64 partyGUID;
  /* 10..  1*/ BOOL isReady;
};
struct PlayerMoveKnockBackAck
{
  /*  0..  1*/ STRUCT data;
};
struct PlayerCliMailTakeMoney
{
  /*  0..  1*/ UINT64 mailbox;
  /*  8..  1*/ UINT64 money;
  /* 10..  1*/ INT32 mailID;
};
struct ClientDebugDrawCylinder
{
  /*  0..  1*/ UINT32 id;
  /*  4..  1*/ FLOAT height;
  /*  8..  1*/ V3 base;
  /* 14..  1*/ FLOAT lifetime;
  /* 18..  1*/ UINT32 settings;
  /* 1c..  1*/ V3 direction;
  /* 28..  1*/ FLOAT radius;
  /* 2c..  1*/ UINT32 color;
};
struct ClientDuelInBounds
{
};
struct PlayerCliShowBrain
{
  /*  0..  1*/ INT32 level;
  /*  4..  1*/ BOOL all;
  /*  8..  1*/ UINT64 target;
};
struct PlayerMoveStopAscend
{
  /*  0..  1*/ STRUCT status;
};
struct GlobalGuildMemberDailyResetCheat
{
};
struct JamClientGMSurveyQuestion
{
  /*  0..  1*/ INT32 questionID;
  /*  4..  1*/ UINT8 answer;
  /*  5..  1*/ STRING answerComment;
};
struct PlayerCliScenarioComplete
{
};
struct ClientGmPlayerInfo
{
  /*  0..  1*/ STRING charName;
  /* 34..  1*/ UINT32 mapID;
  /* 38..  1*/ UINT32 areaID;
  /* 3c..  1*/ V3 position;
  /* 48..  1*/ FLOAT facing;
  /* 4c..  1*/ STRING accountName;
  /*550..  1*/ UINT32 seconds;
  /*554..  1*/ UINT32 hours;
  /*558..  1*/ UINT32 minutes;
  /*55c..  1*/ UINT32 level;
  /*560..  1*/ UINT32 race;
  /*564..  1*/ STRING guildName;
  /*5c8..  1*/ UINT32 cls;
  /*5cc..  1*/ STRING fullName;
  /*ad0..  1*/ UINT64 charGUID;
};
struct PlayerCliBattlePetUpdateNotify
{
  /*  0..  1*/ UINT64 battlePetGUID;
};
struct GuildPostData
{
  /*  0..  1*/ BOOL active;
  /*  4..  1*/ INT32 playStyle;
  /*  8..  1*/ INT32 availability;
  /*  c..  1*/ INT32 classRoles;
  /* 10..  1*/ INT32 levelRange;
  /* 18..  1*/ TIME_T secondsRemaining;
  /* 20..  1*/ STRING comment;
};
struct ClientQuestGiverInvalidQuest
{
  /*  0..  1*/ INT32 reason;
  /*  4..  1*/ STRING reasonText;
};
struct UserClientTutorial
{
  /*  0..  1*/ TUTORIAL_ACTION action;
  /*  4..  1*/ UINT32 tutorialBit;
};
struct PlayerCliAreaSpiritHealerQuery
{
  /*  0..  1*/ UINT64 healerGuid;
};
struct UserClientServerInfoQuery
{
  /*  0..  1*/ STRING category;
};
struct GlobalChallengeModeDeleteLeader
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ UINT32 attemptID;
};
struct ClientSpellChanceProcLog
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT64 targetGUID;
  /* 10..  1*/ INT32 procType;
  /* 14..  1*/ FLOAT roll;
  /* 18..  1*/ FLOAT needed;
  /* 1c..  1*/ INT32 spellID;
  /* 20..  1*/ INT32 procSubType;
};
struct PlayerCliDebugActionsStart
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ INT32 spawnGroupID;
  /*  c..  1*/ INT32 creatureID;
};
struct PlayerMoveSetFlightSpeedCheat
{
  /*  0..  1*/ FLOAT speed;
};
struct ClientMoveRoot
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct UserClientSetDFFastLaunch
{
  /*  0..  1*/ BOOL set;
};
struct PlayerMoveSetRunSpeedCheat
{
  /*  0..  1*/ FLOAT speed;
};
struct UserClientPartyInviteResponse
{
  /*  0..  1*/ UINT8 partyIndex;
  /*  1..  1*/ BOOL accept;
  /*  4..  1*/ Optional<UINT32> rolesDesired;
};
struct ClientCriteriaUpdate
{
  /*  0..  1*/ NOT_IMPLEMENTED currentTime;
  /* 20..  1*/ INT32 flags;
  /* 28..  1*/ UINT64 quantity;
  /* 30..  1*/ UINT64 playerGUID;
  /* 38..  1*/ INT32 criteriaID;
  /* 40..  1*/ TIME_T elapsedTime;
  /* 48..  1*/ TIME_T creationTime;
};
struct PlayerCliScenarioRestart
{
};
struct PlayerCliBattlemasterJoinArena
{
  /*  0..  1*/ UINT8 teamSizeIndex;
};
struct PlayerCliGarrisonForceBuildingActive
{
  /*  0..  1*/ INT32 plotInstanceID;
};
struct ClientLFGuildPost
{
  /*  0..  1*/ Optional<GuildPostData> post;
};
struct UserClientGMUnsquelch
{
  /*  0..  1*/ STRING name;
};
struct ClientCombatEventFailed
{
  /*  0..  1*/ UINT64 victim;
  /*  8..  1*/ UINT64 attacker;
};
struct PlayerCliDebugDrawServer
{
  /*  0..  1*/ BOOL enable;
};
struct JamAllAchievements
{
  /*  0..  1*/ Array<JamEarnedAchievement> earned;
  /* 18..  1*/ Array<JamCriteriaProgress> progress;
};
struct UserClientExpireRaidInstance
{
};
struct PlayerMoveSetFlightBackSpeedCheat
{
  /*  0..  1*/ FLOAT speed;
};
struct UserClientRecruitAFriend
{
  /*  0..  1*/ STRING email;
  /*101..  1*/ STRING text;
  /*4fe..  1*/ STRING name;
};
struct PlayerCliQuestGiverRequestReward
{
  /*  0..  1*/ UINT64 questGiverGUID;
  /*  8..  1*/ INT32 questID;
};
struct GlobalGMSetLFGuildPostComment
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ STRING comment;
};
struct ClientRoleChosen
{
  /*  0..  1*/ BOOL accepted;
  /*  4..  1*/ UINT32 roleMask;
  /*  8..  1*/ UINT64 player;
};
struct PlayerCliInvisDetectDumpCheat
{
  /*  0..  1*/ UINT64 target;
};
struct JamChannelPlayer
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 virtualRealmAddress;
  /*  c..  1*/ UINT8 flags;
};
struct LFGuildBrowseData
{
  /*  0..  1*/ STRING guildName;
  /* 68..  1*/ UINT64 guildGUID;
  /* 70..  1*/ UINT32 guildVirtualRealm;
  /* 74..  1*/ INT32 guildLevel;
  /* 78..  1*/ INT32 guildMembers;
  /* 7c..  1*/ INT32 guildAchievementPoints;
  /* 80..  1*/ INT32 playStyle;
  /* 84..  1*/ INT32 availability;
  /* 88..  1*/ INT32 classRoles;
  /* 8c..  1*/ INT32 levelRange;
  /* 90..  1*/ INT32 emblemStyle;
  /* 94..  1*/ INT32 emblemColor;
  /* 98..  1*/ INT32 borderStyle;
  /* 9c..  1*/ INT32 borderColor;
  /* a0..  1*/ INT32 background;
  /* a4..  1*/ STRING comment;
  /*4a4..  1*/ INT8 cached;
  /*4a5..  1*/ INT8 membershipRequested;
};
struct ClientMoveSplineSetRunBackSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
};
struct ClientStartElapsedTimers
{
  /*  0..  1*/ Array<JamElaspedTimer> timers;
};
struct GlobalChallengeModeRequestMapStats
{
};
struct PlayerMoveStopStrafe
{
  /*  0..  1*/ STRUCT status;
};
struct ClientScriptMessage
{
  /*  0..  1*/ STRING text;
};
struct PlayerCliDestroyItems
{
  /*  0..  1*/ BOOL skipEquipped;
};
struct ClientCharacterUpgradeComplete
{
  /*  0..  1*/ Array<INT32> items;
  /* 18..  1*/ UINT64 characterGUID;
};
struct PlayerMoveStopSwim
{
  /*  0..  1*/ STRUCT status;
};
struct PlayerCliSetAdvancedCombatLogging
{
  /*  0..  1*/ BOOL enable;
};
struct ClientBattlegroundPlayerJoined
{
  /*  0..  1*/ UINT64 guid;
};
struct PlayerCliClearServerBuckData
{
};
struct UserClientLuaUsage
{
};
struct ClientUpdateExpansionLevel
{
  /*  0..  1*/ Array<JamRaceClassAvailability> availableClasses;
  /* 18..  1*/ Optional<UINT8> activeExpansionLevel;
  /* 20..  1*/ Array<JamRaceClassAvailability> availableRaces;
};
struct ClientGMTicketResolveResponse
{
  /*  0..  1*/ BOOL showSurvey;
};
struct PlayerCliUnlockVoidStorage
{
  /*  0..  1*/ UINT64 npc;
};
struct ClientLFGuildBrowse
{
  /*  0..  1*/ Array<LFGuildBrowseData> post;
};
struct ClientRequestPVPRewardsResponse
{
  /*  0..  1*/ INT32 ratedRewardPointsThisWeek;
  /*  4..  1*/ INT32 arenaRewardPointsThisWeek;
  /*  8..  1*/ INT32 ratedMaxRewardPointsThisWeek;
  /*  c..  1*/ INT32 arenaRewardPoints;
  /* 10..  1*/ INT32 randomRewardPointsThisWeek;
  /* 14..  1*/ INT32 arenaMaxRewardPointsThisWeek;
  /* 18..  1*/ INT32 ratedRewardPoints;
  /* 1c..  1*/ INT32 maxRewardPointsThisWeek;
  /* 20..  1*/ INT32 rewardPointsThisWeek;
  /* 24..  1*/ INT32 randomMaxRewardPointsThisWeek;
};
struct JamPetBattleInput
{
  /*  0..  1*/ UINT8 moveType;
  /*  1..  1*/ INT8 newFrontPet;
  /*  2..  1*/ UINT8 debugFlags;
  /*  3..  1*/ UINT8 battleInterrupted;
  /*  4..  1*/ BOOL ignoreAbandonPenalty;
  /*  8..  1*/ INT32 abilityID;
  /*  c..  1*/ INT32 round;
};
struct ClientInstanceResetFailed
{
  /*  0..  1*/ RESET_FAILED_REASON resetFailedReason;
  /*  4..  1*/ UINT32 mapID;
};
struct PlayerCliPetSetAction
{
  /*  0..  1*/ UINT64 petGUID;
  /*  8..  1*/ UINT32 action;
  /*  c..  1*/ UINT32 index;
};
struct GlobalGuildQueryMemberRecipes
{
  /*  0..  1*/ UINT64 guildMember;
  /*  8..  1*/ UINT64 guildGUID;
  /* 10..  1*/ INT32 skillLineID;
};
struct ClientModifyCooldown
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ INT32 deltaTime;
  /*  c..  1*/ INT32 spellID;
};
struct PlayerCliUpgradeItem
{
  /*  0..  1*/ UINT64 itemMaster;
  /*  8..  1*/ UINT64 itemGUID;
  /* 10..  1*/ INT32 containerSlot;
  /* 14..  1*/ INT32 upgradeID;
  /* 18..  1*/ INT32 slot;
};
struct ClientCharacterObjectTestResponse
{
  /*  0..  1*/ INT32 pong;
};
struct ClientSpellMissLog
{
  /*  0..  1*/ Array<JamClientSpellLogMissEntry> entries;
  /* 18..  1*/ INT32 spellID;
  /* 20..  1*/ UINT64 caster;
};
struct UserClientMailReturnToSender
{
  /*  0..  1*/ UINT64 senderGUID;
  /*  8..  1*/ INT32 mailID;
};
struct ClientMoveSetActiveMover
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct AccountObjectSetCheats
{
  /*  0..  1*/ BOOL autoBattle;
  /*  4..  1*/ JAM_ACCOUNTOBJECT_SET_CHEATS type;
  /*  8..  1*/ INT8 slotLockCheat;
};
struct UserClientRequestPartyJoinUpdates
{
  /*  0..  1*/ UINT8 partyIndex;
};
struct ClientSetLootMethodFailed
{
};
struct ClientShowTaxiNodes
{
  /*  0..  1*/ Optional<ClientShowTaxiNodesWindowInfo> windowInfo;
  /* 18..  1*/ Array<UINT8> nodes;
};
struct PlayerCliAlterAppearance
{
  /*  0..  1*/ INT32 newFacialHair;
  /*  4..  1*/ INT32 newSkinColor;
  /*  8..  1*/ INT32 newHairColor;
  /*  c..  1*/ INT32 newHairStyle;
};
struct GlobalGetChallengeModeRewards
{
};
struct ClientScenarioOutOfBounds
{
  /*  0..  1*/ INT32 timeRemaining;
};
struct PlayerCliForceAnim
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ STRING arguments;
};
struct ClientAllGuildAchievements
{
  /*  0..  1*/ Array<JamEarnedAchievement> earned;
};
struct ClientUpdateServerPlayerPosition
{
  /*  0..  1*/ V3 position;
};
struct ClientRatedBattlefieldInfo
{
  /*  0..  1*/ FixedArray<ClientBracketInfo, 6> bracket;
};
struct ClientFlightSplineSync
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ FLOAT splineDist;
};
struct ClientConsoleWrite
{
  /*  0..  1*/ UINT32 color;
  /*  4..  1*/ STRING line;
};
struct JamPetBattleLocations
{
  /*  0..  1*/ INT32 locationResult;
  /*  4..  1*/ V3 battleOrigin;
  /* 10..  1*/ FLOAT battleFacing;
  /* 14..  1*/ FixedArray<V3, 2> playerPositions;
};
struct JamCommentatorTeam
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ Array<JamCommentatorPlayer> players;
};
struct PlayerCurrencyCheat
{
  /*  0..  1*/ STRING cheatArg;
};
struct ClientRefreshComponent
{
};
struct AccountObjectGetProfile
{
  /*  0..  1*/ STRING filename;
};
struct JamCliGarrisonRemoteInfo
{
  /*  0..  1*/ Array<JamCliGarrisonRemoteSiteInfo> sites;
};
struct PlayerChoiceResponseRewardEntry
{
  /*  0..  1*/ INT32 id;
  /*  4..  1*/ INT32 displayID;
  /*  8..  1*/ INT32 quantity;
};
struct ClientPartyMemberState
{
  /*  0..  1*/ UINT32 changeMask;
  /*  8..  1*/ UINT64 memberGuid;
  /* 10..  1*/ BOOL forEnemy;
  /* 11..  1*/ BOOL fullUpdate;
  /* 18..  1*/ NOT_IMPLEMENTED changes;
};
struct GlobalBlackMarketAddItemsCheat
{
};
struct PlayerCliDoMasterLootRoll
{
  /*  0..  1*/ UINT64 object;
  /*  8..  1*/ UINT8 lootListID;
};
struct ClientSetPctSpellModifier
{
  /*  0..  1*/ Array<ClientSpellModifier> modifiers;
};
struct ClientAverageItemLevelInform
{
  /*  0..  1*/ FLOAT avgItemLevel;
};
struct ClientSceneObjectPetBattleRoundResult
{
  /*  0..  1*/ STRUCT msgData;
  /* 58..  1*/ UINT64 sceneObjectGUID;
};
struct PlayerCliCheckLoginCriteria
{
};
struct ClientOverrideLight
{
  /*  0..  1*/ INT32 transitionMilliseconds;
  /*  4..  1*/ INT32 areaLightID;
  /*  8..  1*/ INT32 overrideLightID;
};
struct PlayerCliDuelResponse
{
  /*  0..  1*/ UINT64 arbiterGUID;
  /*  8..  1*/ BOOL accepted;
};
struct ClientGarrisonCompleteMissionResult
{
  /*  0..  1*/ INT32 result;
  /*  8..  1*/ STRUCT mission;
  /* 48..  1*/ INT32 missionRecID;
};
struct PlayerCliGameTimeSet
{
  /*  0..  1*/ UINT32 newTime;
};
struct ClientCalendarEventInviteStatusAlert
{
  /*  0..  1*/ UINT64 eventID;
  /*  8..  1*/ UINT32 flags;
  /*  c..  1*/ UINT32 date;
  /* 10..  1*/ UINT8 status;
};
struct AccountObjectSetProfile
{
  /*  0..  1*/ NOT_IMPLEMENTED profile;
};
struct ClientScenarioState
{
  /*  0..  1*/ Array<JamBonusObjectiveData> bonusObjectives;
  /* 18..  1*/ BOOL scenarioComplete;
  /* 20..  1*/ Array<JamCriteriaProgress> criteriaProgress;
  /* 38..  1*/ INT32 currentStep;
  /* 3c..  1*/ UINT32 waveCurrent;
  /* 40..  1*/ UINT32 difficultyID;
  /* 44..  1*/ UINT32 timerDuration;
  /* 48..  1*/ INT32 scenarioID;
  /* 4c..  1*/ UINT32 waveMax;
};
struct UserClientLFGListJoin
{
  /*  0..  1*/ STRUCT info;
};
struct ClientInstanceGroupSizeChanged
{
  /*  0..  1*/ UINT32 groupSize;
};
struct PlayerCliEnableResearchSiteCheat
{
  /*  0..  1*/ UINT32 fieldID;
  /*  4..  1*/ UINT32 siteID;
};
struct PlayerCliReadItem
{
  /*  0..  1*/ UINT8 slot;
  /*  1..  1*/ UINT8 packSlot;
};
struct JamCliGuildInfo
{
  /*  0..  1*/ UINT64 m_guildGUID;
  /*  8..  1*/ UINT32 m_virtualRealmAddress;
  /*  c..  1*/ STRING m_guildName;
  /* 70..  1*/ Array<JamCliGuildInfoRank> m_ranks;
  /* 88..  1*/ INT32 m_emblemStyle;
  /* 8c..  1*/ INT32 m_emblemColor;
  /* 90..  1*/ INT32 m_borderStyle;
  /* 94..  1*/ INT32 m_borderColor;
  /* 98..  1*/ INT32 m_backgroundColor;
};
struct ClientStartTimer
{
  /*  0..  1*/ TIME_T timeRemaining;
  /*  8..  1*/ TIME_T totalTime;
  /* 10..  1*/ INT32 type;
};
struct ClientSceneObjectPetBattleFinished
{
  /*  0..  1*/ UINT64 sceneObjectGUID;
};
struct ClientDebugDrawSetGraphFrame
{
  /*  0..  1*/ UINT32 height;
  /*  4..  1*/ UINT32 width;
  /*  8..  1*/ UINT32 id;
};
struct UserClientAccountInfoRequest
{
};
struct GlobalBlackMarketDeleteAllAuctionsCheat
{
};
struct UserClientGMNukeAccount
{
  /*  0..  1*/ UINT32 accountID;
};
struct ClientProfileDataResponse
{
  /*  0..  1*/ FixedArray<UINT8, 488> perfData;
};
struct PlayerMoveForceUnrootAck
{
  /*  0..  1*/ STRUCT data;
};
struct PlayerCliSetSkillCheat
{
  /*  0..  1*/ UINT32 level;
  /*  4..  1*/ UINT32 skillID;
};
struct ClientNewTaxiPath
{
};
struct UserClientGMTicketGetTicket
{
};
struct JamLootCurrency
{
  /*  0..  1*/ UINT32 currencyID;
  /*  4..  1*/ UINT32 quantity;
  /*  8..  1*/ UINT8 lootListID;
  /*  c..  1*/ LOOT_ITEM_UI_TYPE uiType;
};
struct PlayerMoveSetPitchRateCheat
{
  /*  0..  1*/ FLOAT speed;
};
struct JamCliQuestInfoObjective
{
  /*  0..  1*/ INT32 id;
  /*  4..  1*/ UINT8 type;
  /*  5..  1*/ INT8 storageIndex;
  /*  8..  1*/ INT32 objectID;
  /*  c..  1*/ INT32 amount;
  /* 10..  1*/ INT32 flags;
  /* 14..  1*/ STRING description;
  /*118..  1*/ Array<INT32> visualEffects;
};
struct ClientListTargets
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ Array<JamClientTargetThreat> targets;
};
struct PlayerCliPetitionBuy
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ STRING title;
};
struct ClientGetGarrisonInfoResult
{
  /*  0..  1*/ Array<INT32> archivedMissions;
  /* 18..  1*/ INT32 garrSiteID;
  /* 1c..  1*/ INT32 factionIndex;
  /* 20..  1*/ Array<JamGarrisonMission> missions;
  /* 38..  1*/ Array<JamGarrisonBuildingInfo> buildings;
  /* 50..  1*/ Array<JamGarrisonFollower> followers;
  /* 68..  1*/ Array<JamGarrisonPlotInfo> plots;
  /* 80..  1*/ INT32 garrSiteLevelID;
};
struct PlayerCliQueryNPCText
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 textID;
};
struct JamAuthWaitInfo
{
  /*  0..  1*/ UINT32 waitCount;
  /*  4..  1*/ BOOL hasFCM;
};
struct ClientMoveSetCanTurnWhileFalling
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct PlayerCliScenarioPause
{
};
struct ClientSendAllItemDurability
{
  /*  0..  1*/ Array<INT32> maxDurability;
};
struct ClientLootRollWon
{
  /*  0..  1*/ UINT64 winner;
  /*  8..  1*/ UINT64 lootObj;
  /* 10..  1*/ UINT8 rollType;
  /* 14..  1*/ INT32 roll;
  /* 18..  1*/ STRUCT item;
};
struct UserRouterClientLogStreamingError
{
  /*  0..  1*/ STRING error;
};
struct JamPetBattleActiveState
{
  /*  0..  1*/ UINT32 stateID;
  /*  4..  1*/ INT32 stateValue;
};
struct ClientAuctionWonNotification
{
  /*  0..  1*/ STRUCT info;
};
struct PlayerCliSignPetition
{
  /*  0..  1*/ UINT64 petitionGUID;
  /*  8..  1*/ UINT8 choice;
};
struct PlayerCliCompleteAllReadyShipments
{
  /*  0..  1*/ UINT64 shipmentGameObjectGUID;
};
struct ClientBracketInfo
{
  /*  0..  1*/ INT32 personalRating;
  /*  4..  1*/ INT32 ranking;
  /*  8..  1*/ INT32 seasonPlayed;
  /*  c..  1*/ INT32 seasonWon;
  /* 10..  1*/ INT32 weeklyPlayed;
  /* 14..  1*/ INT32 weeklyWon;
  /* 18..  1*/ INT32 bestWeeklyRating;
  /* 1c..  1*/ INT32 bestSeasonRating;
};
struct ClientGuildMoved
{
  /*  0..  1*/ STRING targetRealmName;
  /*100..  1*/ UINT64 guildGUID;
};
struct UserClientGMTicketDeleteTicket
{
};
struct ClientItemPurchaseRefundResult
{
  /*  0..  1*/ UINT8 result;
  /*  8..  1*/ UINT64 itemGUID;
  /* 10..  1*/ Optional<ClientItemPurchaseContents> contents;
};
struct PlayerMoveForcePitchRateChangeAck
{
  /*  0..  1*/ STRUCT data;
};
struct ClientDebugDrawSphere
{
  /*  0..  1*/ FLOAT lifetime;
  /*  4..  1*/ UINT32 settings;
  /*  8..  1*/ FLOAT radius;
  /*  c..  1*/ V3 center;
  /* 18..  1*/ UINT32 id;
  /* 1c..  1*/ UINT32 color;
};
struct ClientSetMeleeAnimKit
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ UINT16 animKitID;
};
struct PlayerCliPetRespecCheat
{
};
struct PlayerCliPetBattleWildLocationFail
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ V3 playerPos;
};
struct ClientLFGBlackList
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ Array<ClientLFGBlackListSlot> slots;
};
struct ClientDuelRequested
{
  /*  0..  1*/ UINT64 arbiterGUID;
  /*  8..  1*/ UINT64 requestedByGUID;
};
struct JamQuestCompletionNPC
{
  /*  0..  1*/ INT32 questID;
  /*  8..  1*/ Array<INT32> npc;
};
struct UserClientCheatPlayerLogin
{
  /*  0..  1*/ UINT64 playerGUID;
  /*  8..  1*/ STRUCT clientSettings;
};
struct ClientSpecialMountAnim
{
  /*  0..  1*/ UINT64 unitGUID;
};
struct PlayerCliActivateTaxiExpress
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ Array<UINT32> pathNodes;
};
struct JamPetBattlePetUpdate
{
  /*  0..  1*/ UINT64 battlePetGUID;
  /*  8..  1*/ INT32 speciesID;
  /*  c..  1*/ INT32 displayID;
  /* 10..  1*/ INT32 collarID;
  /* 14..  1*/ INT16 level;
  /* 16..  1*/ INT16 xp;
  /* 18..  1*/ INT32 curHealth;
  /* 1c..  1*/ INT32 maxHealth;
  /* 20..  1*/ INT32 power;
  /* 24..  1*/ INT32 speed;
  /* 28..  1*/ INT32 npcTeamMemberID;
  /* 2c..  1*/ UINT16 breedQuality;
  /* 2e..  1*/ UINT16 statusFlags;
  /* 30..  1*/ INT8 slot;
  /* 31..  1*/ STRING customName;
  /* 78..  1*/ Array<JamPetBattleActiveAbility> abilities;
  /* 90..  1*/ Array<JamPetBattleActiveAura> auras;
  /* a8..  1*/ Array<JamPetBattleActiveState> states;
};
struct GlobalChallengeModeRequestLeadersCheat
{
  /*  0..  1*/ INT32 mapID;
};
struct ClientRecruitAFriendResponse
{
  /*  0..  1*/ RECRUIT_A_FRIEND_RESULT result;
};
struct UserClientBattlePetSetBattleSlot
{
  /*  0..  1*/ UINT64 battlePetGUID;
  /*  8..  1*/ UINT8 slotIndex;
};
struct PlayerCliLearnSpellCheat
{
  /*  0..  1*/ INT32 spellID;
};
struct CliChatMessageGuild
{
  /*  0..  1*/ INT32 language;
  /*  4..  1*/ STRING text;
};
struct PlayerCliWipeAllAccountAchievements
{
};
struct UserClientMoveCharacter
{
  /*  0..  1*/ UINT64 characterGUID;
  /*  8..  1*/ INT32 mapID;
  /*  c..  1*/ V3 position;
  /* 18..  1*/ FLOAT facing;
};
struct ClientMoveSetFlightBackSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
  /*  c..  1*/ FLOAT speed;
};
struct ClientChallengeModeNewPlayerRecord
{
  /*  0..  1*/ INT32 medal;
  /*  4..  1*/ INT32 completionMilliseconds;
  /*  8..  1*/ INT32 mapID;
};
struct PlayerMoveDismissVehicle
{
  /*  0..  1*/ STRUCT status;
};
struct UserClientGMTicketAcknowledgeSurvey
{
  /*  0..  1*/ INT32 caseID;
};
struct ClientTrainerListSpell
{
  /*  0..  1*/ INT32 spellID;
  /*  4..  1*/ UINT32 moneyCost;
  /*  8..  1*/ UINT32 reqSkillLine;
  /*  c..  1*/ UINT32 reqSkillRank;
  /* 10..  1*/ FixedArray<INT32, 3> reqAbility;
  /* 1c..  1*/ UINT8 usable;
  /* 1d..  1*/ UINT8 reqLevel;
};
struct PlayerCliSetCurrencyCheat
{
  /*  0..  1*/ INT32 quantity;
  /*  4..  1*/ INT32 type;
};
struct ClientTriggerCinematic
{
  /*  0..  1*/ UINT32 cinematicID;
};
struct ClientCancelCombat
{
};
struct PlayerCliGarrisonSetActiveBuildingSpecializationCheat
{
  /*  0..  1*/ INT32 plotInstanceID;
  /*  4..  1*/ INT32 specializationID;
};
struct ClientGuildPartyState
{
  /*  0..  1*/ FLOAT guildXPEarnedMult;
  /*  4..  1*/ INT32 numMembers;
  /*  8..  1*/ BOOL inGuildParty;
  /*  c..  1*/ INT32 numRequired;
};
struct ClientHotfixNotify
{
  /*  0..  1*/ UINT32 tableHash;
  /*  4..  1*/ UINT32 timestamp;
  /*  8..  1*/ INT32 recordID;
};
struct ClientDuelCountdown
{
  /*  0..  1*/ UINT32 countdown;
};
struct ClientCorpseLocation
{
  /*  0..  1*/ UINT64 transport;
  /*  8..  1*/ V3 position;
  /* 14..  1*/ INT32 actualMapID;
  /* 18..  1*/ BOOL valid;
  /* 1c..  1*/ INT32 mapID;
};
struct JamPetBattlePlayerUpdate
{
  /*  0..  1*/ UINT64 characterID;
  /*  8..  1*/ INT32 trapAbilityID;
  /*  c..  1*/ INT32 trapStatus;
  /* 10..  1*/ UINT16 roundTimeSecs;
  /* 18..  1*/ Array<JamPetBattlePetUpdate> pets;
  /* 30..  1*/ INT8 frontPet;
  /* 31..  1*/ UINT8 inputFlags;
};
struct ClientInspectPVP
{
  /*  0..  1*/ Array<JamPVPBracketData> bracket;
  /* 18..  1*/ UINT64 clientGUID;
};
struct PlayerCliCancelAura
{
  /*  0..  1*/ UINT64 casterGUID;
  /*  8..  1*/ INT32 spellID;
};
struct ClientQuestUpdateAddPvPCredit
{
  /*  0..  1*/ INT32 questID;
  /*  4..  1*/ UINT16 count;
};
struct UserClientGMTicketGetSystemStatus
{
};
struct ClientXPGainAborted
{
  /*  0..  1*/ UINT64 victim;
  /*  8..  1*/ INT32 xpToAdd;
  /*  c..  1*/ INT32 xpGainReason;
  /* 10..  1*/ INT32 xpAbortReason;
};
struct PlayerMoveChangeVehicleSeats
{
  /*  0..  1*/ UINT64 dstVehicle;
  /*  8..  1*/ STRUCT status;
  /* b0..  1*/ UINT8 dstSeatIndex;
};
struct ClientCalendarEventInitialInvites
{
  /*  0..  1*/ Array<CalendarEventInitialInviteInfo> invites;
};
struct PlayerCliQuestGiverAcceptQuest
{
  /*  0..  1*/ INT32 questID;
  /*  8..  1*/ UINT64 questGiverGUID;
  /* 10..  1*/ BOOL startCheat;
};
struct GlobalGuildUpdateInfoText
{
  /*  0..  1*/ STRING infoText;
};
struct ClientBattlePayDistributionUpdate
{
  /*  0..  1*/ STRUCT distributionObject;
};
struct PlayerCliGetPowerRegenCheat
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ INT32 powerType;
};
struct ClientServerFirstAchievement
{
  /*  0..  1*/ UINT64 playerGUID;
  /*  8..  1*/ STRING name;
  /* 6c..  1*/ INT32 achievementID;
  /* 70..  1*/ BOOL guildAchievement;
};
struct PlayerCliRequestAreaShareInfo
{
};
struct ClientMoveUpdateKnockBack
{
  /*  0..  1*/ STRUCT status;
};
struct ClientPetBattleFinalRound
{
  /*  0..  1*/ STRUCT msgData;
};
struct JamPetitionSignature
{
  /*  0..  1*/ UINT64 signer;
  /*  8..  1*/ INT32 choice;
};
struct ClientQueryPetitionResponse
{
  /*  0..  1*/ UINT32 petitionID;
  /*  4..  1*/ BOOL allow;
  /*  8..  1*/ STRUCT info;
};
struct PlayerCliSetGlyphCheat
{
  /*  0..  1*/ UINT16 glyph;
  /*  2..  1*/ UINT8 slot;
};
struct JamPetBattleEnviroUpdate
{
  /*  0..  1*/ Array<JamPetBattleActiveAura> auras;
  /* 18..  1*/ Array<JamPetBattleActiveState> states;
};
struct ClientInstanceEncounterObjectiveUpdate
{
  /*  0..  1*/ INT32 progressAmount;
  /*  4..  1*/ INT32 objectiveID;
};
struct PlayerCliBattlemasterHello
{
  /*  0..  1*/ UINT64 unit;
};
struct JamGuildRewardItem
{
  /*  0..  1*/ UINT32 itemID;
  /*  8..  1*/ Array<UINT32> achievementsRequired;
  /* 20..  1*/ UINT32 raceMask;
  /* 24..  1*/ INT32 minGuildLevel;
  /* 28..  1*/ INT32 minGuildRep;
  /* 30..  1*/ UINT64 cost;
};
struct PlayerMoveStartBackward
{
  /*  0..  1*/ STRUCT status;
};
struct ClientBattlegroundPlayerPositions
{
  /*  0..  1*/ Array<BattlegroundPlayerPosition> flagCarriers;
};
struct UserClientGMTicketGetCaseStatus
{
};
struct ClientOpenLFGDungeonFinder
{
  /*  0..  1*/ INT32 dungeonID;
};
struct JamClientSpellLogMissDebug
{
  /*  0..  1*/ FLOAT hitRoll;
  /*  4..  1*/ FLOAT hitRollNeeded;
};
struct PlayerDiscardedTimeSyncAcks
{
  /*  0..  1*/ UINT32 maxSequenceIndex;
};
struct UserClientDFGetSystemInfo
{
  /*  0..  1*/ UINT8 partyIndex;
  /*  1..  1*/ BOOL player;
};
struct ClientPauseMirrorTimer
{
  /*  0..  1*/ BOOL paused;
  /*  4..  1*/ INT32 timer;
};
struct PlayerCliDumpConditionQuests
{
  /*  0..  1*/ INT32 conditionID;
};
struct UserClientPartyUninvite
{
  /*  0..  1*/ STRING reason;
  /*100..  1*/ UINT8 partyIndex;
  /*108..  1*/ UINT64 targetGuid;
};
struct ClientBattlePetJournalLockAcquired
{
};
struct UserClientBattlePayDistributionAssignToTarget
{
  /*  0..  1*/ UINT64 targetCharacter;
  /*  8..  1*/ UINT64 distributionID;
  /* 10..  1*/ UINT32 productChoice;
  /* 14..  1*/ UINT32 clientToken;
};
struct JamClientSessionAlertConfig
{
  /*  0..  1*/ INT32 delay;
  /*  4..  1*/ INT32 period;
  /*  8..  1*/ INT32 displayTime;
};
struct UserClientCalendarEventInviteNotes
{
  /*  0..  1*/ UINT64 eventID;
  /*  8..  1*/ UINT64 guid;
  /* 10..  1*/ UINT64 inviteID;
  /* 18..  1*/ UINT64 moderatorID;
  /* 20..  1*/ STRING notes;
};
struct ClientPetitionShowSignatures
{
  /*  0..  1*/ Array<JamPetitionSignature> signatures;
  /* 18..  1*/ INT32 petitionID;
  /* 20..  1*/ UINT64 item;
  /* 28..  1*/ UINT64 owner;
};
struct ClientServerTime
{
  /*  0..  1*/ UINT32 lastTick;
  /*  4..  1*/ UINT32 gameTime;
};
struct PlayerCliSendCombatTrigger
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ INT32 eventID;
};
struct GlobalGuildAddRank
{
  /*  0..  1*/ STRING name;
  /* 44..  1*/ INT32 rankOrder;
};
struct UserClientGMBindOther
{
  /*  0..  1*/ STRING playerName;
};
struct ClientDanceStudioCreateResult
{
  /*  0..  1*/ BOOL enable;
  /*  4..  1*/ FixedArray<INT32, 4> secrets;
};
struct PlayerCliKeyboundOverride
{
  /*  0..  1*/ UINT16 overrideID;
};
struct ClientExpectedSpamRecords
{
  /*  0..  1*/ Array<JamClientSpamRecord> spamRecord;
};
struct PlayerCliClearRandomBGWinTime
{
};
struct ClientMinimapPing
{
  /*  0..  1*/ UINT64 sender;
  /*  8..  1*/ V2 position;
};
struct JamCollisionHeightInfo
{
  /*  0..  1*/ FLOAT height;
  /*  4..  1*/ FLOAT scale;
  /*  8..  1*/ UPDATE_COLLISION_HEIGHT_REASON reason;
};
struct ClientLFGUpdateStatusNone
{
};
struct PlayerCliClearTrackedCurrencyEarned
{
};
struct ClientBattlePetRevoked
{
  /*  0..  1*/ UINT64 battlePetGUID;
};
struct PlayerCliAutoEquipItemSlot
{
  /*  0..  1*/ UINT64 item;
  /*  8..  1*/ UINT8 itemDstSlot;
  /* 10..  1*/ STRUCT inv;
};
struct ClientTotemMoved
{
  /*  0..  1*/ UINT64 totem;
  /*  8..  1*/ UINT8 slot;
  /*  9..  1*/ UINT8 newSlot;
};
struct PlayerCliGameObjReportUse
{
  /*  0..  1*/ UINT64 gameObjectGUID;
};
struct PlayerCliRequestVehicleExit
{
};
struct ClientCompleteShipmentResponse
{
  /*  0..  1*/ UINT64 shipmentID;
  /*  8..  1*/ INT32 result;
};
struct PlayerCliUseToy
{
  /*  0..  1*/ STRUCT cast;
  /*1b8..  1*/ INT32 itemID;
};
struct ClientResearchComplete
{
  /*  0..  1*/ STRUCT research;
};
struct ClientMoveSplineSetRunMode
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct ScenarioPOIData
{
  /*  0..  1*/ INT32 criteriaTreeID;
  /*  8..  1*/ Array<ScenarioBlobData> blobData;
};
struct ClientFactionBonusInfo
{
  /*  0..  1*/ FixedArray<BOOL, 256> factionHasBonus;
};
struct PlayerMoveForceFlightBackSpeedChangeAck
{
  /*  0..  1*/ STRUCT data;
};
struct ClientCacheVersion
{
  /*  0..  1*/ UINT32 cacheVersion;
};
struct JamPetBattleEffectTarget
{
  /*  0..  1*/ JAM_PET_BATTLE_EFFECT_TARGET_EX type;
  /*  4..  1*/ UINT8 petx;
  /*  8..  1*/ UINT32 auraInstanceID;
  /*  c..  1*/ UINT32 auraAbilityID;
  /* 10..  1*/ INT32 roundsRemaining;
  /* 14..  1*/ INT32 currentRound;
  /* 18..  1*/ UINT32 stateID;
  /* 1c..  1*/ INT32 stateValue;
  /* 20..  1*/ INT32 health;
  /* 24..  1*/ INT32 newStatValue;
  /* 28..  1*/ INT32 triggerAbilityID;
  /* 2c..  1*/ INT32 changedAbilityID;
  /* 30..  1*/ INT32 cooldownRemaining;
  /* 34..  1*/ INT32 lockdownRemaining;
  /* 38..  1*/ INT32 broadcastTextID;
};
struct PlayerCliRequestHonorStats
{
  /*  0..  1*/ UINT64 targetGUID;
};
struct PlayerCliClearHolidayBGWinTime
{
};
struct CliChatChannelUnsilenceVoice
{
  /*  0..  1*/ STRING channelName;
  /* 80..  1*/ STRING name;
};
struct ClientSendItemPassives
{
  /*  0..  1*/ Array<INT32> spellID;
};
struct ClientAreaTriggerDenied
{
  /*  0..  1*/ BOOL entered;
  /*  4..  1*/ INT32 areaTriggerID;
};
struct PlayerMoveCollisionDisableAck
{
  /*  0..  1*/ STRUCT data;
};
struct JamLfgBootInfo
{
  /*  0..  1*/ BOOL m_voteInProgress;
  /*  1..  1*/ BOOL m_votePassed;
  /*  2..  1*/ BOOL m_myVoteCompleted;
  /*  3..  1*/ BOOL m_myVote;
  /*  8..  1*/ UINT64 m_target;
  /* 10..  1*/ UINT32 m_totalVotes;
  /* 14..  1*/ UINT32 m_bootVotes;
  /* 18..  1*/ INT32 m_timeLeft;
  /* 1c..  1*/ UINT32 m_votesNeeded;
  /* 20..  1*/ STRING m_reason;
};
struct ClientItemTimeUpdate
{
  /*  0..  1*/ UINT64 itemGuid;
  /*  8..  1*/ UINT32 durationLeft;
};
struct PlayerCliRequestVehiclePrevSeat
{
};
struct PlayerCliConfirmRespecWipe
{
  /*  0..  1*/ UINT64 respecMaster;
  /*  8..  1*/ UINT8 respecType;
};
struct ClientLFGSlotInvalid
{
  /*  0..  1*/ INT32 subReason1;
  /*  4..  1*/ INT32 subReason2;
  /*  8..  1*/ UINT32 reason;
};
struct UserClientCommentatorGetPlayerInfo
{
  /*  0..  1*/ JAMSERVERSPEC worldServer;
  /*  c..  1*/ UINT32 mapID;
};
struct ClientCameraShake
{
  /*  0..  1*/ INT32 soundID;
  /*  4..  1*/ INT32 cameraShakeID;
};
struct ClientRealmSplit
{
  /*  0..  1*/ INT32 decision;
  /*  4..  1*/ INT32 state;
  /*  8..  1*/ STRING date;
};
struct PlayerCliSetFactionAtWar
{
  /*  0..  1*/ UINT8 factionIndex;
};
struct JamPetBattleEffect
{
  /*  0..  1*/ UINT32 abilityEffectID;
  /*  4..  1*/ UINT16 flags;
  /*  6..  1*/ UINT16 sourceAuraInstanceID;
  /*  8..  1*/ UINT16 turnInstanceID;
  /*  a..  1*/ INT8 petBattleEffectType;
  /*  b..  1*/ UINT8 casterPBOID;
  /*  c..  1*/ UINT8 stackDepth;
  /* 10..  1*/ Array<JamPetBattleEffectTarget> targets;
};
struct ClientGarrisonRemoveFollowerResult
{
  /*  0..  1*/ UINT64 followerDBID;
  /*  8..  1*/ INT32 result;
};
struct PlayerCliCooldownCheat
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT8 cheatCode;
};
struct ClientGossipComplete
{
};
struct ClientMountResult
{
  /*  0..  1*/ UINT32 result;
};
struct UserClientTeleportToUnit
{
  /*  0..  1*/ STRING unitName;
};
struct ClientGameObjectActivateAnimKit
{
  /*  0..  1*/ BOOL maintain;
  /*  8..  1*/ UINT64 objectGUID;
  /* 10..  1*/ INT32 animKitID;
};
struct ClientMoveRemoveMovementForce
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
  /*  c..  1*/ UINT32 movementForceID;
};
struct ClientBlackMarketRequestItemsResult
{
  /*  0..  1*/ TIME_T lastUpdateID;
  /*  8..  1*/ Array<ClientBlackMarketItem> items;
};
struct CliChatJoinChannel
{
  /*  0..  1*/ STRING password;
  /* 80..  1*/ STRING channelName;
  /*100..  1*/ BOOL createVoiceSession;
  /*104..  1*/ INT32 chatChannelId;
  /*108..  1*/ BOOL internal;
};
struct UserClientSetPVPWeeklyGames
{
  /*  0..  1*/ UINT32 numPlayed;
  /*  4..  1*/ INT32 season;
  /*  8..  1*/ UINT32 numWon;
  /*  c..  1*/ UINT8 bracket;
};
struct ClientDestructibleBuildingDamage
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ UINT64 caster;
  /* 10..  1*/ UINT64 owner;
  /* 18..  1*/ INT32 damage;
  /* 1c..  1*/ INT32 spellID;
};
struct PlayerCliEmote
{
  /*  0..  1*/ UINT32 emoteID;
};
struct PlayerCliSetTradeGold
{
  /*  0..  1*/ UINT64 coinage;
};
struct PlayerCliRequestVehicleNextSeat
{
};
struct UserClientGMSetVeteranTrial
{
  /*  0..  1*/ BOOL veteranTrial;
};
struct PlayerCliGarrisonCompleteMissionCheat
{
  /*  0..  1*/ INT32 missionRecID;
};
struct JamClientGuildEventEntry
{
  /*  0..  1*/ UINT64 playerGUID;
  /*  8..  1*/ UINT64 otherGUID;
  /* 10..  1*/ UINT32 transactionDate;
  /* 14..  1*/ UINT8 transactionType;
  /* 15..  1*/ UINT8 rankID;
};
struct ClientRaidMarkersChanged
{
  /*  0..  1*/ UINT32 activeMarkers;
  /*  4..  1*/ UINT8 partyIndex;
  /*  8..  1*/ Array<JamCliRaidMarkerData> markerData;
};
struct PlayerCliNamedPointsCheat
{
};
struct ClientDebugDrawHideGraph
{
  /*  0..  1*/ BOOL hide;
  /*  4..  1*/ UINT32 id;
};
struct ClientGarrisonFollowerChangedItemLevel
{
  /*  0..  1*/ STRUCT follower;
};
struct ClientAreaSpiritHealerTime
{
  /*  0..  1*/ UINT64 healerGuid;
  /*  8..  1*/ INT32 timeLeft;
};
struct JamPetBattleRoundResult
{
  /*  0..  1*/ INT32 curRound;
  /*  4..  1*/ INT8 nextPetBattleState;
  /*  8..  1*/ Array<JamPetBattleEffect> effects;
  /* 20..  1*/ Array<INT8> petXDied;
  /* 38..  1*/ Array<JamPetBattleActiveAbility> cooldowns;
  /* 50..  1*/ FixedArray<UINT8, 2> nextInputFlags;
  /* 52..  1*/ FixedArray<INT8, 2> nextTrapStatus;
  /* 54..  1*/ FixedArray<UINT16, 2> roundTimeSecs;
};
struct PlayerCliPetLevelCheat
{
  /*  0..  1*/ UINT8 level;
};
struct PlayerMoveSetRunBackSpeedCheat
{
  /*  0..  1*/ FLOAT speed;
};
struct ClientLFGSearchResults
{
  /*  0..  1*/ BOOL incremental;
  /*  8..  1*/ Array<UINT64> removes;
  /* 20..  1*/ STRUCT ticket;
  /* 38..  1*/ UINT32 slotID;
  /* 3c..  1*/ UINT32 countTotalParties;
  /* 40..  1*/ UINT32 countTotalPlayers;
  /* 44..  1*/ UINT32 slotType;
  /* 48..  1*/ Array<ClientLFGSearchResultParty> parties;
  /* 60..  1*/ Array<ClientLFGSearchResultPlayer> players;
};
struct CliChatReportIgnored
{
  /*  0..  1*/ UINT64 ignoredGUID;
  /*  8..  1*/ UINT8 reason;
};
struct ClientInvalidatePlayer
{
  /*  0..  1*/ UINT64 guid;
};
struct CliChatLeaveChannel
{
  /*  0..  1*/ INT32 zoneChannelID;
  /*  4..  1*/ STRING channelName;
};
struct PlayerCliGuildBankUpdateTab
{
  /*  0..  1*/ STRING icon;
  /*101..  1*/ STRING name;
  /*142..  1*/ UINT8 bankTab;
  /*148..  1*/ UINT64 banker;
};
struct ClientPartyCommandResult
{
  /*  0..  1*/ STRING name;
  /*134..  1*/ UINT32 resultData;
  /*138..  1*/ UINT64 resultGUID;
  /*140..  1*/ UINT8 result;
  /*141..  1*/ UINT8 command;
};
struct PlayerCliGMTeachSpell
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ INT32 spellID;
};
struct JamAvailableCharacterTemplateClass
{
  /*  0..  1*/ UINT8 classID;
  /*  1..  1*/ UINT8 factionGroup;
};
struct JamVehicleTeleport
{
  /*  0..  1*/ UINT8 vehicleSeatIndex;
  /*  1..  1*/ BOOL vehicleExitVoluntary;
  /*  2..  1*/ BOOL vehicleExitTeleport;
};
struct ClientMasterLootCandidateList
{
  /*  0..  1*/ Array<UINT64> players;
  /* 18..  1*/ UINT64 lootObj;
};
struct UserRouterClientPing
{
  /*  0..  1*/ UINT32 serial;
  /*  4..  1*/ UINT32 latency;
};
struct ClientGarrisonAssignFollowerToBuildingResult
{
  /*  0..  1*/ UINT64 followerDBID;
  /*  8..  1*/ INT32 result;
  /*  c..  1*/ INT32 plotInstanceID;
};
struct ClientAuctionHelloResponse
{
  /*  0..  1*/ UINT64 auctioneer;
  /*  8..  1*/ BOOL openForBusiness;
};
struct PlayerCliQuestLogRemoveQuest
{
  /*  0..  1*/ UINT8 entry;
};
struct PlayerCliGetCaisTime
{
};
struct PlayerCliGetShipmentsOfTypeCheat
{
  /*  0..  1*/ INT32 containerID;
};
struct ClientGuildChallengeCompleted
{
  /*  0..  1*/ INT32 maxCount;
  /*  4..  1*/ INT32 challengeType;
  /*  8..  1*/ INT32 goldAwarded;
  /*  c..  1*/ INT32 xpAwarded;
  /* 10..  1*/ INT32 currentCount;
};
struct ClientNotifyMoney
{
  /*  0..  1*/ UINT64 money;
};
struct ClientMoveSetFlightSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ FLOAT speed;
  /*  c..  1*/ UINT32 sequenceIndex;
};
struct UserClientStartBattlegroundCheat
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ BOOL rated;
};
struct PlayerCliClearLFRLootLocks
{
};
struct ClientChallengeModeDeleteLeaderResult
{
  /*  0..  1*/ INT32 mapID;
  /*  4..  1*/ UINT32 attemptID;
  /*  8..  1*/ BOOL success;
};
struct CliChatGMChat
{
  /*  0..  1*/ STRING source;
  /*132..  1*/ STRING arguments;
  /*232..  1*/ STRING dest;
  /*368..  1*/ UINT64 target;
};
struct ClientGmRevealTo
{
  /*  0..  1*/ BOOL success;
};
struct PlayerCliGrantTitleCheat
{
  /*  0..  1*/ INT32 titleID;
  /*  4..  1*/ STRING titleName;
};
struct JamClientSpellDispellData
{
  /*  0..  1*/ INT32 spellID;
  /*  4..  1*/ BOOL harmful;
  /*  8..  1*/ Optional<INT32> rolled;
  /* 10..  1*/ Optional<INT32> needed;
};
struct UserClientSwapSubGroups
{
  /*  0..  1*/ UINT64 target1;
  /*  8..  1*/ UINT64 target2;
  /* 10..  1*/ UINT8 partyIndex;
};
struct ClientGMRequestPlayerInfo
{
  /*  0..  1*/ BOOL success;
  /*  1..  1*/ STRING name;
};
struct ClientDailyQuestsReset
{
  /*  0..  1*/ INT32 count;
};
struct ClientCalendarRaidLockoutRemoved
{
  /*  0..  1*/ UINT64 instanceID;
  /*  8..  1*/ INT32 mapID;
  /*  c..  1*/ UINT32 difficultyID;
};
struct PlayerCliTaxiNodeStatusQuery
{
  /*  0..  1*/ UINT64 unitGUID;
};
struct ClientVoiceSessionLeave
{
  /*  0..  1*/ UINT64 clientGUID;
  /*  8..  1*/ UINT64 sessionGUID;
};
struct GlobalGuildBankUnlockByGM
{
  /*  0..  1*/ STRING guildName;
};
struct UserClientLiveRegionGetAccountCharacterList
{
  /*  0..  1*/ STRING devRealmOverride;
  /*104..  1*/ UINT32 token;
  /*108..  1*/ STRING devCharOverride;
  /*139..  1*/ Optional<UINT8> regionID;
};
struct ClientBattlePayAckFailed
{
  /*  0..  1*/ UINT64 purchaseID;
  /*  8..  1*/ UINT32 status;
  /*  c..  1*/ UINT32 result;
  /* 10..  1*/ UINT32 serverToken;
};
struct JamPetBattleFinalRound
{
  /*  0..  1*/ BOOL abandoned;
  /*  1..  1*/ BOOL pvpBattle;
  /*  8..  1*/ Array<JamPetBattleFinalPet> pets;
  /* 20..  1*/ FixedArray<BOOL, 2> winners;
  /* 24..  1*/ FixedArray<INT32, 2> npcCreatureID;
};
struct PlayerCliDebugAreaTriggerServerShapes
{
  /*  0..  1*/ BOOL enable;
};
struct UserClientBattlePayConfirmPurchaseResponse
{
  /*  0..  1*/ UINT64 clientCurrentPriceFixedPoint;
  /*  8..  1*/ BOOL confirmPurchase;
  /*  c..  1*/ UINT32 serverToken;
};
struct ClientChatIgnoredAccountMuted
{
};
struct ClientMoveSetRunBackSpeed
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
  /*  c..  1*/ FLOAT speed;
};
struct PlayerMoveStop
{
  /*  0..  1*/ STRUCT status;
};
struct ClientChallengeModeMapStatsUpdate
{
  /*  0..  1*/ STRUCT mapData;
};
struct PlayerMoveSetWalkMode
{
  /*  0..  1*/ STRUCT status;
};
struct ClientArenaError
{
  /*  0..  1*/ ARENA_ERROR_TYPE errorType;
  /*  4..  1*/ UINT8 teamSize;
};
struct UserClientReadyForAccountDataTimes
{
};
struct PlayerCliGMPhaseRemove
{
  /*  0..  1*/ Array<UINT16> phaseID;
};
struct ClientItemCooldown
{
  /*  0..  1*/ UINT64 itemGuid;
  /*  8..  1*/ UINT32 spellID;
};
struct PlayerCliGarrisonRemoveBuildingCheat
{
  /*  0..  1*/ INT32 plotInstanceID;
};
struct ClientGuildRanks
{
  /*  0..  1*/ Array<JamCliGuildRankData> ranks;
};
struct PlayerCliDestroyShadowPlayers
{
};
struct ClientRequestCemeteryListResponse
{
  /*  0..  1*/ BOOL isGossipTriggered;
  /*  8..  1*/ Array<UINT32> cemeteryID;
};
struct PlayerCliIgnoreTrade
{
};
struct ClientDisplayPromotion
{
  /*  0..  1*/ INT32 promotionID;
};
struct ClientChatNotInParty
{
  /*  0..  1*/ UINT32 slashCmd;
};
struct ClientGameObjectResetState
{
  /*  0..  1*/ UINT64 objectGUID;
};
struct PlayerCliSetSpecialization
{
  /*  0..  1*/ UINT32 specGroupIndex;
};
struct JamPetBattleMaxGameLengthWarning
{
  /*  0..  1*/ TIME_T timeRemaining;
  /*  8..  1*/ INT32 roundsRemaining;
};
struct PetSpellCooldown
{
  /*  0..  1*/ INT32 spellID;
  /*  4..  1*/ INT32 duration;
  /*  8..  1*/ INT32 categoryDuration;
  /*  c..  1*/ UINT16 category;
};
struct ClientVoidStorageContents
{
  /*  0..  1*/ Array<JamVoidItem> items;
};
struct ClientCalendarEventInviteRemoved
{
  /*  0..  1*/ BOOL clearPending;
  /*  4..  1*/ UINT32 flags;
  /*  8..  1*/ UINT64 inviteGUID;
  /* 10..  1*/ UINT64 eventID;
};
struct ClientCalendarSendCalendar
{
  /*  0..  1*/ Array<ClientCalendarSendCalendarEventInfo> events;
  /* 18..  1*/ Array<ClientCalendarSendCalendarRaidResetInfo> raidResets;
  /* 30..  1*/ Array<ClientCalendarSendCalendarRaidLockoutInfo> raidLockouts;
  /* 48..  1*/ Array<ClientCalendarSendCalendarHolidayInfo> holidays;
  /* 60..  1*/ TIME_T raidOrigin;
  /* 68..  1*/ Array<ClientCalendarSendCalendarInviteInfo> invites;
  /* 80..  1*/ UINT32 serverTime;
  /* 88..  1*/ TIME_T serverNow;
};
struct PlayerCliSpellClick
{
  /*  0..  1*/ UINT64 spellClickUnitGUID;
  /*  8..  1*/ BOOL tryAutoDismount;
};
struct JamGuildMemberSetNoteData
{
  /*  0..  1*/ UINT64 noteeGUID;
  /*  8..  1*/ STRING note;
  /* 89..  1*/ BOOL isPublic;
};
struct CliChatReportFiltered
{
  /*  0..  1*/ UINT64 filteredSenderGUID;
};
struct ClientShowTradeSkillResponse
{
  /*  0..  1*/ STRUCT skillLineData;
  /* 68..  1*/ UINT64 playerGUID;
};
struct PlayerCliRequestVehicleSwitchSeat
{
  /*  0..  1*/ UINT64 vehicle;
  /*  8..  1*/ UINT8 seatIndex;
};
struct ClientChatAutoResponded
{
  /*  0..  1*/ BOOL isDND;
  /*  4..  1*/ UINT32 realmAddress;
  /*  8..  1*/ STRING afkMessage;
};
struct UserClientUITimeRequest
{
};
struct ClientMoveUpdatePitchRate
{
  /*  0..  1*/ FLOAT speed;
  /*  8..  1*/ STRUCT status;
};
struct PlayerCliDebugGameEventsToggle
{
};
struct ClientPetBattleInitialUpdate
{
  /*  0..  1*/ STRUCT msgData;
};
struct PlayerClientPortGraveyard
{
};
struct UserClientSendMail
{
  /*  0..  1*/ STRUCT info;
};
struct JamCliPageTextInfo
{
  /*  0..  1*/ UINT32 ID;
  /*  4..  1*/ UINT32 nextPageID;
  /*  8..  1*/ STRING text;
};
struct PlayerCliNoSpellVariance
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ BOOL enable;
};
struct JamGuildBankTabInfo
{
  /*  0..  1*/ INT32 tabIndex;
  /*  4..  1*/ STRING name;
  /* 45..  1*/ STRING icon;
};
struct ClientInstanceEncounterTimerStart
{
  /*  0..  1*/ INT32 timeRemaining;
};
struct UserClientFinishQuest
{
  /*  0..  1*/ UINT32 questID;
  /*  4..  1*/ STRING target;
};
struct JamLocation
{
  /*  0..  1*/ UINT64 transport;
  /*  8..  1*/ V3 location;
};
struct PlayerProgressiveEventCheat
{
  /*  0..  1*/ PROGRESSIVE_EVENT_CHEAT type;
  /*  4..  1*/ INT32 itemID;
  /*  8..  1*/ INT32 count;
  /*  c..  1*/ INT32 eventID;
};
struct ClientGuildMemberRecipes
{
  /*  0..  1*/ UINT64 member;
  /*  8..  1*/ INT32 skillRank;
  /*  c..  1*/ INT32 skillLineID;
  /* 10..  1*/ INT32 skillStep;
  /* 14..  1*/ FixedArray<UINT8, 300> skillLineBitArray;
};
struct UserClientGMCreateTicketResponse
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ STRING arguments;
};
struct CliChatChannelSilenceAll
{
  /*  0..  1*/ STRING name;
  /*132..  1*/ STRING channelName;
};
struct ClientItemUpgradeResult
{
  /*  0..  1*/ BOOL result;
};
struct PlayerTimeSyncResponse
{
  /*  0..  1*/ UINT32 clientTime;
  /*  4..  1*/ UINT32 sequenceIndex;
};
struct UserClientGMGuildSave
{
  /*  0..  1*/ STRING name;
};
struct ClientGameTimeSet
{
  /*  0..  1*/ UINT32 serverTime;
  /*  4..  1*/ INT32 gameTimeHolidayOffset;
  /*  8..  1*/ INT32 serverTimeHolidayOffset;
  /*  c..  1*/ UINT32 gameTime;
};
struct JamCliStructAddonPrefix
{
  /*  0..  1*/ STRING name;
};
struct JamTransmogrifyItem
{
  /*  0..  1*/ Optional<UINT64> srcItemGUID;
  /* 10..  1*/ Optional<UINT64> srcVoidItemGUID;
  /* 20..  1*/ INT32 itemID;
  /* 24..  1*/ UINT32 slot;
};
struct UserClientSetRaidDifficulty
{
  /*  0..  1*/ INT32 difficultyID;
};
struct ClientDumpRideTicket
{
  /*  0..  1*/ STRING description;
};
struct ClientActivateTaxiReply
{
  /*  0..  1*/ TAXIREPLY error;
};
struct PlayerCliSetWorldState
{
  /*  0..  1*/ INT32 variableID;
  /*  4..  1*/ INT32 value;
};
struct GlobalGuildPromoteMember
{
  /*  0..  1*/ UINT64 promotee;
};
struct JamGuildBankSocketEnchant
{
  /*  0..  1*/ INT32 socketIndex;
  /*  4..  1*/ INT32 socketEnchantID;
};
struct ClientLfgBootPlayer
{
  /*  0..  1*/ STRUCT info;
};
struct PlayerCliScenePlaybackComplete
{
  /*  0..  1*/ UINT32 sceneInstanceID;
};
struct JamClientMOTDStruct
{
  /*  0..  1*/ STRING line;
};
struct JamSpellPowerData
{
  /*  0..  1*/ INT32 cost;
  /*  4..  1*/ INT8 type;
};
struct PlayerCliConquestAwardArenaCheat
{
};
struct JamClientPetBattleSlot
{
  /*  0..  1*/ UINT64 battlePetGUID;
  /*  8..  1*/ INT32 collarID;
  /*  c..  1*/ UINT8 slotIndex;
  /*  d..  1*/ BOOL locked;
};
struct ClientMoveEnableTransitionBetweenSwimAndFly
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct PlayerCliAutoStoreBagItem
{
  /*  0..  1*/ UINT8 containerSlotB;
  /*  8..  1*/ STRUCT inv;
  /* 20..  1*/ UINT8 containerSlotA;
  /* 21..  1*/ UINT8 slotA;
};
struct ClientSellResponse
{
  /*  0..  1*/ UINT64 vendorGUID;
  /*  8..  1*/ UINT64 itemGUID;
  /* 10..  1*/ UINT8 reason;
};
struct UserClientGetLuckFactor
{
};
struct PlayerCliShowingHelm
{
  /*  0..  1*/ BOOL showHelm;
};
struct CliChatRegisterAddonPrefixes
{
  /*  0..  1*/ Array<JamCliStructAddonPrefix> prefixes;
};
struct ClientOpenShipmentNPCFromGossip
{
  /*  0..  1*/ UINT64 npcGUID;
  /*  8..  1*/ INT32 charShipmentContainerID;
};
struct JamMissileTrajectoryRequest
{
  /*  0..  1*/ FLOAT pitch;
  /*  4..  1*/ FLOAT speed;
};
struct PlayerCliLFGCompleteDungeon
{
};
struct ClientEnumCharactersResult
{
  /*  0..  1*/ Array<JamClientCharacterListEntry> characters;
  /* 18..  1*/ BOOL success;
  /* 20..  1*/ Array<JamClientRestrictedFactionChangeRule> factionChangeRestrictions;
  /* 38..  1*/ BOOL isDeletedCharacters;
};
struct UserClientGmResetInstanceLimit
{
};
struct ClientMoveSplineSetWaterWalk
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct JamCliInspectGuildData
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ INT64 guildXP;
  /* 10..  1*/ INT32 guildLevel;
  /* 14..  1*/ INT32 numGuildMembers;
};
struct ClientCreateChar
{
  /*  0..  1*/ UINT8 code;
};
struct ClientMoveUpdateRunBackSpeed
{
  /*  0..  1*/ FLOAT speed;
  /*  8..  1*/ STRUCT status;
};
struct PlayerCliBFMgrQueueRequest
{
  /*  0..  1*/ UINT64 queueID;
};
struct JamPetBattleActiveAbility
{
  /*  0..  1*/ INT32 abilityID;
  /*  4..  1*/ INT16 cooldownRemaining;
  /*  6..  1*/ INT16 lockdownRemaining;
  /*  8..  1*/ INT8 abilityIndex;
  /*  9..  1*/ UINT8 pboid;
};
struct JamRuneData
{
  /*  0..  1*/ UINT8 start;
  /*  1..  1*/ UINT8 count;
  /*  8..  1*/ Array<UINT8> cooldowns;
};
struct ClientGuildEventTabModified
{
  /*  0..  1*/ STRING icon;
  /*104..  1*/ INT32 tab;
  /*108..  1*/ STRING name;
};
struct ClientPlaySpellVisualKit
{
  /*  0..  1*/ UINT64 unit;
  /*  8..  1*/ INT32 kitType;
  /*  c..  1*/ UINT32 duration;
  /* 10..  1*/ INT32 kitRecID;
};
struct UserClientStartSpectatorWarGame
{
  /*  0..  1*/ UINT32 opposingPartyMemberCfgRealmID1;
  /*  8..  1*/ UINT64 opposingPartyMember1;
  /* 10..  1*/ UINT32 opposingPartyMemberVirtualRealmAddress1;
  /* 18..  1*/ UINT64 queueID;
  /* 20..  1*/ UINT32 opposingPartyMemberCfgRealmID2;
  /* 24..  1*/ UINT32 opposingPartyMemberVirtualRealmAddress2;
  /* 28..  1*/ UINT64 opposingPartyMember2;
  /* 30..  1*/ BOOL tournamentRules;
};
struct PlayerMoveSetWalkSpeedCheat
{
  /*  0..  1*/ FLOAT speed;
};
struct ClientQueryObjPosition
{
  /*  0..  1*/ FLOAT facing;
  /*  4..  1*/ V3 position;
  /* 10..  1*/ UINT32 mapID;
  /* 14..  1*/ BOOL toClipboard;
};
struct ClientTurnInPetitionResult
{
  /*  0..  1*/ PETITION_ERROR result;
};
struct CliChatMessageChannel
{
  /*  0..  1*/ INT32 language;
  /*  4..  1*/ STRING text;
  /*104..  1*/ STRING target;
};
struct PlayerCliResetYearlyQuest
{
  /*  0..  1*/ INT32 questID;
};
struct JSONBnetChallengeSubmissionInput
{
  /*  0..  1*/ STRING input_id;
  /* 48..  1*/ DYNAMICSTRING value;
};
struct ClientUnlearnedSpells
{
  /*  0..  1*/ Array<INT32> spellID;
};
struct ClientQuestGiverQuestListMessage
{
  /*  0..  1*/ INT32 greetEmoteDelay;
  /*  4..  1*/ INT32 greetEmoteType;
  /*  8..  1*/ UINT64 questGiverGUID;
  /* 10..  1*/ Array<ClientGossipText> questDataText;
  /* 28..  1*/ STRING greeting;
};
struct ClientAIReaction
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ INT32 reaction;
};
struct PlayerCliAuctionListBidderItems
{
  /*  0..  1*/ UINT32 offset;
  /*  8..  1*/ Array<UINT32> auctionItemIDs;
  /* 20..  1*/ UINT64 auctioneer;
};
struct ClientMoveUpdateWalkSpeed
{
  /*  0..  1*/ STRUCT status;
  /* a8..  1*/ FLOAT speed;
};
struct ClientGarrisonRemoteInfo
{
  /*  0..  1*/ STRUCT info;
};
struct PlayerCliRequestPlayedTime
{
  /*  0..  1*/ BOOL triggerScriptEvent;
};
struct PlayerCliSelfRes
{
};
struct ClientSetCurrency
{
  /*  0..  1*/ BOOL suppressChatLog;
  /*  4..  1*/ Optional<INT32> trackedQuantity;
  /*  c..  1*/ INT32 quantity;
  /* 10..  1*/ UINT32 flags;
  /* 14..  1*/ INT32 type;
  /* 18..  1*/ Optional<INT32> weeklyQuantity;
};
struct ClientMoveEnableCollision
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct UserClientDFTeleport
{
  /*  0..  1*/ BOOL teleportOut;
};
struct ClientAreaTriggerReShape
{
  /*  0..  1*/ STRUCT areaTriggerPolygon;
  /* 38..  1*/ UINT64 triggerGUID;
};
struct ClientQuestPushResult
{
  /*  0..  1*/ UINT64 senderGUID;
  /*  8..  1*/ UINT8 result;
};
struct PlayerMoveRemoveMovementForces
{
  /*  0..  1*/ STRUCT status;
};
struct ClientServerBuckDataStart
{
  /*  0..  1*/ UINT32 requestID;
  /*  4..  1*/ UINT8 mpid;
  /*  5..  1*/ UINT8 numVServers;
};
struct AddPvpMedalCheat
{
  /*  0..  1*/ INT32 medal;
};
struct PlayerCliCancelTrade
{
};
struct PlayerCliInitiateTrade
{
  /*  0..  1*/ UINT64 guid;
};
struct CliChatAddonMessageChannel
{
  /*  0..  1*/ STRING text;
  /*100..  1*/ STRING target;
  /*232..  1*/ STRING prefix;
};
struct PlayerCliGarrisonRemoveFollowerCheat
{
  /*  0..  1*/ UINT64 followerDBID;
};
struct ClientGuildBankLogQueryResults
{
  /*  0..  1*/ Optional<UINT64> weeklyBonusMoney;
  /* 10..  1*/ Array<JamGuildBankLogEntry> entry;
  /* 28..  1*/ INT32 tab;
};
struct ClientDisplayGameError
{
  /*  0..  1*/ Optional<INT32> arg2;
  /*  8..  1*/ Optional<INT32> arg;
  /* 10..  1*/ UINT32 error;
};
struct PlayerCliSetRulesetQuery
{
};
struct UserClientBugReport
{
  /*  0..  1*/ REPORT_TYPE type;
  /*  4..  1*/ STRING text;
  /*3ec..  1*/ STRING diagInfo;
};
struct ClientAddonInfo
{
  /*  0..  1*/ Array<JamBannedAddonInfo> bannedAddons;
  /* 18..  1*/ Array<JamAddonInfo> addons;
};
struct ClientPartyUpdate
{
  /*  0..  1*/ UINT8 partyFlags;
  /*  8..  1*/ Optional<JamCliPartyLootSettings> lootSettings;
  /* 20..  1*/ Optional<JamCliPartyLFGInfo> lfgInfo;
  /* 40..  1*/ UINT64 leaderGUID;
  /* 48..  1*/ UINT8 partyType;
  /* 50..  1*/ UINT64 partyGUID;
  /* 58..  1*/ UINT8 partyIndex;
  /* 60..  1*/ Array<JamCliPartyPlayerInfo> playerList;
  /* 78..  1*/ UINT32 sequenceNum;
  /* 7c..  1*/ Optional<JamCliPartyDifficultySettings> difficultySettings;
  /* 88..  1*/ INT32 myIndex;
};
struct PlayerCliIgnoreRequirementsCheat
{
  /*  0..  1*/ BOOL enable;
};
struct JamMissileTrajectoryResult
{
  /*  0..  1*/ UINT32 travelTime;
  /*  4..  1*/ FLOAT pitch;
};
struct ClientLFGProposalUpdatePlayer
{
  /*  0..  1*/ UINT32 roles;
  /*  4..  1*/ BOOL me;
  /*  5..  1*/ BOOL sameParty;
  /*  6..  1*/ BOOL myParty;
  /*  7..  1*/ BOOL responded;
  /*  8..  1*/ BOOL accepted;
};
struct ClientQuestUpdateAddCredit
{
  /*  0..  1*/ UINT64 victimGUID;
  /*  8..  1*/ INT32 objectID;
  /*  c..  1*/ INT32 questID;
  /* 10..  1*/ UINT16 count;
  /* 12..  1*/ UINT16 required;
  /* 14..  1*/ UINT8 objectiveType;
};
struct ClientIncreaseCastTimeForSpell
{
  /*  0..  1*/ UINT64 caster;
  /*  8..  1*/ UINT32 castTime;
  /*  c..  1*/ INT32 spellID;
};
struct ClientWhoIs
{
  /*  0..  1*/ STRING accountName;
};
struct PlayerCliGuildBankActivate
{
  /*  0..  1*/ UINT64 banker;
  /*  8..  1*/ BOOL fullUpdate;
};
struct ClientUpdateTaskProgress
{
  /*  0..  1*/ Array<JamClientTaskProgress> progress;
};
struct CliChatMessageWhisper
{
  /*  0..  1*/ STRING target;
  /*132..  1*/ STRING text;
  /*234..  1*/ INT32 language;
};
struct PlayerCliListTargets
{
  /*  0..  1*/ UINT64 unitGUID;
};
struct UserClientBattlePayGetProductList
{
};
struct ClientQuestLogFull
{
};
struct ClientMoveSetNormalFall
{
  /*  0..  1*/ UINT64 moverGUID;
  /*  8..  1*/ UINT32 sequenceIndex;
};
struct ClientLootRelease
{
  /*  0..  1*/ UINT64 lootObj;
  /*  8..  1*/ UINT64 owner;
};
struct ClientForcedDeathUpdate
{
};
struct UserClientSetCurrencyCheat
{
  /*  0..  1*/ UINT64 targetGUID;
  /*  8..  1*/ INT32 type;
  /*  c..  1*/ INT32 quantity;
  /* 10..  1*/ INT8 isDelta;
  /* 11..  1*/ INT8 column;
};
struct ClientAchievementDeleted
{
  /*  0..  1*/ INT32 immunities;
  /*  4..  1*/ INT32 achievementID;
};
struct PlayerCliInspect
{
  /*  0..  1*/ UINT64 target;
};
struct ClientReadyCheckStarted
{
  /*  0..  1*/ UINT8 partyIndex;
  /*  8..  1*/ UINT64 initiatorGUID;
  /* 10..  1*/ UINT64 partyGUID;
  /* 18..  1*/ TIME_T duration;
};
struct UserClientPetBattleInput
{
  /*  0..  1*/ STRUCT msgData;
};
struct PlayerCliOpenShipmentNPC
{
  /*  0..  1*/ UINT64 npcGUID;
};
struct ClientLFGuildCommandResult
{
  /*  0..  1*/ INT32 commandID;
  /*  4..  1*/ INT8 success;
};
struct JamSpellAmmo
{
  /*  0..  1*/ INT32 displayID;
  /*  4..  1*/ INT8 inventoryType;
};
struct ClientPetStableList
{
  /*  0..  1*/ Array<ClientPetStableInfo> pets;
  /* 18..  1*/ UINT64 stableMaster;
};
struct UserClientCalendarGetEvent
{
  /*  0..  1*/ UINT64 eventID;
};
struct ClientCanDuelResult
{
  /*  0..  1*/ BOOL result;
  /*  8..  1*/ UINT64 targetGUID;
};
struct ClientBinderConfirm
{
  /*  0..  1*/ UINT64 unit;
};
struct ClientSetFactionVisible
{
  /*  0..  1*/ INT32 factionIndex;
};
struct PlayerCliSendSceneObjectEventCheat
{
  /*  0..  1*/ UINT64 sceneObjGUID;
  /*  8..  1*/ STRUCT sceneEvent;
};
struct CliChatAddonMessageWhisper
{
  /*  0..  1*/ STRING prefix;
  /* 11..  1*/ STRING target;
  /*143..  1*/ STRING text;
};
struct JamLFGListBlacklist
{
  /*  0..  1*/ Array<JamLFGListBlacklistEntry> entries;
};
struct ClientCategoryCooldown
{
  /*  0..  1*/ Array<JamCategoryCooldown> categoryCooldowns;
};
struct ClientAreaTriggerMovementUpdate
{
  /*  0..  1*/ V3 start;
  /*  c..  1*/ V3 end;
};
struct ClientCalendarEventUpdatedAlert
{
  /*  0..  1*/ UINT8 eventType;
  /*  4..  1*/ UINT32 originalDate;
  /*  8..  1*/ BOOL clearPending;
  /* 10..  1*/ UINT64 eventID;
  /* 18..  1*/ STRING description;
  /*41c..  1*/ UINT32 flags;
  /*420..  1*/ INT32 textureID;
  /*424..  1*/ STRING eventName;
  /*4a8..  1*/ UINT32 lockDate;
  /*4ac..  1*/ UINT32 date;
};
struct PlayerCliListInventory
{
  /*  0..  1*/ UINT64 vendorGUID;
};
struct UserClientGMGearRating
{
};
struct GlobalGuildBankLogQuery
{
  /*  0..  1*/ INT32 tab;
};
struct ClientBattlePayStartDistributionAssignToTargetResponse
{
  /*  0..  1*/ UINT64 distributionID;
  /*  8..  1*/ UINT32 clientToken;
  /*  c..  1*/ UINT32 result;
};
struct ClientDebugDrawDisk
{
  /*  0..  1*/ FLOAT lifetime;
  /*  4..  1*/ V3 normal;
  /* 10..  1*/ FLOAT outterradius;
  /* 14..  1*/ V3 center;
  /* 20..  1*/ UINT32 settings;
  /* 24..  1*/ UINT32 color;
  /* 28..  1*/ FLOAT innerradius;
  /* 2c..  1*/ UINT32 id;
};
struct PlayerCliSetHealthSafe
{
  /*  0..  1*/ UINT64 target;
  /*  8..  1*/ INT32 procType;
  /*  c..  1*/ INT32 health;
  /* 10..  1*/ INT32 procSubType;
};
struct PlayerCliQueryNextMailTime
{
};
struct JamMapChallengeModeReward
{
  /*  0..  1*/ INT32 mapID;
  /*  8..  1*/ Array<JamChallengeModeReward> rewardsPerMedal;
};
struct PlayerMoveStartPitchUp
{
  /*  0..  1*/ STRUCT status;
};
struct CliChatChannelUnsilenceAll
{
  /*  0..  1*/ STRING channelName;
  /* 80..  1*/ STRING name;
};
struct ClientThreatUpdate
{
  /*  0..  1*/ UINT64 unitGUID;
  /*  8..  1*/ Array<ThreatInfo> threatList;
};
struct PlayerCliInstanceLockResponse
{
  /*  0..  1*/ BOOL acceptLock;
};
struct ClientReplaceTrophyResponse
{
  /*  0..  1*/ BOOL success;
};
struct PlayerCliServerTime
{
};
struct PlayerCliGarrisonDeleteCheat
{
  /*  0..  1*/ INT32 garrSiteID;
};
struct ClientGuildCriteriaDeleted
{
  /*  0..  1*/ UINT64 guildGUID;
  /*  8..  1*/ INT32 criteriaID;
};
struct ClientBFMgrEjectPending
{
  /*  0..  1*/ UINT64 queueID;
  /*  8..  1*/ BOOL remote;
};
struct ClientGMTicketGetTicketResponse
{
  /*  0..  1*/ Optional<JamClientGMTicketInfo> info;
  /*c00..  1*/ INT32 result;
};
struct PlayerCliOpeningCinematic
{
};
struct ClientStandStateUpdate
{
  /*  0..  1*/ UINT8 state;
};
struct PlayerCliClearRaidMarker
{
  /*  0..  1*/ UINT8 index;
};
struct ClientDebugDrawSlice
{
  /*  0..  1*/ V3 direction;
  /*  c..  1*/ V3 center;
  /* 18..  1*/ FLOAT endAngle;
  /* 1c..  1*/ UINT32 color;
  /* 20..  1*/ FLOAT outterradius;
  /* 24..  1*/ FLOAT innerradius;
  /* 28..  1*/ FLOAT startAngle;
  /* 2c..  1*/ FLOAT lifetime;
  /* 30..  1*/ UINT32 id;
  /* 34..  1*/ V3 normal;
  /* 40..  1*/ UINT32 settings;
};
struct JamCreatureImmunities
{
  /*  0..  1*/ INT32 school;
  /*  4..  1*/ INT32 value;
};
struct ClientMapObjEvents
{
  /*  0..  1*/ UINT32 uniqueID;
  /*  8..  1*/ NOT_IMPLEMENTED events;
};
struct ClientCalendarSendCalendarEventInfo
{
  /*  0..  1*/ UINT64 eventID;
  /*  8..  1*/ STRING eventName;
  /* 89..  1*/ UINT8 eventType;
  /* 8c..  1*/ UINT32 date;
  /* 90..  1*/ UINT32 flags;
  /* 94..  1*/ INT32 textureID;
  /* 98..  1*/ UINT64 eventGuildID;
  /* a0..  1*/ UINT64 ownerGUID;
};
struct PlayerCliPetSpellAutocast
{
  /*  0..  1*/ UINT64 petGUID;
  /*  8..  1*/ BOOL autocastEnabled;
  /*  c..  1*/ INT32 spellID;
};
struct ClientItemPushResult
{
  /*  0..  1*/ UINT32 battlePetBreedQuality;
  /*  8..  1*/ UINT64 itemGUID;
  /* 10..  1*/ INT32 slotInBag;
  /* 14..  1*/ INT32 quantityInInventory;
  /* 18..  1*/ INT32 quantity;
  /* 1c..  1*/ BOOL pushed;
  /* 1d..  1*/ BOOL displayText;
  /* 20..  1*/ INT32 battlePetLevel;
  /* 24..  1*/ UINT8 slot;
  /* 25..  1*/ BOOL created;
  /* 28..  1*/ INT32 battlePetBreedID;
  /* 2c..  1*/ BOOL isBonusRoll;
  /* 30..  1*/ UINT64 playerGUID;
  /* 38..  1*/ STRUCT item;
  /* 98..  1*/ INT32 battlePetSpeciesID;
};
struct GlobalGuildNewsUpdateSticky
{
  /*  0..  1*/ INT32 newsID;
  /*  8..  1*/ UINT64 guildGUID;
  /* 10..  1*/ BOOL sticky;
};
struct ClientPlayObjectSound
{
  /*  0..  1*/ UINT64 targetObjectGUID;
  /*  8..  1*/ UINT64 sourceObjectGUID;
  /* 10..  1*/ INT32 soundKitID;
};
struct PlayerCliRemoveItemCollectionItem
{
  /*  0..  1*/ INT32 itemCollectionType;
  /*  4..  1*/ INT32 itemID;
};
struct CliChatAddonMessageGuild
{
  /*  0..  1*/ STRING prefix;
  /* 11..  1*/ STRING text;
};
struct ClientRaidInstanceMessage
{
  /*  0..  1*/ UINT8 type;
  /*  4..  1*/ UINT32 difficultyID;
  /*  8..  1*/ UINT32 mapID;
  /*  c..  1*/ BOOL locked;
  /* 10..  1*/ INT32 timeLeft;
  /* 14..  1*/ BOOL extended;
};
struct UserClientQueryScenarioPOI
{
  /*  0..  1*/ Array<INT32> missingScenarioPOITreeIDs;
};
struct ClientMoveUpdateSwimBackSpeed
{
  /*  0..  1*/ STRUCT status;
  /* a8..  1*/ FLOAT speed;
};
struct ClientReadyCheckCompleted
{
  /*  0..  1*/ UINT64 partyGUID;
  /*  8..  1*/ UINT8 partyIndex;
};
struct UserClientQueryGuildInfo
{
  /*  0..  1*/ UINT64 playerGuid;
  /*  8..  1*/ UINT64 guildGuid;
};
struct ClientPowerUpdatePower
{
  /*  0..  1*/ INT32 power;
  /*  4..  1*/ UINT8 powerType;
};
struct PlayerCliTotemDestroyed
{
  /*  0..  1*/ UINT64 totemGUID;
  /*  8..  1*/ UINT8 slot;
};
struct ClientRaidGroupOnly
{
  /*  0..  1*/ UINT32 reason;
  /*  4..  1*/ INT32 delay;
};
struct ClientDebugDrawArrow
{
  /*  0..  1*/ FLOAT headscale;
  /*  4..  1*/ UINT32 settings;
  /*  8..  1*/ FLOAT lifetime;
  /*  c..  1*/ V3 location;
  /* 18..  1*/ UINT32 color;
  /* 1c..  1*/ V3 direction;
  /* 28..  1*/ UINT32 id;
  /* 2c..  1*/ FLOAT length;
};
struct PlayerCliCheatItemLevelDelta
{
  /*  0..  1*/ INT32 itemLevelDelta;
};
struct ClientGuildRosterProfessionData
{
  /*  0..  1*/ INT32 dbID;
  /*  4..  1*/ INT32 rank;
  /*  8..  1*/ INT32 step;
};
struct JamPetBattleActiveAura
{
  /*  0..  1*/ INT32 abilityID;
  /*  4..  1*/ UINT32 instanceID;
  /*  8..  1*/ INT32 roundsRemaining;
  /*  c..  1*/ INT32 currentRound;
  /* 10..  1*/ UINT8 casterPBOID;
};
struct JamProjectileVisual
{
  /*  0..  1*/ FixedArray<INT32, 2> id;
};
struct ClientPetBattleQueueStatus
{
  /*  0..  1*/ INT32 status;
  /*  8..  1*/ Array<INT32> slotResult;
  /* 20..  1*/ STRUCT ticket;
  /* 38..  1*/ Optional<TIME_T> averageWaitTime;
  /* 48..  1*/ Optional<TIME_T> clientWaitTime;
};
struct PlayerCliAttackStop
{
};
struct ClientSpellModifierData
{
  /*  0..  1*/ FLOAT modifierValue;
  /*  4..  1*/ UINT8 classIndex;
};
struct ClientCommentatorPlayerInfo
{
  /*  0..  1*/ UINT32 mapID;
  /*  8..  1*/ Array<CommentatorPlayerInfo> playerInfo;
  /* 20..  1*/ UINT64 instanceID;
  /* 28..  1*/ JAMSERVERSPEC worldServer;
};
struct PlayerCliStandStateChange
{
  /*  0..  1*/ UINT32 standState;
};
struct CliChatMessageOfficer
{
  /*  0..  1*/ INT32 language;
  /*  4..  1*/ STRING text;
};
struct ClientLoadCUFProfiles
{
  /*  0..  1*/ Array<JamCliCUFProfile> profiles;
};
struct UserClientRequestBattlefieldStatus
{
};
struct ClientShowZonesCheatResult
{
  /*  0..  1*/ Array<ShowZoneRLE> run;
};
struct GlobalGuildNewsCreateCheat
{
  /*  0..  1*/ UINT64 guild;
  /*  8..  1*/ UINT32 dateOffset;
  /*  c..  1*/ UINT32 data;
  /* 10..  1*/ UINT32 newsType;
};
struct ClientBattlegroundPoints
{
  /*  0..  1*/ UINT16 points;
  /*  2..  1*/ UINT8 team;
};
struct PlayerCliPushItemsFromTreasure
{
  /*  0..  1*/ UINT32 treasureID;
  /*  4..  1*/ STRUCT lootItemContext;
};
struct ClientQueryGameObjectResponse
{
  /*  0..  1*/ UINT32 gameObjectID;
  /*  4..  1*/ BOOL allow;
  /*  8..  1*/ NOT_IMPLEMENTED stats;
};
struct JamSpellTargetData
{
  /*  0..  1*/ UINT32 flags;
  /*  8..  1*/ UINT64 unit;
  /* 10..  1*/ UINT64 item;
  /* 18..  1*/ Optional<JamLocation> srcLocation;
  /* 38..  1*/ Optional<JamLocation> dstLocation;
  /* 58..  1*/ STRING name;
};
struct JamClientBattlePetOwnerInfo
{
  /*  0..  1*/ UINT64 guid;
  /*  8..  1*/ UINT32 playerVirtualRealm;
  /*  c..  1*/ UINT32 playerNativeRealm;
};
struct PlayerCliSavePlayer
{
};
struct ClientReferAFriendFailure
{
  /*  0..  1*/ STRING str;
  /* 34..  1*/ INT32 reason;
};
struct PlayerCliEnableDamageLog
{
  /*  0..  1*/ BOOL on;
};
struct ClientCapturePointRemoved
{
  /*  0..  1*/ UINT64 capturePointGUID;
};
struct ClientGarrisonRemoveFollowerFromBuildingResult
{
  /*  0..  1*/ UINT64 followerDBID;
  /*  8..  1*/ INT32 result;
};
struct PlayerCliSummonMob
{
  /*  0..  1*/ UINT64 targetGUID;
};
struct CliChatAddonMessageOfficer
{
  /*  0..  1*/ STRING text;
  /*100..  1*/ STRING prefix;
};
struct ClientTradeStatus
{
  /*  0..  1*/ TRADE_STATUS status;
  /*  4..  1*/ UINT8 tradeSlot;
  /*  8..  1*/ UINT64 partner;
  /* 10..  1*/ INT32 currencyType;
  /* 14..  1*/ INT32 currencyQuantity;
  /* 18..  1*/ BOOL failureForYou;
  /* 1c..  1*/ INT32 bagResult;
  /* 20..  1*/ INT32 itemID;
  /* 24..  1*/ UINT32 ID;
  /* 28..  1*/ BOOL partnerIsSameBnetAccount;
};
struct PlayerCliHearthAndResurrect
{
};
struct ClientMoveSplineSetFeatherFall
{
  /*  0..  1*/ UINT64 moverGUID;
};
struct ClientSendRaidTargetUpdateSingle
{
  /*  0..  1*/ UINT64 changedBy;
  /*  8..  1*/ UINT64 target;
  /* 10..  1*/ UINT8 partyIndex;
  /* 11..  1*/ UINT8 symbol;
};
