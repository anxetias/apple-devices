// name: FUN_1003578c9
// address: 1003578c9

int FUN_1003578c9(long param_1,undefined8 param_2,long param_3,undefined4 param_4,long param_5,
                 long param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int local_490;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "thumbs != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
  }
  else {
    iVar4 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x61727477,1,&local_478
                         );
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        iVar4 = 0;
        uVar6 = FUN_1004e39cc(param_1,0);
        uVar5 = 0;
        if (param_3 != 0) {
          uVar5 = FUN_1004744bf(param_3,0);
        }
        uVar9 = (ulong)*(uint *)(param_5 + 0x10);
        if (*(uint *)(param_5 + 0x10) != 0) {
          puVar8 = (uint *)(param_6 + 0x9c);
          puVar12 = (uint *)(param_5 + 0x54);
          uVar11 = 0;
          do {
            if (param_3 == 0) {
LAB_1003579f1:
              if ((puVar8[0x10] == 0x706e6720) || (puVar8[0x10] == 0x6a706567)) {
                uVar14 = *puVar8;
                uVar1 = puVar8[3];
                if (uVar1 < uVar14) {
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "thumbDataLogicalSize <= thumbDataMaximumSize";
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                if (*(char *)((long)puVar8 + 0x5e) != '\0') {
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "curThumb->format.longAlign == false";
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                if (puVar8[0x1a] != 0) {
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "curThumb->format.alignFileOffset == 0";
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
              }
              else {
                uVar14 = puVar8[3];
                uVar1 = 0;
              }
              if (uVar14 == 0) {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "thumbDataLogicalSize != 0";
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              uVar13 = 0x500000;
              if (*(char *)(param_1 + 0x354) == '\0') {
                uVar13 = 0x1400000;
              }
              iVar4 = FUN_100239983(puVar12 + -0xb,1,0);
              local_490 = (int)(uVar6 >> 0x16);
              if ((uint)(iVar4 * local_490) <= uVar13) {
                uVar13 = iVar4 * local_490;
              }
              uVar2 = *puVar12;
              uVar10 = uVar14;
              if (uVar2 != 0) {
                uVar10 = (uVar2 + uVar14) - 1;
                uVar10 = uVar10 - uVar10 % uVar2;
              }
              iVar4 = FUN_1005906cb(param_2,puVar12 + -0xf,param_4,0,&local_478,
                                    *(undefined8 *)(puVar8 + 1),uVar14,uVar10,uVar1,puVar8 + 5,0,
                                    uVar13);
              if (iVar4 != 0) {
                if (iVar4 == -0x80) goto LAB_100357dbc;
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_100357dbc;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                goto LAB_100357d52;
              }
              uVar9 = (ulong)*(uint *)(param_5 + 0x10);
            }
            else if (puVar12[-0xe] == 0 || (puVar12[-0xe] & uVar5) != 0) {
              if (((uVar5 & 0x1c04000) == 0) &&
                 (puVar12[-0xd] == 0 || (uVar5 & ~puVar12[-0xd]) != 0)) goto LAB_1003579f1;
            }
            uVar11 = uVar11 + 1;
            puVar8 = puVar8 + 0x38;
            puVar12 = puVar12 + 0x1e;
          } while (uVar11 < uVar9);
          iVar4 = 0;
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100357d52:
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
LAB_100357dbc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

