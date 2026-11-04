// name: FUN_1002e86fc
// address: 1002e86fc

bool FUN_1002e86fc(long param_1,byte param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined **local_58 [4];
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar4 = FUN_1001c17c4();
  if (((5 < iVar4) || ((*(byte *)(*(long *)(param_1 + 8) + 0x1bb0) & 1) == 0)) ||
     ((*(byte *)(param_1 + 0x240) & 4) != 0)) goto LAB_1002e87fb;
  uVar1 = *(ushort *)(param_1 + 0x10);
  bVar2 = false;
  switch(uVar1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 0x2f:
  case 0x30:
  case 0x40:
    bVar2 = param_3 == 0x706d7066 || param_3 == 0x74646170;
  case 5:
  case 6:
  case 7:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2e:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3e:
  case 0x3f:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x46:
  case 0x47:
    goto switchD_1002e8768_caseD_5;
  case 8:
  case 9:
  case 10:
  case 0x13:
  case 0x15:
  case 0x18:
  case 0x2c:
  case 0x3d:
  case 0x44:
    goto switchD_1002e8768_caseD_8;
  }
  if ((uVar1 - 0x42f < 8) || (uVar1 - 200 < 7)) goto switchD_1002e8768_caseD_5;
switchD_1002e8768_caseD_8:
  if ((param_2 == 0) || (bVar3 = FUN_100482222(param_1,1), (bVar3 & param_2) != 0)) {
    if (param_3 == 0x6370636e) {
      local_58[0] = &PTR_FUN_1008531e8;
      local_38 = local_58;
      iVar4 = FUN_100485677(param_1,local_58);
      if (local_38 == local_58) {
        lVar5 = 0x20;
LAB_1002e87f1:
        (**(code **)((long)*local_38 + lVar5))();
      }
      else {
        lVar5 = 0x28;
        if (local_38 != (undefined ***)0x0) goto LAB_1002e87f1;
      }
      if (iVar4 != 0) goto LAB_1002e87fb;
    }
    bVar2 = true;
  }
  else {
LAB_1002e87fb:
    bVar2 = false;
  }
switchD_1002e8768_caseD_5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar2;
}

