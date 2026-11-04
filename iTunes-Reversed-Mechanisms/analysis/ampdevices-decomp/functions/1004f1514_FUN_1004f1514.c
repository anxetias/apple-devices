// name: FUN_1004f1514
// address: 1004f1514

undefined1 FUN_1004f1514(long param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined2 local_12c;
  char *local_12a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x38b) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_138 = 0x8220202;
      uStack_134 = 0x7a0a90;
      uStack_130 = 1;
      local_12c = 0x822;
      local_12a = "handlerData->deviceInfo.supportsSpeechClips";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_138,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((*(char *)(param_1 + 0x38c) == '\0') || (*(char *)(param_1 + 0x14de5) != '\0')) {
    FUN_10015805a(&local_138);
    local_138 = 0x854ac0;
    uStack_134 = 1;
    cVar2 = FUN_100538854();
    if (cVar2 == '\0') {
      if (param_2 != '\0') {
        FUN_100546fb8(param_1);
      }
      goto LAB_1004f1601;
    }
    if (*(char *)(param_1 + 0x438) != '\0') {
      cVar2 = FUN_1005387f4(param_1 + 0x438);
      if (cVar2 == '\0') {
        cVar2 = FUN_10015829e(&local_138,PTR_cf_dontAskSpeechLanguageMisMatch_100854a68);
        if (cVar2 == '\0') {
          if (param_2 != '\0') {
            cVar2 = FUN_100546bdf(param_1);
            if (cVar2 != '\0') goto LAB_1004f15e3;
          }
LAB_1004f1601:
          FUN_10015811a(&local_138);
          goto LAB_1004f160d;
        }
      }
    }
LAB_1004f15e3:
    FUN_10015811a(&local_138);
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    if (*(char *)(param_1 + 0x438) == '\0') goto LAB_1004f1610;
    uVar1 = *(uint *)(param_1 + 0x3dc);
    cVar2 = FUN_100537ef0(0);
    if ((cVar2 == '\0') || (DAT_1008c7854 < uVar1)) goto LAB_1004f1610;
    cVar2 = FUN_100537fc1(param_1 + 0x438);
    if (cVar2 != '\0') {
      cVar2 = FUN_1005386f3(param_1 + 0x438,*(undefined4 *)(param_1 + 0x284));
      if (cVar2 != '\0') goto LAB_1004f1610;
    }
    if (param_2 != '\0') {
      FUN_1005470a5(param_1);
    }
LAB_1004f160d:
    uVar4 = 0;
  }
LAB_1004f1610:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

