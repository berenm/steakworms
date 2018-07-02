#include "steakworms.hpp"

EResult ISteamInventory::GetResultStatus(SteamInventoryResult_t resultHandle) {
  debug("ISteamInventory::GetResultStatus()");
  return {};
}

bool ISteamInventory::GetResultItems(SteamInventoryResult_t     resultHandle,
                                     struct SteamItemDetails_t *pOutItemsArray,
                                     uint32 *punOutItemsArraySize) {
  debug("ISteamInventory::GetResultItems()");
  return true;
}

bool ISteamInventory::GetResultItemProperty(SteamInventoryResult_t resultHandle,
                                            uint32                 unItemIndex,
                                            const char *pchPropertyName,
                                            char *      pchValueBuffer,
                                            uint32 *    punValueBufferSizeOut) {
  debug("ISteamInventory::GetResultItemProperty()");
  return true;
}

uint32
ISteamInventory::GetResultTimestamp(SteamInventoryResult_t resultHandle) {
  debug("ISteamInventory::GetResultTimestamp()");
  return 0;
}

bool ISteamInventory::CheckResultSteamID(SteamInventoryResult_t resultHandle,
                                         CSteamID steamIDExpected) {
  debug("ISteamInventory::CheckResultSteamID()");
  return true;
}

void ISteamInventory::DestroyResult(SteamInventoryResult_t resultHandle) {
  debug("ISteamInventory::DestroyResult()");
}

bool ISteamInventory::GetAllItems(SteamInventoryResult_t *pResultHandle) {
  debug("ISteamInventory::GetAllItems()");
  return true;
}

bool ISteamInventory::GetItemsByID(SteamInventoryResult_t *     pResultHandle,
                                   const SteamItemInstanceID_t *pInstanceIDs,
                                   uint32 unCountInstanceIDs) {
  debug("ISteamInventory::GetItemsByID()");
  return true;
}

bool ISteamInventory::SerializeResult(SteamInventoryResult_t resultHandle,
                                      void *                 pOutBuffer,
                                      uint32 *               punOutBufferSize) {
  debug("ISteamInventory::SerializeResult()");
  return true;
}

bool ISteamInventory::DeserializeResult(
    SteamInventoryResult_t *pOutResultHandle, const void *pBuffer,
    uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE) {
  debug("ISteamInventory::DeserializeResult()");
  return true;
}

bool ISteamInventory::GenerateItems(SteamInventoryResult_t *pResultHandle,
                                    const SteamItemDef_t *  pArrayItemDefs,
                                    const uint32 *          punArrayQuantity,
                                    uint32                  unArrayLength) {
  debug("ISteamInventory::GenerateItems()");
  return true;
}

bool ISteamInventory::GrantPromoItems(SteamInventoryResult_t *pResultHandle) {
  debug("ISteamInventory::GrantPromoItems()");
  return true;
}

bool ISteamInventory::AddPromoItem(SteamInventoryResult_t *pResultHandle,
                                   SteamItemDef_t          itemDef) {
  debug("ISteamInventory::AddPromoItem()");
  return true;
}

bool ISteamInventory::AddPromoItems(SteamInventoryResult_t *pResultHandle,
                                    const SteamItemDef_t *  pArrayItemDefs,
                                    uint32                  unArrayLength) {
  debug("ISteamInventory::AddPromoItems()");
  return true;
}

bool ISteamInventory::ConsumeItem(SteamInventoryResult_t *pResultHandle,
                                  SteamItemInstanceID_t   itemConsume,
                                  uint32                  unQuantity) {
  debug("ISteamInventory::ConsumeItem()");
  return true;
}

bool ISteamInventory::ExchangeItems(SteamInventoryResult_t *pResultHandle,
                                    const SteamItemDef_t *  pArrayGenerate,
                                    const uint32 *punArrayGenerateQuantity,
                                    uint32        unArrayGenerateLength,
                                    const SteamItemInstanceID_t *pArrayDestroy,
                                    const uint32 *punArrayDestroyQuantity,
                                    uint32        unArrayDestroyLength) {
  debug("ISteamInventory::ExchangeItems()");
  return true;
}

bool ISteamInventory::TransferItemQuantity(
    SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource,
    uint32 unQuantity, SteamItemInstanceID_t itemIdDest) {
  debug("ISteamInventory::TransferItemQuantity()");
  return true;
}

void ISteamInventory::SendItemDropHeartbeat() {
  debug("ISteamInventory::SendItemDropHeartbeat()");
}

bool ISteamInventory::TriggerItemDrop(SteamInventoryResult_t *pResultHandle,
                                      SteamItemDef_t dropListDefinition) {
  debug("ISteamInventory::TriggerItemDrop()");
  return true;
}

bool ISteamInventory::TradeItems(
    SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner,
    const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity,
    uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet,
    const uint32 *pArrayGetQuantity, uint32 nArrayGetLength) {
  debug("ISteamInventory::TradeItems()");
  return true;
}

bool ISteamInventory::LoadItemDefinitions() {
  debug("ISteamInventory::LoadItemDefinitions()");
  return true;
}

bool ISteamInventory::GetItemDefinitionIDs(SteamItemDef_t *pItemDefIDs,
                                           uint32 *punItemDefIDsArraySize) {
  debug("ISteamInventory::GetItemDefinitionIDs()");
  return true;
}

bool ISteamInventory::GetItemDefinitionProperty(SteamItemDef_t iDefinition,
                                                const char *   pchPropertyName,
                                                char *         pchValueBuffer,
                                                uint32 *punValueBufferSizeOut) {
  debug("ISteamInventory::GetItemDefinitionProperty()");
  return true;
}

SteamAPICall_t
ISteamInventory::RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID) {
  debug("ISteamInventory::RequestEligiblePromoItemDefinitionsIDs()");
  return {};
}

bool ISteamInventory::GetEligiblePromoItemDefinitionIDs(
    CSteamID steamID, SteamItemDef_t *pItemDefIDs,
    uint32 *punItemDefIDsArraySize) {
  debug("ISteamInventory::GetEligiblePromoItemDefinitionIDs()");
  return true;
}

SteamAPICall_t
ISteamInventory::StartPurchase(const SteamItemDef_t *pArrayItemDefs,
                               const uint32 *        punArrayQuantity,
                               uint32                unArrayLength) {
  debug("ISteamInventory::StartPurchase()");
  return {};
}

SteamAPICall_t ISteamInventory::RequestPrices() {
  debug("ISteamInventory::RequestPrices()");
  return {};
}

uint32 ISteamInventory::GetNumItemsWithPrices() {
  debug("ISteamInventory::GetNumItemsWithPrices()");
  return 0;
}

bool ISteamInventory::GetItemsWithPrices(SteamItemDef_t *pArrayItemDefs,
                                         uint64 *        pPrices,
                                         uint32          unArrayLength) {
  debug("ISteamInventory::GetItemsWithPrices()");
  return true;
}

bool ISteamInventory::GetItemPrice(SteamItemDef_t iDefinition, uint64 *pPrice) {
  debug("ISteamInventory::GetItemPrice()");
  return true;
}

SteamInventoryUpdateHandle_t ISteamInventory::StartUpdateProperties() {
  debug("ISteamInventory::StartUpdateProperties()");
  return {};
}

bool ISteamInventory::RemoveProperty(SteamInventoryUpdateHandle_t handle,
                                     SteamItemInstanceID_t        nItemID,
                                     const char *pchPropertyName) {
  debug("ISteamInventory::RemoveProperty()");
  return true;
}

bool ISteamInventory::SetProperty(SteamInventoryUpdateHandle_t handle,
                                  SteamItemInstanceID_t        nItemID,
                                  const char *                 pchPropertyName,
                                  const char *pchPropertyValue) {
  debug("ISteamInventory::SetProperty()");
  return true;
}

bool ISteamInventory::SetProperty(SteamInventoryUpdateHandle_t handle,
                                  SteamItemInstanceID_t        nItemID,
                                  const char *pchPropertyName, bool bValue) {
  debug("ISteamInventory::SetProperty()");
  return true;
}

bool ISteamInventory::SetProperty(SteamInventoryUpdateHandle_t handle,
                                  SteamItemInstanceID_t        nItemID,
                                  const char *pchPropertyName, int64 nValue) {
  debug("ISteamInventory::SetProperty()");
  return true;
}

bool ISteamInventory::SetProperty(SteamInventoryUpdateHandle_t handle,
                                  SteamItemInstanceID_t        nItemID,
                                  const char *pchPropertyName, float flValue) {
  debug("ISteamInventory::SetProperty()");
  return true;
}

bool ISteamInventory::SubmitUpdateProperties(
    SteamInventoryUpdateHandle_t handle,
    SteamInventoryResult_t *     pResultHandle) {
  debug("ISteamInventory::SubmitUpdateProperties()");
  return true;
}
