// name: FUN_100111ac0
// address: 100111ac0

undefined8
FUN_100111ac0(long param_1,int param_2,short param_3,int param_4,char param_5,uint *param_6)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint local_2c;
  
  local_2c = 0;
  iVar6 = (param_2 == 1) + 1;
  if (param_4 < 0x66) {
    if (param_4 == 0) {
      FUN_100111d94(param_1,param_2,(int)param_3,&local_2c);
      if (param_2 == 1) {
        *(uint *)(param_1 + 0x4a0 + (ulong)local_2c * 0x78) = local_2c;
        puVar4 = (uint *)(param_1 + (ulong)(local_2c + 1) * 0x78 + 0x4a0);
        if (param_5 == '\0') {
          *puVar4 = local_2c + 1;
        }
        else {
          *puVar4 = local_2c;
        }
      }
      else {
        *(uint *)(param_1 + 0x4a0 + (ulong)local_2c * 0x78) = local_2c;
      }
      goto LAB_100111d62;
    }
    if (param_4 != 0x62) {
LAB_100111d73:
      puVar3 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar3 = 0x21646174;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar3,PTR_typeinfo_10082c9b0,0);
    }
    iVar1 = *(int *)(param_1 + 0xa44);
    if (3 < (uint)(iVar1 + iVar6)) {
      return 0xfffffffe;
    }
    uVar7 = 7;
    if (iVar1 != 0) {
      uVar7 = iVar1 + 5U;
    }
    if (param_2 == 1) {
      uVar7 = iVar1 + 5U;
    }
    uVar5 = (ulong)uVar7;
    *(int *)(param_1 + 0xa44) = iVar1 + iVar6;
LAB_100111bcd:
    *(int *)(param_1 + 0xa34) = *(int *)(param_1 + 0xa34) + iVar6;
    if (param_2 != 1) goto LAB_100111d04;
LAB_100111bde:
    local_2c = (uint)uVar5;
    lVar2 = uVar5 * 0x78;
    *(undefined1 *)(param_1 + 0x494 + lVar2) = 1;
    *(short *)(param_1 + 0x496 + lVar2) = param_3;
    *(undefined1 *)(param_1 + 0x498 + lVar2) = 1;
    *(char *)(param_1 + 0x499 + lVar2) = param_5;
    *(undefined1 *)(param_1 + 0x49a + lVar2) = 1;
    uVar7 = local_2c + 1;
    *(uint *)(param_1 + 0x49c + lVar2) = uVar7;
    lVar8 = (ulong)uVar7 * 0x78;
    *(undefined1 *)(param_1 + 0x494 + lVar8) = 1;
    *(short *)(param_1 + 0x496 + lVar8) = param_3;
    *(undefined1 *)(param_1 + 0x498 + lVar8) = 1;
    *(char *)(param_1 + 0x499 + lVar8) = param_5;
    *(undefined1 *)(param_1 + 0x49a + lVar8) = 0;
    if (param_5 != '\0') {
      uVar7 = local_2c;
    }
    *(uint *)(param_1 + 0x49c + lVar8) = local_2c;
    *(uint *)(param_1 + 0x4a0 + lVar2) = local_2c;
    *(uint *)(param_1 + 0x4a0 + lVar8) = uVar7;
    lVar2 = 0xa54;
  }
  else {
    if (param_4 != 0x66) {
      if (param_4 == 0x6c) {
        uVar7 = *(int *)(param_1 + 0xa48) + iVar6;
        if (1 < uVar7) {
          return 0xfffffffe;
        }
        uVar5 = (ulong)(*(int *)(param_1 + 0xa48) + 9);
        *(uint *)(param_1 + 0xa48) = uVar7;
      }
      else {
        if (param_4 != 0x73) goto LAB_100111d73;
        uVar7 = *(int *)(param_1 + 0xa40) + iVar6;
        if (2 < uVar7) {
          return 0xfffffffe;
        }
        uVar5 = (ulong)(*(int *)(param_1 + 0xa40) + 3);
        *(uint *)(param_1 + 0xa40) = uVar7;
      }
      goto LAB_100111bcd;
    }
    uVar7 = *(uint *)(param_1 + 0xa3c);
    uVar5 = (ulong)uVar7;
    if (3 < uVar7 + iVar6) {
      return 0xfffffffe;
    }
    if (uVar7 != 0) {
      *(uint *)(param_1 + 0xa3c) = uVar7 + iVar6;
      goto LAB_100111bcd;
    }
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0xa3c) = 3;
      *(int *)(param_1 + 0xa34) = *(int *)(param_1 + 0xa34) + 2;
      uVar5 = 1;
      goto LAB_100111bde;
    }
    *(undefined4 *)(param_1 + 0xa3c) = 1;
    *(int *)(param_1 + 0xa34) = *(int *)(param_1 + 0xa34) + 1;
    uVar5 = 0;
LAB_100111d04:
    local_2c = (uint)uVar5;
    lVar2 = uVar5 * 0x78;
    *(undefined1 *)(param_1 + 0x494 + lVar2) = 1;
    *(short *)(param_1 + 0x496 + lVar2) = param_3;
    *(undefined1 *)(param_1 + 0x498 + lVar2) = 0;
    *(char *)(param_1 + 0x499 + lVar2) = param_5;
    *(uint *)(param_1 + 0x4a0 + lVar2) = local_2c;
    lVar2 = (ulong)((char)param_4 == 'l') * 8 + 0xa50;
  }
  *(int *)(param_1 + lVar2) = *(int *)(param_1 + lVar2) + 1;
  uVar7 = *(uint *)(param_1 + 0xa8c);
  *(uint *)(param_1 + 0xa8c) = uVar7 + 1;
  *(uint *)(param_1 + 0xa5c + (ulong)uVar7 * 4) = local_2c;
LAB_100111d62:
  *param_6 = local_2c;
  return 0;
}

