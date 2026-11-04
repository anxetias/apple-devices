// name: FUN_1005de45e
// address: 1005de45e

undefined8 FUN_1005de45e(long param_1,uint param_2,undefined8 param_3)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 local_70;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar9 = (uint *)(param_1 + 8);
  local_70 = 0;
  do {
    if ((uint *)((ulong)param_2 + param_1) <= puVar9) goto LAB_1005de6f6;
    uVar5 = *puVar9;
    local_60 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = puVar9[1];
    local_5c = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    if (uVar5 == 0x2d2d2d2d) {
      if (puVar9[3] == 0x6e61656d) {
        uVar5 = puVar9[2];
        iVar4 = _strncmp((char *)(puVar9 + 5),"com.apple.iTunes",0x10);
        if (iVar4 == 0) {
          puVar1 = puVar9 + 2;
          uVar10 = (ulong)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18);
          uVar5 = *(uint *)((long)puVar9 + uVar10 + 0xc);
          uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          if (uVar5 != 0x64617461) {
            if (uVar5 != 0x6e616d65) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_4a = "child2.type == \'name\'";
                goto LAB_1005de69e;
              }
              goto LAB_1005de667;
            }
            pcVar11 = (char *)((long)puVar1 + uVar10 + 0xc);
            lVar8 = 0;
            do {
              pcVar2 = *(char **)((long)&PTR_s_iTunNORM_10086f940 + lVar8);
              sVar6 = _strlen(pcVar2);
              if (((int)sVar6 != 0) &&
                 (iVar4 = _strncmp(pcVar11,pcVar2,sVar6 & 0xffffffff), iVar4 == 0)) {
                local_70 = FUN_1005e2115(&local_60,puVar1,param_3,(int)pcVar11 - (int)puVar1,
                                         sVar6 & 0xffffffff);
                goto LAB_1005de622;
              }
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0x80);
          }
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_4a = "child1.type == \'mean\'";
LAB_1005de69e:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_1005de667:
        FUN_1001782e9(0,0);
      }
    }
    else {
LAB_1005de622:
      if (local_5c == 0xa9746f6f) {
        if (puVar9[3] != 0x61746164) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4a = "child1.type == \'data\'";
            goto LAB_1005de69e;
          }
          goto LAB_1005de667;
        }
        local_70 = FUN_1005e2115(&local_60,puVar9 + 2,param_3,0,0);
      }
    }
    if ((ulong)local_60 == 0) goto LAB_1005de6f6;
    puVar9 = (uint *)((long)puVar9 + (ulong)local_60);
  } while (puVar9 <= (uint *)((ulong)param_2 + param_1));
  uVar7 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar7,0x10);
  if (cVar3 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "bufferPos <= ilstEnd";
    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
  local_70 = 0xffffffce;
LAB_1005de6f6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_70;
}

