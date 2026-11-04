// name: FUN_10031d3e5
// address: 10031d3e5

void FUN_10031d3e5(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "orderInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10031d459;
  }
  FUN_1001c62d9(param_2,0x10);
  switch(param_1) {
  case 0:
  case 0x1e:
  case 0x1f:
  case 0x25:
  case 0x3d:
  case 0x3f:
  case 0x49:
  case 0x62:
  case 99:
  case 0x68:
switchD_10031d42d_caseD_0:
    *param_2 = 0;
    break;
  case 1:
    *param_2 = 1;
    break;
  case 2:
    *param_2 = 0x48;
    break;
  case 3:
    *param_2 = 0x49;
    break;
  case 4:
    *param_2 = 0x1e;
    break;
  case 5:
    *param_2 = 2;
    break;
  case 6:
  case 0x22:
  case 0x34:
  case 0x35:
switchD_10031d42d_caseD_6:
    *param_2 = 3;
    break;
  case 7:
  case 0x20:
    *param_2 = 4;
    break;
  case 8:
    *param_2 = 5;
    break;
  case 9:
  case 0x23:
  case 0x3a:
  case 0x3b:
    *param_2 = 8;
    break;
  case 10:
  case 0x42:
    *param_2 = 9;
    break;
  case 0xb:
    *param_2 = 10;
    goto LAB_10031d92a;
  case 0xc:
    *param_2 = 0xb;
    break;
  case 0xd:
    *param_2 = 0xc;
    break;
  case 0xe:
    *param_2 = 0xd;
    break;
  case 0xf:
    *param_2 = 7;
    break;
  case 0x10:
    *param_2 = 6;
    break;
  case 0x11:
  case 0x39:
    *param_2 = 0x37;
    break;
  case 0x12:
    *param_2 = 0xf;
    break;
  case 0x13:
    *param_2 = 0x15;
    break;
  case 0x14:
    *param_2 = 0x36;
    break;
  case 0x15:
    *param_2 = 0xe;
    break;
  case 0x16:
    *param_2 = 0x10;
    goto LAB_10031d92a;
  case 0x17:
    *param_2 = 0x11;
    break;
  case 0x18:
  case 0x24:
  case 0x38:
    *param_2 = 0x12;
    break;
  case 0x19:
    *param_2 = 0x14;
    break;
  case 0x1a:
    *param_2 = 0x16;
    goto LAB_10031d92a;
  case 0x1b:
    *param_2 = 0x17;
    goto LAB_10031d92a;
  case 0x1c:
    *param_2 = 0x18;
    break;
  case 0x1d:
    *param_2 = 0x19;
    goto LAB_10031d92a;
  case 0x21:
    *param_2 = 0xc2;
    break;
  case 0x26:
    *param_2 = 0x21;
    goto LAB_10031d92a;
  case 0x27:
    *param_2 = 0x20;
    goto LAB_10031d92a;
  case 0x28:
    *param_2 = 0x22;
    goto LAB_10031d92a;
  case 0x29:
    *param_2 = 0x23;
    break;
  case 0x2a:
    *param_2 = 0x26;
    goto LAB_10031d92a;
  case 0x2b:
    *param_2 = 0x27;
    break;
  case 0x2c:
    *param_2 = 0x3e;
    break;
  case 0x2d:
    *param_2 = 0x3f;
    break;
  case 0x2e:
    *param_2 = 0x40;
    break;
  case 0x2f:
    *param_2 = 0x41;
    break;
  case 0x30:
    *param_2 = 0x43;
    goto LAB_10031d92a;
  case 0x31:
    *param_2 = 0x44;
    goto LAB_10031d92a;
  case 0x32:
    *param_2 = 0x45;
    goto LAB_10031d92a;
  case 0x33:
    *param_2 = 0x47;
    break;
  case 0x36:
    *param_2 = 0x5a;
    goto LAB_10031d92a;
  case 0x37:
    *param_2 = 0x5b;
    break;
  case 0x3c:
    *param_2 = 0x6f;
    break;
  case 0x3e:
    *param_2 = 0x72;
    break;
  case 0x40:
    *param_2 = 0x7b;
    break;
  case 0x41:
    *param_2 = 0x76;
    break;
  case 0x43:
    *param_2 = 0x7d;
    break;
  case 0x44:
    *param_2 = 0x82;
    break;
  case 0x45:
    *param_2 = 0x3a;
    break;
  case 0x46:
    *param_2 = 0x81;
    break;
  case 0x47:
    *param_2 = 0x84;
    break;
  case 0x48:
    *param_2 = 0x86;
    break;
  case 0x4a:
    *param_2 = 0x88;
    break;
  case 0x4b:
    *param_2 = 0x89;
    break;
  case 0x4c:
    *param_2 = 0x8a;
    break;
  case 0x4d:
    *param_2 = 0x8f;
    break;
  case 0x4e:
    *param_2 = 4;
    goto LAB_10031d944;
  case 0x4f:
switchD_10031d42d_caseD_4f:
    *param_2 = 4;
    goto LAB_10031d9c2;
  case 0x50:
    *param_2 = 4;
    goto LAB_10031d902;
  case 0x51:
switchD_10031d42d_caseD_51:
    *param_2 = 8;
    goto LAB_10031d9e6;
  case 0x52:
switchD_10031d42d_caseD_52:
    *param_2 = 8;
LAB_10031d9c2:
    param_2[2] = 7;
    break;
  case 0x53:
    *param_2 = 8;
    goto LAB_10031d902;
  case 0x54:
    *param_2 = 7;
LAB_10031d944:
    param_2[2] = 2;
    break;
  case 0x55:
switchD_10031d42d_caseD_55:
    *param_2 = 7;
LAB_10031d9e6:
    param_2[2] = 4;
    break;
  case 0x56:
    *param_2 = 7;
LAB_10031d902:
    param_2[2] = 0x19;
    goto LAB_10031da39;
  case 0x57:
    *param_2 = 0x19;
    param_2[2] = 2;
    goto LAB_10031da23;
  case 0x58:
    *param_2 = 0x19;
    param_2[2] = 4;
    goto LAB_10031da23;
  case 0x59:
    *param_2 = 0x19;
    param_2[2] = 7;
LAB_10031da23:
    *(undefined1 *)((long)param_2 + 5) = 1;
    break;
  case 0x5a:
    *param_2 = 0x12;
    param_2[2] = 0x27;
    goto LAB_10031d968;
  case 0x5b:
    *param_2 = 0x12;
    param_2[2] = 4;
    goto LAB_10031d968;
  case 0x5c:
    *param_2 = 0x12;
    param_2[2] = 8;
    goto LAB_10031d968;
  case 0x5d:
    *param_2 = 0x12;
    param_2[2] = 7;
LAB_10031d968:
    *(undefined1 *)(param_2 + 3) = 0;
    break;
  case 0x5e:
    *param_2 = 0x12;
    goto LAB_10031da32;
  case 0x5f:
    *param_2 = 0x77;
    break;
  case 0x60:
    *param_2 = 0x87;
    break;
  case 0x61:
    *param_2 = 0x29;
    break;
  case 100:
    *param_2 = 0x90;
    break;
  case 0x65:
    *param_2 = 0x91;
    break;
  case 0x66:
    *param_2 = 0x94;
    break;
  case 0x67:
    *param_2 = 0x95;
    break;
  case 0x69:
    *param_2 = 0x9a;
    goto LAB_10031d92a;
  case 0x6a:
    *param_2 = 0x9c;
    goto LAB_10031d92a;
  case 0x6b:
    *param_2 = 0x9f;
    break;
  case 0x6c:
    *param_2 = 0xa0;
    break;
  case 0x6d:
    *param_2 = 0xa1;
    break;
  case 0x6e:
    *param_2 = 0x59;
    break;
  case 0x6f:
    *param_2 = 0xf3;
    break;
  case 0x70:
    *param_2 = 0xb7;
LAB_10031d92a:
    *(undefined1 *)(param_2 + 1) = 1;
    break;
  default:
    switch(param_1) {
    case 0x2711:
      goto switchD_10031d42d_caseD_6;
    case 0x2712:
    case 0x2727:
      goto switchD_10031d490_caseD_2712;
    case 0x2713:
    case 0x2728:
      goto switchD_10031d42d_caseD_4f;
    case 0x2714:
    case 0x2729:
      *param_2 = 4;
      goto LAB_10031da32;
    case 0x2715:
      *param_2 = 4;
      param_2[2] = 8;
      goto LAB_10031d459;
    case 0x2716:
    case 0x272a:
      *param_2 = 8;
      break;
    case 0x2717:
    case 0x272b:
      goto switchD_10031d42d_caseD_51;
    case 0x2718:
    case 0x272c:
      goto switchD_10031d42d_caseD_52;
    case 0x2719:
    case 0x272d:
      *param_2 = 8;
      goto LAB_10031da32;
    case 0x271a:
    case 0x272e:
      *param_2 = 7;
      break;
    case 0x271b:
    case 0x272f:
      goto switchD_10031d42d_caseD_55;
    case 0x271c:
    case 0x2730:
      *param_2 = 7;
      goto LAB_10031da32;
    case 0x271d:
    case 0x2731:
      *param_2 = 0x5a;
      param_2[2] = 3;
      goto LAB_10031d92a;
    case 0x271e:
    case 0x2732:
      *param_2 = 0x5a;
      param_2[2] = 4;
      goto LAB_10031d92a;
    case 0x271f:
    case 0x2733:
      *param_2 = 0x5a;
      param_2[2] = 7;
      goto LAB_10031d92a;
    case 0x2720:
      *param_2 = 0x37;
      break;
    case 0x2721:
      *param_2 = 0x37;
      goto LAB_10031d9e6;
    case 0x2722:
      *param_2 = 0x37;
      goto LAB_10031d9c2;
    case 0x2723:
      *param_2 = 0x37;
LAB_10031da32:
      param_2[2] = 0x5a;
LAB_10031da39:
      *(undefined1 *)(param_2 + 3) = 1;
      goto LAB_10031d459;
    case 0x2724:
      *param_2 = 3;
      param_2[2] = 0x22;
      goto LAB_10031d459;
    case 0x2725:
      *param_2 = 0x10;
      param_2[2] = 3;
      goto LAB_10031da23;
    case 0x2726:
      *param_2 = 3;
      param_2[2] = 0x3f;
      goto LAB_10031d459;
    case 0x2734:
      *param_2 = 0x3c;
      break;
    case 0x2735:
      *param_2 = 0x3c;
      goto LAB_10031d9e6;
    case 0x2736:
      *param_2 = 0x3c;
      goto LAB_10031d9c2;
    default:
      if (2 < param_1 - 0x2af9U) goto switchD_10031d42d_caseD_0;
      goto switchD_10031d490_caseD_2712;
    }
    goto LAB_10031d9d4;
  }
LAB_10031d459:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
switchD_10031d490_caseD_2712:
  *param_2 = 4;
LAB_10031d9d4:
  param_2[2] = 3;
  goto LAB_10031d459;
}

