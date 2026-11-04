// name: FUN_1002d191f
// address: 1002d191f

ulong FUN_1002d191f(long param_1,int param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "trackInfo != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
    goto switchD_1002d1a2f_caseD_24;
  }
  uVar5 = 0;
  if (0x3e < param_2) {
    if (param_2 < 0xa6) {
      if (param_2 == 0x3f) {
        uVar5 = (ulong)*(uint *)(*(long *)(lVar1 + 0x78) + 0xc);
      }
      else if (param_2 == 0x4a) {
        uVar5 = (ulong)*(short *)(lVar1 + 0x12a);
      }
      else {
        uVar5 = 0;
        if (param_2 == 0x8b) {
          uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + 0xa8);
        }
      }
    }
    else if (param_2 == 0xa6) {
      uVar5 = (ulong)*(byte *)(*(long *)(lVar1 + 0x78) + 0x21);
    }
    else {
      if (param_2 == 0xba) {
        lVar1 = *(long *)(lVar1 + 0x28);
        if ((*(byte *)(lVar1 + 0xf9) & 8) == 0) {
          uVar3 = FUN_1003a4b24(lVar1);
          *(uint *)(lVar1 + 0x7c) = uVar3;
          *(byte *)(lVar1 + 0xf9) = *(byte *)(lVar1 + 0xf9) | 8;
        }
        else {
          uVar3 = *(uint *)(lVar1 + 0x7c);
        }
      }
      else {
        if (param_2 != 0xbb) goto switchD_1002d1a2f_caseD_24;
        lVar1 = *(long *)(lVar1 + 0x28);
        if (lVar1 == 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure (expected to be not NULL)";
            local_2c = 0x822;
            local_2a = "albumInfo";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
          }
          uVar5 = 0;
          cVar2 = FUN_1001782e9(0,0);
          if (cVar2 == '\0') goto switchD_1002d1a2f_caseD_24;
        }
        uVar3 = FUN_1003a1ec0(lVar1);
      }
      uVar5 = (ulong)uVar3;
    }
    goto switchD_1002d1a2f_caseD_24;
  }
  switch(param_2) {
  case 0x22:
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x8c);
    uVar5 = 0;
    if (100000 < uVar3) {
      uVar5 = (ulong)uVar3;
    }
    break;
  case 0x23:
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x15c);
    break;
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2c:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x32:
  case 0x33:
    break;
  case 0x29:
    if (*(long *)(lVar1 + 0x10) != 0) {
      uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x38);
      break;
    }
LAB_1002d1bbd:
    uVar5 = 0;
    break;
  case 0x2a:
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x48);
    break;
  case 0x2b:
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x58);
    break;
  case 0x2d:
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x40);
    break;
  case 0x31:
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x13c);
    break;
  case 0x34:
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x138);
    break;
  case 0x35:
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x60);
    break;
  default:
    switch(param_2) {
    case 0xb:
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x136);
      break;
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x17:
      break;
    case 0xd:
      if (*(char *)(param_1 + 0x45) != '\x02') {
        if (*(int *)(param_1 + 0x70) == 0) {
          uVar5 = (ulong)*(uint *)(param_1 + 100);
        }
        else {
          uVar5 = (ulong)(uint)(*(int *)(param_1 + 0x70) * 1000);
        }
        break;
      }
      goto LAB_1002d1bbd;
    case 0x10:
      uVar5 = (ulong)*(uint *)(param_1 + 0x60);
      break;
    case 0x16:
      uVar5 = (ulong)*(uint *)(lVar1 + 0x144);
      break;
    case 0x18:
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x13a);
      break;
    case 0x19:
      uVar5 = (ulong)*(char *)(lVar1 + 300);
      break;
    default:
      if (param_2 == 7) {
        uVar5 = (ulong)*(ushort *)(lVar1 + 0x142);
      }
    }
  }
switchD_1002d1a2f_caseD_24:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

