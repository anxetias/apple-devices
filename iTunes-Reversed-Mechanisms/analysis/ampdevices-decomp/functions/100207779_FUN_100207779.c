// name: FUN_100207779
// address: 100207779

undefined1 FUN_100207779(uint param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (uint *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_100207977;
    local_3a = "theKey != nullptr";
LAB_100207952:
    local_3c = 0x822;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
  }
  else {
    FUN_1001c62d9(param_2,0x114);
    if (param_1 < 100) {
      if (param_1 < 0x14) {
        puVar6 = &DAT_100712da0;
        goto LAB_100207834;
      }
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_3a = "keyIndex < 20";
        goto LAB_100207952;
      }
    }
    else {
      param_1 = param_1 - 100;
      if (param_1 < 100) {
        puVar6 = &DAT_100713930;
LAB_100207834:
        if (param_1 != 0) {
          uVar2 = *(uint *)(puVar6 + (ulong)param_1 * 0x94);
          uVar4 = (ulong)uVar2;
          *param_2 = uVar2;
          uVar8 = 1;
          if (uVar4 != 0) {
            uVar7 = 0;
            do {
              *(undefined *)((long)param_2 + uVar7 + 4) =
                   *(undefined *)((long)(puVar6 + (ulong)param_1 * 0x94) + uVar7 + 4);
              uVar7 = uVar7 + 1;
            } while (uVar4 != uVar7);
            uVar7 = 0;
            do {
              pbVar1 = (byte *)((long)param_2 + uVar7 + 4);
              *pbVar1 = *pbVar1 ^ (char)param_1 * '\a' + '%' + (char)uVar7;
              uVar7 = uVar7 + 1;
            } while (uVar4 != uVar7);
          }
          goto LAB_100207983;
        }
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_3a = "keyIndex > 0";
          goto LAB_100207952;
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_3a = "keyIndex < 100";
          goto LAB_100207952;
        }
      }
    }
  }
LAB_100207977:
  uVar8 = 0;
  FUN_1001782e9(0,0);
LAB_100207983:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

