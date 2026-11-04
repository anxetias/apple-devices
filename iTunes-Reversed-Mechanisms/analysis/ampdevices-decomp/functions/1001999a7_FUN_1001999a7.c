// name: FUN_1001999a7
// address: 1001999a7

int FUN_1001999a7(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *local_70 [3];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  local_40 = 0;
  if ((param_2 == (int *)0x0) || (*param_2 != 0x6874646c)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100697df2(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    local_58 = param_4;
    local_50 = param_1;
    local_34 = param_6;
    if (param_2[1] != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100697d7c(uVar3);
      }
      FUN_1001782e9(1,0);
    }
    param_2[1] = 1;
    *(undefined1 *)((long)param_2 + 0x51) = 0;
    FUN_10017060f(*(undefined8 *)(param_2 + 0x16));
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    FUN_10017060f(*(undefined8 *)(param_2 + 0x18));
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    FUN_1001c62d9(local_70,0x18);
    local_70[0] = param_2;
    if (*(code **)(param_2 + 2) != (code *)0x0) {
      (**(code **)(param_2 + 2))(0x636f6e73,param_3,0,param_2 + 4);
    }
    uVar4 = (uint)param_5;
    local_48 = param_3;
    FUN_10017060f(*(undefined8 *)(param_2 + 0xc));
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    if ((param_5 & 8) != 0) {
      *(undefined1 *)(param_2 + 10) = 1;
    }
    if ((uVar4 & 0x102) == 0x100) {
      *(undefined1 *)(param_2 + 0x14) = 1;
    }
    iVar5 = (uint)((param_5 & 4) == 0) * 0x20 +
            ((uint)(param_5 >> 6) & 8 | (uint)(param_5 >> 5) & 4 | uVar4 & 2);
    iVar6 = iVar5 + 0x81;
    iVar2 = iVar6;
    if ((uVar4 >> 10 & 1) == 0) {
      cVar1 = FUN_1001cd44e("http-no-large-download",0,0);
      iVar2 = iVar5 + 0x100081;
      if (cVar1 != '\0') {
        iVar2 = iVar6;
      }
    }
    iVar2 = FUN_10019b807(DAT_100700af8,local_50,1,param_2 + 0x1a,local_48,&local_40,param_2 + 0x18,
                          0,local_58,iVar2,FUN_10019b160,local_70);
    if (iVar2 == 0) {
      iVar2 = 0;
      if ((char)local_34 == '\0' && *(code **)(param_2 + 2) != (code *)0x0) {
        iVar2 = 0;
        (**(code **)(param_2 + 2))(0x646f6e65,0,0,param_2 + 4);
      }
    }
  }
  FUN_10017060f(local_40);
  return iVar2;
}

