// name: FUN_10063d0d0
// address: 10063d0d0

ulong FUN_10063d0d0(long param_1,int param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar11;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined2 uStack_24c;
  undefined2 uStack_24a;
  undefined6 uStack_248;
  undefined2 uStack_242;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  ulong uVar10;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = uVar10;
  switch(param_2) {
  case 1:
    if (param_4 != 0x16c) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_258 = 0x8220202;
        uStack_254 = 0x7a0a90;
        uStack_250 = 1;
        uStack_24c = 0x822;
        uStack_24a = 0x7227;
        uStack_248 = 0x1007f;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
      }
      FUN_1001782e9(0,0);
    }
    uVar4 = FUN_10063ca52(param_1,param_3);
LAB_10063d491:
    uVar8 = (ulong)uVar4;
    goto switchD_10063d118_caseD_14;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x25:
  case 0x2e:
  case 0x33:
  case 0x36:
  case 0x39:
  case 0x3a:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x44:
    uVar8 = uVar9;
    if ((*(char *)(param_1 + 0x8a2) != '\0') || (0x42 < param_2 - 2U))
    goto switchD_10063d118_caseD_14;
    break;
  case 0xb:
  case 0xd:
  case 0x11:
  case 0x15:
  case 0x24:
  case 0x2b:
  case 0x2d:
  case 0x30:
  case 0x34:
  case 0x38:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x42:
  case 0x43:
    lVar7 = *(long *)(param_1 + 0x418);
    uVar8 = uVar9;
    if (lVar7 == 0) goto switchD_10063d118_caseD_14;
    if (param_2 < 0x24) {
      if (param_2 == 0xb) {
        if ((*(int *)(lVar7 + 0x3c) == 0x48545450) ||
           (uVar8 = 0, *(int *)(lVar7 + 0x3c) == 0x46494c45)) {
          FUN_10056ddd3(&local_258,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
          uVar5 = FUN_1001b83ae(&local_258);
          uVar3 = FUN_1001b83f0(&local_258);
          uVar4 = FUN_1002b4c66(lVar7,uVar5,uVar3);
          uVar8 = (ulong)uVar4;
          FUN_1001b7a50(&local_258);
        }
        FUN_1005389ba(param_1 + 0x420,0xf);
      }
      else if (param_2 == 0x11) {
        if (*(int *)(lVar7 + 0x3c) == 0x48545450) {
          FUN_10056ddd3(&local_258,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
          uVar4 = FUN_1002b52f0(lVar7,&local_258);
          uVar10 = (ulong)uVar4;
          goto LAB_10063dd58;
        }
      }
      else if (param_2 == 0x15) {
        local_258 = 0;
        uStack_254 = 0;
        iVar2 = FUN_1001755d6(param_4 & 0xffffffff,param_3);
        if (iVar2 == 0) {
          FUN_1002af370(lVar7,CONCAT44(uStack_254,local_258));
          FUN_100175848(CONCAT44(uStack_254,local_258));
          FUN_1005389ba(param_1 + 0x420,0x58);
        }
      }
      goto switchD_10063d118_caseD_14;
    }
    if (0x17 < param_2 - 0x2bU) {
      if (param_2 == 0x24) {
        local_218 = 0;
        uStack_210 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_238 = 0;
        uStack_230 = 0;
        uStack_248 = 0;
        uStack_242 = 0;
        uStack_240 = 0;
        local_258 = 0;
        uStack_254 = 0;
        uStack_250 = 0;
        uStack_24c = 0;
        uStack_24a = 0;
        local_208 = 0;
        if (0x54 < param_4) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "inObjectSize <= sizeof( dbVideoCharacteristics )";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          param_4 = 0x54;
        }
        FUN_1001c631b(param_3,&local_258,param_4);
        uVar4 = FUN_100383970(&local_258,lVar7);
        goto LAB_10063d491;
      }
      goto switchD_10063d118_caseD_14;
    }
    lVar6 = *(long *)(param_1 + 8);
    switch(param_2) {
    case 0x2b:
      FUN_1002af0ff(lVar7);
      uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar6 + 0x2250,
                            *(long *)(lVar7 + 0x10) + 0x68);
      uVar8 = (ulong)uVar4;
      uVar5 = 0x77;
      break;
    default:
      goto switchD_10063d118_caseD_14;
    case 0x2d:
      FUN_1002af0ff(lVar7);
      uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar6 + 0x22a0,
                            *(long *)(lVar7 + 0x10) + 0x6c);
      uVar8 = (ulong)uVar4;
      uVar5 = 0x7b;
      break;
    case 0x30:
      FUN_1002af0ff(lVar7);
      FUN_10056e0bb(&local_258,param_3,param_4);
      uVar8 = 0;
      lVar6 = FUN_100171413(0,0,CONCAT44(uStack_254,local_258));
      *(long *)(*(long *)(lVar7 + 0x10) + 0x98) = lVar6;
      if (lVar6 == 0) {
        uVar8 = 0xffffff94;
      }
      FUN_1001a8fac(&local_258);
      goto switchD_10063d118_caseD_14;
    case 0x34:
      FUN_1002af0ff(lVar7);
      uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar6 + 0x22f0,
                            *(long *)(lVar7 + 0x10) + 0x70);
      uVar8 = (ulong)uVar4;
      uVar5 = 0x80;
      break;
    case 0x38:
      lVar7 = FUN_1002b7275(lVar7,1);
      if (lVar7 != 0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) goto LAB_10063da49;
        goto LAB_10063e287;
      }
      goto switchD_10063d118_caseD_14;
    case 0x3b:
      FUN_1002af0ff(lVar7);
      uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar6 + 0x2390,
                            *(long *)(lVar7 + 0x10) + 0x74);
      uVar8 = (ulong)uVar4;
      uVar5 = 0x90;
      break;
    case 0x3c:
      FUN_1002af0ff(lVar7);
      uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar6 + 0x23e0,
                            *(long *)(lVar7 + 0x10) + 0x78);
      uVar8 = (ulong)uVar4;
      uVar5 = 0x91;
      break;
    case 0x3d:
      FUN_1002af0ff(lVar7);
      uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar6 + 0x2390,
                            *(long *)(lVar7 + 0x10) + 0x7c);
      uVar8 = (ulong)uVar4;
      uVar5 = 0x94;
      break;
    case 0x3e:
      FUN_1002af0ff(lVar7);
      uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar6 + 0x23e0,
                            *(long *)(lVar7 + 0x10) + 0x80);
      uVar8 = (ulong)uVar4;
      uVar5 = 0x95;
      break;
    case 0x42:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        uVar8 = FUN_100320e05(lVar7,param_4 & 0xffffffff,param_3);
        return uVar8;
      }
      goto LAB_10063e287;
    }
    goto LAB_10063e0b4;
  case 0x14:
  case 0x1a:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2c:
  case 0x2f:
  case 0x31:
  case 0x32:
  case 0x35:
  case 0x37:
    goto switchD_10063d118_caseD_14;
  default:
    if (param_2 == 0x616d7469) {
      if (param_4 == 0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          uVar8 = FUN_10063e540(param_1);
          return uVar8;
        }
        goto LAB_10063e287;
      }
      if (param_4 != 0x178) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_258 = 0x8220202;
          uStack_254 = 0x7a0a90;
          uStack_250 = 1;
          uStack_24c = 0x822;
          uStack_24a = 0x7200;
          uStack_248 = 0x1007f;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
        }
        FUN_1001782e9(0,0);
      }
      uVar4 = FUN_10063bcac(param_1,param_3);
      goto LAB_10063d491;
    }
    if (param_2 == 0x616d746c) {
      if (param_4 == 0) {
        *(undefined1 *)(param_1 + 0x89c) = 1;
        uVar8 = uVar9;
        if (*(char *)(param_1 + 0x89b) == '\x01') {
          FUN_1002fb422(*(undefined8 *)(param_1 + 8));
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x89b) = 0;
      }
    }
    goto switchD_10063d118_caseD_14;
  }
  lVar7 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x410);
  switch(param_2) {
  case 2:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1c10,lVar6 + 0xd8
                         );
    uVar8 = (ulong)uVar4;
    uVar5 = 2;
    break;
  case 3:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1c60,lVar6 + 0xe4
                         );
    uVar8 = (ulong)uVar4;
    uVar5 = 3;
    break;
  case 4:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1cb0,lVar6 + 0xdc
                         );
    uVar8 = (ulong)uVar4;
    uVar5 = 4;
    break;
  case 5:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1df0,lVar6 + 0xf0
                         );
    uVar8 = (ulong)uVar4;
    uVar5 = 8;
    break;
  case 6:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1e40,lVar6 + 0xf4
                         );
    uVar8 = (ulong)uVar4;
    uVar5 = 9;
    break;
  case 7:
    lVar7 = lVar7 + 0x1e90;
    puVar11 = (undefined4 *)(lVar6 + 0xf8);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7,puVar11);
    uVar8 = (ulong)uVar4;
    if (uVar4 == 0) {
      FUN_1001de41f(lVar7,*puVar11,&local_258);
      cVar1 = FUN_1002bcc67(&local_258,&local_258);
      if (cVar1 == '\0') {
        uVar8 = 0;
      }
      else {
        uVar4 = FUN_1001ddeca(lVar7,&local_258,puVar11);
        FUN_1005389ba(param_1 + 0x420,0x11);
        uVar8 = (ulong)uVar4;
      }
    }
    goto switchD_10063d118_caseD_14;
  case 8:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1ee0,lVar6 + 0xfc
                         );
    uVar8 = (ulong)uVar4;
    uVar5 = 0xe;
    break;
  case 9:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1f30,
                          lVar6 + 0x100);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x37;
    break;
  case 10:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1f80,
                          lVar6 + 0x104);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x15;
    break;
  default:
    goto switchD_10063d118_caseD_14;
  case 0xc:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1cb0,lVar6 + 0xec
                         );
    uVar8 = (ulong)uVar4;
    uVar5 = 0x12;
    break;
  case 0xe:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1d00,lVar6 + 0xe8
                         );
    uVar8 = (ulong)uVar4;
    uVar5 = 0x27;
    break;
  case 0x12:
    FUN_100471a46(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x2020,
                          *(long *)(lVar6 + 0x70) + 0x20);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x36;
    break;
  case 0x13:
    FUN_10056ddd3(&local_258,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_10047d390(lVar6,PTR_cf_external_guid_100844b48,&local_258,1);
    FUN_1001b7a50(&local_258);
    FUN_1005389ba(param_1 + 0x420,0x57);
    goto switchD_10063d118_caseD_14;
  case 0x16:
    FUN_100471a46(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x2020,
                          *(long *)(lVar6 + 0x70) + 0x24);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x56;
    break;
  case 0x17:
    if (param_4 != 0x34) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_258 = 0x8220202;
        uStack_254 = 0x7a0a90;
        uStack_250 = 1;
        uStack_24c = 0x822;
        uStack_24a = 0x71a2;
        uStack_248 = 0x1007f;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
      }
      FUN_1001782e9(0,0);
      lVar6 = *(long *)(param_1 + 0x410);
    }
    FUN_10063c9ec(param_3,lVar6);
    goto switchD_10063d118_caseD_14;
  case 0x18:
    FUN_100471fde(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x2070,
                          *(long *)(lVar6 + 0x78) + 0x28);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x3e;
    break;
  case 0x19:
    FUN_100471fde(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x2160,
                          *(long *)(lVar6 + 0x78) + 0x2c);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x40;
    break;
  case 0x1b:
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1cb0,lVar6 + 0xe0
                         );
    uVar8 = (ulong)uVar4;
    uVar5 = 0x47;
    break;
  case 0x1c:
    FUN_100471a46(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x21b0,
                          *(long *)(lVar6 + 0x70) + 0x1c);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x59;
    break;
  case 0x1d:
    FUN_100471fde(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x2200,
                          *(long *)(lVar6 + 0x78) + 0x24);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x54;
    break;
  case 0x1e:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar5 = 0;
LAB_10063df74:
      uVar8 = FUN_10063c950(param_1,param_3,param_4,uVar5);
      return uVar8;
    }
    goto LAB_10063e287;
  case 0x1f:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar5 = 1;
      goto LAB_10063df74;
    }
    goto LAB_10063e287;
  case 0x20:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar5 = 2;
      goto LAB_10063df74;
    }
    goto LAB_10063e287;
  case 0x21:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar5 = 3;
      goto LAB_10063df74;
    }
    goto LAB_10063e287;
  case 0x22:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar5 = 4;
      goto LAB_10063df74;
    }
    goto LAB_10063e287;
  case 0x23:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar5 = 5;
      goto LAB_10063df74;
    }
    goto LAB_10063e287;
  case 0x25:
    FUN_10056ddd3(&local_258,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_10047d35d(lVar6,&local_258);
    FUN_1001b7a50(&local_258);
    FUN_1005389ba(param_1 + 0x420,0x55);
    goto switchD_10063d118_caseD_14;
  case 0x2e:
    FUN_100471a46(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x2340,
                          *(long *)(lVar6 + 0x70) + 0x2c);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x7c;
    break;
  case 0x33:
    FUN_100471a46(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x2020,
                          *(long *)(lVar6 + 0x70) + 0x28);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x7f;
    break;
  case 0x36:
    lVar7 = FUN_100480f6c(lVar6,1);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
LAB_10063da49:
      uVar8 = FUN_10056e11f(param_3,param_4,lVar7);
      return uVar8;
    }
    goto LAB_10063e287;
  case 0x39:
    FUN_10056ddd3(&local_258,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_10047d390(lVar6,PTR_cf_download_url_100844b40,&local_258,1);
LAB_10063dd58:
    FUN_1001b7a50(&local_258);
    uVar8 = uVar10;
    goto switchD_10063d118_caseD_14;
  case 0x3a:
    FUN_10056ddd3(&local_258,param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1);
    FUN_10047d48f(lVar6,&local_258);
    FUN_1001b7a50(&local_258);
    FUN_1005389ba(param_1 + 0x420,0x55);
switchD_10063d118_caseD_14:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return uVar8;
    }
    goto LAB_10063e287;
  case 0x3f:
    FUN_100471a46(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1d50,
                          *(long *)(lVar6 + 0x70) + 0x14);
    uVar8 = (ulong)uVar4;
    uVar5 = 0x9f;
    break;
  case 0x40:
    FUN_100471a46(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x1da0,
                          *(long *)(lVar6 + 0x70) + 0x18);
    uVar8 = (ulong)uVar4;
    uVar5 = 0xa0;
    break;
  case 0x41:
    FUN_100471fde(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x2160,
                          *(long *)(lVar6 + 0x78) + 0x30);
    uVar8 = (ulong)uVar4;
    uVar5 = 0xa8;
    break;
  case 0x44:
    FUN_100471fde(lVar6);
    uVar4 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar7 + 0x20c0,
                          *(long *)(lVar6 + 0x78) + 0x34);
    uVar8 = (ulong)uVar4;
    uVar5 = 0xbc;
  }
LAB_10063e0b4:
  FUN_1005389ba(param_1 + 0x420,uVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8;
  }
LAB_10063e287:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

