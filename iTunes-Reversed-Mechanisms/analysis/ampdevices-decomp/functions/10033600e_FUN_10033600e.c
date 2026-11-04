// name: FUN_10033600e
// address: 10033600e

void FUN_10033600e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined *local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = _CFNumberCreate(0,0xb);
  local_38 = PTR_cf_PurgeDataBytes_100854760;
  local_48 = PTR_cf_SyncTypes_100854750._0_4_;
  uStack_44 = PTR_cf_SyncTypes_100854750._4_4_;
  uStack_40 = PTR_cf_DataclassAnchors_100854758._0_4_;
  uStack_3c = PTR_cf_DataclassAnchors_100854758._4_4_;
  local_68 = param_2;
  local_60 = param_3;
  local_58 = uVar2;
  uVar3 = _CFDictionaryCreate(0,&local_48,&local_68,3,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  uVar1 = _ATHostConnectionGetCurrentSessionNumber(param_1,0);
  uVar4 = _ATCFMessageCreate(uVar1,&cf_FinishedSyncingMetadata,uVar3);
  _ATHostConnectionSendMessage(param_1,uVar4);
  _CFRelease(uVar3);
  _CFRelease(uVar4);
  _CFRelease(uVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

