// name: FUN_10018a8ec
// address: 10018a8ec

int FUN_10018a8ec(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4,ulong *param_5,
                 uint param_6)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_40;
  uint local_38;
  undefined4 uStack_34;
  
  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100690091(uVar4);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if (param_2 == (long *)0x0 && param_4 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10069001b(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  iVar3 = FUN_10017cc65(param_1,0x64617461,(param_6 & 4) << 8 | 0x201,&local_40);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = FUN_10017ce92(local_40,&local_38);
  if (iVar3 == 0) {
    uVar1 = CONCAT44(uStack_34,local_38);
    iVar3 = -0x6c;
    if (uVar1 < 0x1f400001) {
      if (param_2 == (long *)0x0) {
        if (param_4 == (undefined8 *)0x0) goto LAB_10018aab7;
        uVar6 = 0;
        if ((param_6 & 2) == 0) {
          uVar6 = uVar1;
        }
        uVar4 = FUN_100170ea9(param_3,uVar6);
        *param_4 = uVar4;
        FUN_10017103d(uVar4,CONCAT44(uStack_34,local_38));
        lVar5 = FUN_100170f7f(*param_4);
      }
      else {
        lVar5 = FUN_1001c63e1(uVar1 + 4);
        *param_2 = lVar5;
      }
      if (lVar5 != 0) {
        FUN_10017d068(local_40,0);
        iVar3 = FUN_10017d186(local_40,lVar5,CONCAT44(uStack_34,local_38),1,0);
        if (iVar3 == 0) {
          iVar3 = 0;
          if (param_5 != (ulong *)0x0) {
            *param_5 = (ulong)local_38;
            iVar3 = 0;
          }
        }
        else if (param_2 == (long *)0x0) {
          if (param_4 != (undefined8 *)0x0) {
            FUN_10017060f(*param_4);
            *param_4 = 0;
          }
        }
        else {
          FUN_1001c64c1(*param_2);
          *param_2 = 0;
        }
      }
    }
  }
LAB_10018aab7:
  FUN_10017cdfb(local_40);
  return iVar3;
}

