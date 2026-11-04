// name: FUN_10033cbcd
// address: 10033cbcd

undefined8 FUN_10033cbcd(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_100171475(param_1,&cf_pid);
  uVar3 = FUN_100171475(param_2,&cf_pid);
  cVar1 = FUN_100170633(uVar2,uVar3);
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "JRCFEqual( JRCFDictionaryGetValue( previousSyncOperation, kAirTrafficSyncPersistentIDKey ), JRCFDictionaryGetValue( currentSyncOperation, kAirTrafficSyncPersistentIDKey ) )"
      ;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar2 = FUN_100172752(DAT_1008c4d90,param_2,1);
  uVar3 = FUN_100171475(param_1,&cf_operation);
  FUN_100171502(uVar2,&cf_operation,uVar3);
  FUN_1001714c2(param_1,FUN_10033d5bc,uVar2);
  cVar1 = FUN_100170633(uVar3,&cf_insert_playlist);
  if (cVar1 != '\0') {
    lVar4 = FUN_100171475(uVar2,&cf_container);
    if (lVar4 != 0) {
      lVar5 = FUN_100167dab(lVar4,&cf_artwork_cache_id,0);
      if (lVar5 == 0) {
        FUN_100171552(lVar4,&cf_artwork_cache_id);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

