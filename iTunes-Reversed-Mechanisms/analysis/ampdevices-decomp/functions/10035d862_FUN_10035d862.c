// name: FUN_10035d862
// address: 10035d862

void FUN_10035d862(uint *param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  bool bVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  float fStack_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (uint *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "codecList != nullptr";
LAB_10035d9fa:
      uStack_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar3,0);
      fStack_48 = (float)((ulong)pcVar3 >> 0x10);
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    uVar8 = (ulong)*param_1;
    if (uVar8 < 0x14) {
      if (uVar8 != 0) {
        puVar7 = param_1 + 1;
        bVar4 = true;
        uVar5 = 0;
        do {
          puVar6 = puVar7 + uVar5 * 9;
          while( true ) {
            uVar5 = uVar5 + 1;
            if (*puVar6 == 0x61616320) break;
            if (*puVar6 == 0x68616163) goto LAB_10035d95c;
            puVar6 = puVar6 + 9;
            if (uVar5 == uVar8) {
              if (bVar4) goto LAB_10035d95c;
              goto LAB_10035d982;
            }
          }
          bVar4 = false;
        } while (uVar5 != uVar8);
LAB_10035d982:
        do {
          if (*puVar7 == 0x61616320) {
            uVar2 = *(undefined8 *)(puVar7 + 2);
            uStack_40 = puVar7[6];
            uStack_3c = puVar7[7];
            uStack_54 = (undefined4)((ulong)*(undefined8 *)puVar7 >> 0x20);
            uStack_50 = (undefined4)uVar2;
            uStack_4c = (undefined2)((ulong)uVar2 >> 0x20);
            uStack_4a = (undefined2)((ulong)uVar2 >> 0x30);
            uStack_44 = (undefined2)puVar7[5];
            uStack_42 = (undefined2)(puVar7[5] >> 0x10);
            local_38 = puVar7[8];
            local_58 = 0x68616163;
            fStack_48 = (float)puVar7[4] + (float)puVar7[4];
            FUN_10035d2e6(&local_58,param_1);
          }
          puVar7 = puVar7 + 9;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      goto LAB_10035d95c;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "codecList->numCodecs < 20";
      goto LAB_10035d9fa;
    }
  }
  FUN_1001782e9(0,0);
LAB_10035d95c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

