// name: FUN_1003335d2
// address: 1003335d2

undefined8 FUN_1003335d2(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  uVar1 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  FUN_100171502(uVar1,&cf_Type,&cf_iTunes);
  FUN_100171502(uVar1,&cf_Version,&cf_13_5_6_12);
  local_28 = FUN_1001eb64b();
  FUN_100171502(uVar1,&cf_MacOSVersion,local_28);
  FUN_10016d588(&local_28);
  local_28 = FUN_1001eb51b();
  FUN_100171502(uVar1,&cf_SyncHostName,local_28);
  FUN_10016d588(&local_28);
  local_28 = FUN_1004e1208();
  FUN_100171502(uVar1,&cf_LibraryID,local_28);
  FUN_10016d588(&local_28);
  uVar2 = FUN_1003330eb(param_1);
  FUN_100171502(uVar1,&cf_SyncedDataclasses,uVar2);
  FUN_10034c16a(uVar2);
  uVar2 = FUN_100333253(param_1);
  FUN_100171502(uVar1,&cf_SyncedAssetTypes,uVar2);
  FUN_10034c16a(uVar2);
  FUN_100168746(uVar1,&cf_Wakeable,*(undefined1 *)(param_1 + 0x151e2),1);
  return uVar1;
}

