// name: FUN_1002bf230
// address: 1002bf230

void FUN_1002bf230(undefined4 param_1,long *param_2,undefined8 param_3,int param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  undefined1 auVar17 [16];
  int local_6c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "numRecentTracks != 0";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar5 = -param_4;
  if (-param_4 < 0) {
    iVar5 = param_4;
  }
  lVar1 = *param_2;
  if (lVar1 != param_2[1]) {
    FUN_1001d26f2(lVar1,(ulong)(param_2[1] - lVar1) >> 3,param_3,0);
    lVar1 = param_2[1];
    lVar2 = *param_2;
    if (lVar1 - lVar2 != 0) {
      uVar8 = 0;
      local_6c = 0;
      do {
        lVar12 = *(long *)(*param_2 + uVar8 * 8);
        if (lVar12 == 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "trackInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_5 != 0) {
            plVar11 = (long *)(lVar12 + 0x58);
            do {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_1002bf34e;
              uVar6 = FUN_10035f4f9(plVar11,param_1,param_5,param_6);
            } while (2 < uVar6);
          }
          local_6c = local_6c + 1;
          if (local_6c == iVar5) {
            uVar15 = (ulong)((int)uVar8 + 1);
            lVar1 = *param_2;
            lVar2 = param_2[1];
            lVar12 = lVar2 - lVar1;
            uVar8 = lVar12 >> 3;
            uVar14 = uVar15 - uVar8;
            if (uVar15 < uVar8 || uVar14 == 0) {
              if (uVar15 < uVar8) {
                param_2[1] = lVar1 + uVar15 * 8;
              }
            }
            else if ((ulong)(param_2[2] - lVar2 >> 3) < uVar14) {
              uVar9 = param_2[2] - lVar1;
              uVar8 = (long)uVar9 >> 2;
              if (uVar8 <= uVar15) {
                uVar8 = uVar15;
              }
              uVar13 = 0x1fffffffffffffff;
              if (uVar9 < 0x7ffffffffffffff8) {
                uVar13 = uVar8;
              }
              auVar17 = FUN_100249b6c(param_2 + 2,uVar13);
              lVar1 = auVar17._0_8_ + lVar12;
              ___bzero(lVar1,uVar15 * 8 - lVar12 & 0xfffffffffffffff8);
              sVar10 = param_2[1] - *param_2;
              pvVar16 = (void *)(lVar1 - sVar10);
              _memcpy(pvVar16,(void *)*param_2,sVar10);
              pvVar3 = (void *)*param_2;
              *param_2 = (long)pvVar16;
              param_2[1] = lVar1 + uVar14 * 8;
              param_2[2] = auVar17._0_8_ + auVar17._8_8_ * 8;
              if (pvVar3 != (void *)0x0) {
                operator_delete(pvVar3);
              }
            }
            else {
              ___bzero(lVar2,uVar15 * 8 - lVar12 & 0xfffffffffffffff8);
              param_2[1] = lVar2 + uVar14 * 8;
            }
            break;
          }
        }
LAB_1002bf34e:
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(lVar1 - lVar2 >> 3));
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

