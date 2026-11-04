// name: FUN_100340ac2
// address: 100340ac2

ulong FUN_100340ac2(char *param_1,undefined8 param_2,int *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  char local_78 [4];
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  char local_58 [4];
  char *local_54;
  undefined2 local_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  *param_4 = 0;
  lVar3 = FUN_100174062(DAT_1008c4d90,param_1,&cf__);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      builtin_strncpy(local_78,"\x02\x02\"\b",4);
      local_74 = "Assertion failure";
      local_6c = 0x822;
      local_6a = "parts != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_78,0x16);
    }
    uVar7 = 0;
    FUN_1001782e9(0,0);
    goto LAB_100340db6;
  }
  lVar4 = FUN_10017076e(lVar3);
  if (lVar4 - 1U < 2) {
    if (lVar4 != 2) {
      cVar1 = FUN_100170633(param_2,&cf_Playlist);
      iVar2 = 3 - (uint)(cVar1 == '\0');
LAB_100340c51:
      *param_3 = iVar2;
      cVar1 = FUN_100164b00(lVar3,lVar4 - 1U,local_78,0x20);
      if (cVar1 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          pcVar8 = local_58;
          builtin_strncpy(local_58,"\x02\x02\"\b",4);
          local_54 = "Assertion failure";
          local_4c = 0x822;
          pcVar6 = "JRCFArrayGetCStringAtIndex(parts, numParts - 1, value, sizeof(value))";
LAB_100340d24:
          *(char **)(pcVar8 + 0xe) = pcVar6;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",pcVar8,0x16);
        }
      }
      else {
        pcVar8 = "%llu";
        if (local_78[0] == '-') {
          pcVar8 = "%lld";
        }
        iVar2 = _sscanf(local_78,pcVar8,param_4);
        if (iVar2 == 1) {
          FUN_10017060f(lVar3);
          uVar7 = CONCAT71((int7)((ulong)param_2 >> 8),1);
          goto LAB_100340db6;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          pcVar8 = local_58;
          builtin_strncpy(local_58,"\x02\x02\"\b",4);
          local_54 = "Assertion failure";
          local_4c = 0x822;
          pcVar6 = "sscanf(value, (value[0] == \'-\') ? \"%lld\" : \"%llu\", &assetID) == 1";
          goto LAB_100340d24;
        }
      }
      goto LAB_100340d49;
    }
    param_2 = FUN_100164a01(lVar3,0);
    cVar1 = FUN_100170633(param_2,&cf_artwork);
    iVar2 = 4;
    if (cVar1 != '\0') goto LAB_100340c51;
    cVar1 = FUN_100170633(param_2,&cf_lyrics);
    iVar2 = 5;
    if (cVar1 != '\0') goto LAB_100340c51;
    cVar1 = FUN_100170633(param_2,&cf_genius);
    iVar2 = 6;
    if (cVar1 != '\0') goto LAB_100340c51;
    cVar1 = FUN_100170633(param_2,&cf_track);
    iVar2 = 2;
    if (cVar1 != '\0') goto LAB_100340c51;
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      pcVar8 = local_78;
      builtin_strncpy(local_78,"\x02\x02\"\b",4);
      local_74 = "Assertion failure";
      local_6c = 0x822;
      pcVar6 = "numParts == 1 || numParts == 2";
      goto LAB_100340d24;
    }
LAB_100340d49:
    FUN_1001782e9(0,0);
  }
  FUN_10017060f(lVar3);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
  if (cVar1 != '\0') {
    builtin_strncpy(local_78,"\x02\x01B\b",4);
    local_74 = param_1;
    __os_log_impl(0x100000000,uVar5,0x10,"airtraffic> invalid asset identifier \"%{public}@\"",
                  local_78,0xc);
  }
  uVar7 = 0;
LAB_100340db6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}

