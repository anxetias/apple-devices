// name: FUN_100566fca
// address: 100566fca

ulong FUN_100566fca(undefined8 param_1,uint param_2,undefined1 (*param_3) [16])

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  undefined8 local_70;
  char local_68 [32];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_3,0x10);
  if (param_2 != 0x24) {
    if (param_2 == 0x16) {
      iVar2 = FUN_10015f5bf(param_1,0x16,param_3,0x10,1);
      if (iVar2 != 0x10) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be true)";
          local_3c = 0x822;
          local_3a = 
          "Base64Decode(reinterpret_cast<const char *>(buffer), bufferLength, &outCFUUIDBytes->byte0, sizeof(*outCFUUIDBytes), true) == 16"
          ;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        pcVar6 = (char *)0x0;
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 == '\0') goto LAB_1005671cf;
      }
      pcVar6 = (char *)0x1;
      goto LAB_1005671cf;
    }
    if (param_2 < 0x15) {
      cVar1 = FUN_1001e5501(param_1,param_2);
      if (cVar1 != '\0') {
        local_70 = 0;
        pcVar6 = local_68;
        FUN_1001dfaed(param_1,param_2,pcVar6,0x15);
        iVar2 = _sscanf(pcVar6,"%llu",&local_70);
        if (iVar2 == 1) {
LAB_100567138:
          pcVar6 = (char *)CONCAT71((int7)((ulong)pcVar6 >> 8),1);
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure (expected to be true)";
            local_3c = 0x822;
            local_3a = "sscanf(cString, \"%llu\", &uint64) == 1";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          pcVar6 = (char *)0x0;
          cVar1 = FUN_1001782e9(0,0);
          if (cVar1 != '\0') goto LAB_100567138;
        }
        FUN_100169968(local_70,param_3);
        goto LAB_1005671cf;
      }
    }
    pcVar6 = (char *)0x0;
    goto LAB_1005671cf;
  }
  lVar4 = FUN_100173ab4(0,param_1,0x24,0x8000100,0);
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "uuidString != nullptr";
LAB_100567265:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1005671b0:
    lVar5 = 0;
    FUN_1001782e9(0,0);
    pcVar6 = (char *)0x0;
  }
  else {
    lVar5 = FUN_100174b64(0,lVar4);
    if (lVar5 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_3a = "uuid != nullptr";
        goto LAB_100567265;
      }
      goto LAB_1005671b0;
    }
    auVar7 = _CFUUIDGetUUIDBytes(lVar5);
    *param_3 = auVar7;
    pcVar6 = (char *)0x1;
  }
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar4);
LAB_1005671cf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return (ulong)pcVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

