// name: FUN_10056e2b4
// address: 10056e2b4

undefined8 FUN_10056e2b4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined1 *)0x0) {
    uVar14 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar14,0x10);
    if (cVar11 != '\0') {
      local_4a = "smartPlaylistInfo != nullptr";
LAB_10056e49b:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar12 = *(undefined4 *)(param_1 + 4);
      uVar9 = *(undefined4 *)(param_1 + 8);
      uVar5 = param_1[0xc];
      uVar6 = param_1[0xd];
      uVar7 = param_1[0xe];
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      uVar8 = *(ushort *)(param_1 + 0x15);
      FUN_1001c62d9(param_2,0x28);
      *param_2 = uVar1;
      param_2[1] = uVar3;
      param_2[2] = uVar2;
      param_2[4] = uVar5;
      *(undefined4 *)(param_2 + 0x18) = uVar9;
      uVar12 = FUN_1003832fc(uVar12);
      *(undefined4 *)(param_2 + 0x20) = uVar12;
      param_2[5] = uVar6;
      param_2[3] = uVar7;
      iVar13 = FUN_1003832fc(uVar10);
      *(int *)(param_2 + 0x24) = iVar13;
      *(ushort *)(param_2 + 6) = uVar8 << 8 | uVar8 >> 8;
      if (iVar13 == 0) {
        *(undefined4 *)(param_2 + 0x24) = 7;
      }
      switch(uVar4) {
      case 1:
        param_2[0x1c] = 0;
        break;
      case 2:
        param_2[0x1c] = 1;
        break;
      case 3:
        param_2[0x1c] = 2;
        break;
      case 4:
        param_2[0x1c] = 3;
        break;
      case 5:
        param_2[0x1c] = 4;
        break;
      default:
        param_2[0x1c] = 0;
        *(undefined4 *)(param_2 + 0x18) = 0x3e;
      }
      uVar14 = 0;
      if (param_3 != 0) {
        *(bool *)param_3 = iVar13 == 0;
      }
      goto LAB_10056e456;
    }
    uVar14 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar14,0x10);
    if (cVar11 != '\0') {
      local_4a = "smartOptions != nullptr";
      goto LAB_10056e49b;
    }
  }
  FUN_1001782e9(0,0);
  uVar14 = 0xffffffce;
LAB_10056e456:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

