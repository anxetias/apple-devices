// name: FUN_10031c728
// address: 10031c728

void FUN_10031c728(uint param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "fieldInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10031d0a9;
  }
  uVar7 = (ulong)param_1;
  if ((param_1 < 0xc0) && (lVar8 = uVar7 * 0x20, *(short *)(&DAT_1008bbfb0 + lVar8) != 0)) {
    uVar1 = *(undefined4 *)(&DAT_1008bbfb0 + lVar8);
    uVar2 = *(undefined4 *)(lVar8 + 0x1008bbfb4);
    uVar3 = *(undefined4 *)(lVar8 + 0x1008bbfb8);
    uVar4 = *(undefined4 *)(lVar8 + 0x1008bbfbc);
    uVar6 = *(undefined8 *)(lVar8 + 0x1008bbfc8);
    param_2[2] = *(undefined8 *)(&DAT_1008bbfc0 + lVar8);
    param_2[3] = uVar6;
    *(undefined4 *)param_2 = uVar1;
    *(undefined4 *)((long)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((long)param_2 + 0xc) = uVar4;
    goto LAB_10031d0a9;
  }
  *(undefined4 *)param_2 = 1;
  *(undefined8 *)((long)param_2 + 4) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  switch(uVar7) {
  case 0:
  case 0x13:
  case 0x38:
  case 0x42:
  case 0x43:
  case 0x5c:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x73:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x87:
  case 0x8c:
  case 0x93:
    *(undefined2 *)param_2 = 2;
    break;
  case 1:
    *(undefined2 *)param_2 = 0xd;
    *(undefined4 *)(param_2 + 1) = 1;
    break;
  case 2:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined8 *)((long)param_2 + 4) = 0x500000001;
    param_2[2] = FUN_100476928;
    pcVar9 = FUN_100476b40;
    goto LAB_10031d091;
  case 3:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined8 *)((long)param_2 + 4) = 0x600000008;
    param_2[2] = FUN_1004772c4;
    pcVar9 = FUN_10047750f;
    goto LAB_10031d091;
  case 4:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined8 *)((long)param_2 + 4) = 0x700000004;
    param_2[2] = FUN_1004779ac;
    pcVar9 = FUN_100477ba5;
    goto LAB_10031d091;
  case 5:
    *(undefined4 *)param_2 = 0x40006;
    uVar6 = 0x800008000;
    goto LAB_10031cf77;
  case 6:
    *(undefined4 *)param_2 = 0x50007;
    uVar6 = 0x1000010000;
    goto LAB_10031cf77;
  case 7:
    *(undefined4 *)param_2 = 0x40006;
    uVar6 = 0xf00000080;
    goto LAB_10031cf77;
  case 8:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined8 *)((long)param_2 + 4) = 0x900000010;
    param_2[2] = FUN_10047a7b5;
    pcVar9 = FUN_10047a94e;
    goto LAB_10031d091;
  case 9:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined8 *)((long)param_2 + 4) = 0xa00000020;
    param_2[2] = FUN_10047aca3;
    pcVar9 = FUN_10047ae3c;
    goto LAB_10031d091;
  case 10:
    *(undefined2 *)param_2 = 8;
    uVar6 = 0xb00080000;
    goto LAB_10031cf77;
  case 0xb:
  case 0x34:
    *(undefined4 *)param_2 = 0x30006;
    uVar6 = 0xc00000040;
    goto LAB_10031cf77;
  case 0xc:
    *(undefined4 *)param_2 = 0x50006;
    uVar6 = 0xd00004000;
    goto LAB_10031cf77;
  case 0xd:
    *(undefined4 *)param_2 = 0xc0009;
    uVar6 = 0xe00000800;
    goto LAB_10031cf77;
  case 0xe:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined8 *)((long)param_2 + 4) = 0x1500000400;
    param_2[2] = FUN_10047b65a;
    pcVar9 = FUN_10047b7f3;
    goto LAB_10031d091;
  case 0xf:
    *(undefined2 *)param_2 = 0xd;
    *(undefined4 *)(param_2 + 1) = 0x12;
    break;
  case 0x10:
    *(undefined2 *)param_2 = 8;
    *(undefined4 *)(param_2 + 1) = 0x16;
    break;
  case 0x11:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined8 *)((long)param_2 + 4) = 0x1700000200;
    param_2[2] = FUN_10047b307;
    pcVar9 = FUN_10047b4a0;
    goto LAB_10031d091;
  case 0x12:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined8 *)((long)param_2 + 4) = 0x1800200000;
    param_2[2] = FUN_10047a0d2;
    pcVar9 = FUN_10047a26b;
    goto LAB_10031d091;
  case 0x14:
    *(undefined2 *)param_2 = 6;
    *(undefined4 *)(param_2 + 1) = 0x19;
    break;
  case 0x15:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x13;
    param_2[2] = FUN_10047d8a6;
    pcVar9 = FUN_10047da3f;
    goto LAB_10031d091;
  case 0x16:
    *(undefined4 *)param_2 = 0x60006;
    uVar6 = 0x1a02000000;
    goto LAB_10031cf77;
  case 0x17:
    *(undefined2 *)param_2 = 8;
    uVar6 = 0x1b04000000;
    goto LAB_10031cf77;
  case 0x18:
  case 0x31:
    *(undefined4 *)param_2 = 0x30006;
    uVar6 = 0x1c00800000;
    goto LAB_10031cf77;
  case 0x19:
    *(undefined4 *)param_2 = 0x30005;
    uVar6 = 0x1d01000000;
    goto LAB_10031cf77;
  default:
    if (0xbf < param_1) goto LAB_10031d0a9;
    break;
  case 0x1b:
  case 0x24:
    *(undefined2 *)param_2 = 10;
    break;
  case 0x1c:
  case 0x28:
  case 0x8e:
  case 0xae:
  case 0xb0:
    *(undefined2 *)param_2 = 0xb;
    break;
  case 0x1d:
  case 0x7d:
    *(undefined2 *)param_2 = 0xc;
    *(undefined4 *)(param_2 + 1) = 0x43;
    break;
  case 0x1e:
    *(undefined2 *)param_2 = 10;
    *(undefined4 *)(param_2 + 1) = 4;
    break;
  case 0x1f:
    *(undefined2 *)param_2 = 0xc;
    *(undefined4 *)((long)param_2 + 4) = 0x400000;
    break;
  case 0x20:
    *(undefined2 *)param_2 = 8;
    *(undefined4 *)(param_2 + 1) = 0x27;
    break;
  case 0x21:
    *(undefined2 *)param_2 = 7;
    *(undefined4 *)(param_2 + 1) = 0x26;
    break;
  case 0x22:
    *(undefined2 *)param_2 = 8;
    *(undefined4 *)(param_2 + 1) = 0x28;
    break;
  case 0x23:
    *(undefined4 *)param_2 = 0x30006;
    uVar6 = 0x2908000000;
LAB_10031cf77:
    *(undefined8 *)((long)param_2 + 4) = uVar6;
    break;
  case 0x25:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x35:
  case 0x76:
  case 0x8b:
  case 0x97:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xbd:
  case 0xbe:
    *(undefined2 *)param_2 = 6;
    break;
  case 0x26:
    *(undefined2 *)param_2 = 7;
    *(undefined4 *)(param_2 + 1) = 0x2a;
    break;
  case 0x27:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined8 *)((long)param_2 + 4) = 0x2b10000000;
    param_2[2] = FUN_100478a09;
    pcVar9 = FUN_100478ba2;
    goto LAB_10031d091;
  case 0x29:
    *(undefined2 *)param_2 = 6;
    *(undefined4 *)(param_2 + 1) = 0x61;
    break;
  case 0x2e:
  case 0x2f:
  case 0x4c:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x6e:
  case 0x71:
  case 0x7e:
  case 0x7f:
  case 0x96:
    *(undefined2 *)param_2 = 0xd;
    break;
  case 0x30:
  case 0x9b:
  case 0xaf:
  case 0xb1:
    *(undefined2 *)param_2 = 0xe;
    break;
  case 0x32:
    uVar6 = 0x1000000c0009;
    goto LAB_10031cef3;
  case 0x33:
    uVar6 = 0x2000000c0009;
LAB_10031cef3:
    *param_2 = uVar6;
    break;
  case 0x36:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x14;
    param_2[2] = FUN_10047c1d6;
    pcVar9 = FUN_10047c370;
    goto LAB_10031d091;
  case 0x37:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x11;
    param_2[2] = FUN_10047ced8;
    pcVar9 = FUN_10047d071;
    goto LAB_10031d091;
  case 0x39:
  case 0x3b:
  case 0x46:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x70:
  case 0x75:
  case 0x83:
  case 0x8d:
  case 0x98:
  case 0x99:
  case 0x9d:
  case 0x9e:
  case 0xa3:
  case 0xa4:
  case 0xab:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
    *(undefined2 *)param_2 = 0xc;
    break;
  case 0x3a:
    *(undefined2 *)param_2 = 0xe;
    *(undefined4 *)(param_2 + 1) = 0x45;
    break;
  case 0x3c:
  case 0x85:
  case 0xb2:
  case 0xb8:
    *(undefined2 *)param_2 = 0x10;
    break;
  case 0x3e:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x2c;
    param_2[2] = FUN_10047dc87;
    pcVar9 = FUN_10047de81;
    goto LAB_10031d091;
  case 0x3f:
    *(undefined2 *)param_2 = 6;
    *(undefined4 *)(param_2 + 1) = 0x2d;
    break;
  case 0x40:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x2e;
    param_2[2] = FUN_10047e782;
    pcVar9 = FUN_10047e91c;
    goto LAB_10031d091;
  case 0x41:
    *(undefined2 *)param_2 = 6;
    *(undefined4 *)(param_2 + 1) = 0x2f;
    break;
  case 0x44:
    *(undefined4 *)param_2 = 0x60006;
    *(undefined4 *)(param_2 + 1) = 0x31;
    break;
  case 0x45:
    *(undefined2 *)param_2 = 8;
    *(undefined4 *)(param_2 + 1) = 0x32;
    break;
  case 0x47:
    *(undefined4 *)param_2 = 0xff0003;
    uVar6 = 0x3340000000;
    goto LAB_10031d07b;
  case 0x48:
    *(undefined2 *)param_2 = 10;
    *(undefined4 *)(param_2 + 1) = 2;
    break;
  case 0x49:
    *(undefined2 *)param_2 = 10;
    *(undefined4 *)(param_2 + 1) = 3;
    break;
  case 0x4a:
    *(undefined2 *)param_2 = 5;
    *(undefined4 *)((long)param_2 + 4) = 0x100;
    break;
  case 0x4b:
    *(undefined2 *)param_2 = 0x10;
    *(undefined4 *)((long)param_2 + 4) = 0x20000;
    break;
  case 0x4d:
    *(undefined4 *)param_2 = 0xff0003;
    uVar6 = 0x3540000000;
LAB_10031d07b:
    *(undefined8 *)((long)param_2 + 4) = uVar6;
    param_2[2] = FUN_100478022;
    pcVar9 = FUN_1004781bb;
    goto LAB_10031d091;
  case 0x4e:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 5;
    param_2[2] = FUN_100476dde;
    pcVar9 = FUN_100476ded;
    goto LAB_10031d091;
  case 0x4f:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 6;
    param_2[2] = FUN_1004777af;
    pcVar9 = FUN_1004777c1;
    goto LAB_10031d091;
  case 0x50:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 7;
    param_2[2] = FUN_100477d64;
    pcVar9 = FUN_100477d76;
    goto LAB_10031d091;
  case 0x51:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x33;
    param_2[2] = FUN_10047837a;
    pcVar9 = FUN_10047838c;
    goto LAB_10031d091;
  case 0x52:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x18;
    param_2[2] = FUN_10047a42b;
    pcVar9 = FUN_10047a43d;
    goto LAB_10031d091;
  case 0x53:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x2c;
    param_2[2] = FUN_10047e041;
    pcVar9 = FUN_10047e053;
    goto LAB_10031d091;
  case 0x59:
    *(undefined4 *)param_2 = 0xff0003;
    param_2[2] = FUN_100475454;
    param_2[3] = FUN_10047bd02;
    *(undefined4 *)(param_2 + 1) = 0x6e;
    break;
  case 0x5a:
    *(undefined4 *)param_2 = 0x30005;
    *(undefined4 *)(param_2 + 1) = 0x36;
    break;
  case 0x5b:
    *(undefined2 *)param_2 = 8;
    *(undefined4 *)(param_2 + 1) = 0x37;
    break;
  case 0x5d:
    *(undefined2 *)param_2 = 9;
    break;
  case 0x68:
    *(undefined4 *)param_2 = 0xff0003;
    param_2[2] = FUN_10047c16c;
    break;
  case 0x6f:
    *(undefined2 *)param_2 = 6;
    *(undefined4 *)(param_2 + 1) = 0x3c;
    break;
  case 0x72:
    *(undefined2 *)param_2 = 0xb;
    *(undefined4 *)(param_2 + 1) = 0x3e;
    break;
  case 0x77:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x5f;
    break;
  case 0x7b:
    *(undefined4 *)param_2 = 0x1f0004;
    *(undefined4 *)(param_2 + 1) = 0x40;
    break;
  case 0x7c:
  case 0x80:
    *(undefined4 *)param_2 = 0xff0003;
    break;
  case 0x81:
    *(undefined2 *)param_2 = 6;
    *(undefined4 *)(param_2 + 1) = 0x46;
    break;
  case 0x82:
    *(undefined2 *)param_2 = 0xe;
    *(undefined4 *)(param_2 + 1) = 0x44;
    break;
  case 0x84:
    *(undefined2 *)param_2 = 6;
    *(undefined4 *)(param_2 + 1) = 0x47;
    break;
  case 0x86:
    *(undefined2 *)param_2 = 0xe;
    *(undefined4 *)(param_2 + 1) = 0x48;
    break;
  case 0x88:
    *(undefined4 *)param_2 = 0x30006;
    *(undefined4 *)(param_2 + 1) = 0x4a;
    break;
  case 0x89:
    *(undefined2 *)param_2 = 6;
    *(undefined4 *)(param_2 + 1) = 0x4b;
    break;
  case 0x8a:
    *(undefined2 *)param_2 = 0xe;
    *(undefined4 *)(param_2 + 1) = 0x4c;
    break;
  case 0x8f:
    *(undefined2 *)param_2 = 0xb;
    *(undefined4 *)(param_2 + 1) = 0x4d;
    break;
  case 0x90:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 100;
    break;
  case 0x91:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x65;
    break;
  case 0x92:
  case 0xac:
  case 0xad:
    *(undefined2 *)param_2 = 0x12;
    break;
  case 0x94:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x66;
    break;
  case 0x95:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x67;
    break;
  case 0x9a:
    *(undefined2 *)param_2 = 0xe;
    *(undefined4 *)(param_2 + 1) = 0x69;
    break;
  case 0x9c:
    *(undefined2 *)param_2 = 0xe;
    *(undefined4 *)(param_2 + 1) = 0x6a;
    break;
  case 0x9f:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x6b;
    param_2[2] = FUN_100478ed2;
    pcVar9 = FUN_10047906c;
    goto LAB_10031d091;
  case 0xa0:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x6c;
    param_2[2] = FUN_1004793b3;
    pcVar9 = FUN_10047954d;
    goto LAB_10031d091;
  case 0xa1:
  case 0xa2:
    *(undefined4 *)param_2 = 0x30006;
    *(undefined4 *)(param_2 + 1) = 0x6d;
    break;
  case 0xa8:
    *(undefined4 *)param_2 = 0xff0003;
    param_2[2] = FUN_10047ea77;
    pcVar9 = FUN_10047ec71;
    goto LAB_10031d091;
  case 0xa9:
    *(undefined2 *)param_2 = 8;
    break;
  case 0xaa:
    *(undefined2 *)param_2 = 0xf;
    break;
  case 0xb7:
    *(undefined2 *)param_2 = 8;
    *(undefined4 *)(param_2 + 1) = 0x70;
    break;
  case 0xbc:
    *(undefined4 *)param_2 = 0xff0003;
    *(undefined4 *)(param_2 + 1) = 0x2d;
    param_2[2] = FUN_10047e42d;
    pcVar9 = FUN_10047e5c7;
LAB_10031d091:
    param_2[3] = pcVar9;
  }
  lVar8 = uVar7 * 0x20;
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((long)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((long)param_2 + 0xc);
  uVar6 = param_2[3];
  *(undefined8 *)(&DAT_1008bbfc0 + lVar8) = param_2[2];
  *(undefined8 *)(lVar8 + 0x1008bbfc8) = uVar6;
  *(undefined4 *)(&DAT_1008bbfb0 + lVar8) = uVar1;
  *(undefined4 *)(lVar8 + 0x1008bbfb4) = uVar2;
  *(undefined4 *)(lVar8 + 0x1008bbfb8) = uVar3;
  *(undefined4 *)(lVar8 + 0x1008bbfbc) = uVar4;
LAB_10031d0a9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

