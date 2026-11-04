// name: FUN_1001cb5de
// address: 1001cb5de

int FUN_1001cb5de(int *param_1,ulong param_2,ulong *param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong local_40;
  long local_38;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006ae21e(uVar5);
    }
  }
  else {
    if (param_3 != (ulong *)0x0) {
      iVar4 = FUN_1001c955b(param_1,param_2,0,0,&local_38);
      if (iVar4 == -0x80) {
        return -0x80;
      }
      if (iVar4 != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 == '\0') {
          return iVar4;
        }
        FUN_1006ae13c(iVar4,uVar5);
        return iVar4;
      }
      if (local_38 == 0) {
        iVar4 = FUN_1001c9b1d(param_1,&local_38);
        if (iVar4 == -0x80) {
          return -0x80;
        }
        if (iVar4 != 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 == '\0') {
            return iVar4;
          }
          FUN_1006ae0d0(iVar4,uVar5);
          return iVar4;
        }
        iVar4 = FUN_1001c9f0c(local_38,param_2 & 0xffffffff,0,0);
        if (iVar4 == -0x80) {
          return -0x80;
        }
        if (iVar4 != 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 == '\0') {
            return iVar4;
          }
          FUN_1006ae064(iVar4,uVar5);
          return iVar4;
        }
      }
      switch(param_4) {
      case 1:
        uVar5 = 1;
        break;
      case 2:
        uVar2 = *param_3;
        param_3 = &local_40;
        local_40 = CONCAT62(local_40._2_6_,(ushort)uVar2 << 8 | (ushort)uVar2 >> 8);
        uVar5 = 2;
        break;
      default:
        return -0x32;
      case 4:
        uVar1 = (uint)*param_3;
        param_3 = &local_40;
        local_40 = CONCAT44(local_40._4_4_,
                            uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                            uVar1 << 0x18);
        uVar5 = 4;
        break;
      case 8:
        uVar2 = *param_3;
        local_40 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                   (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                   (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 | (uVar2 & 0xff00) << 0x28
                   | uVar2 << 0x38;
        param_3 = &local_40;
        uVar5 = 8;
      }
      iVar4 = FUN_1001cacbc(local_38,1,0x15,param_3,uVar5);
      return iVar4;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006ae1a8(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

