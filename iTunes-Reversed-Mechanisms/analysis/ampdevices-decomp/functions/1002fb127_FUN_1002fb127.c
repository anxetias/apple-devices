// name: FUN_1002fb127
// address: 1002fb127

ulong FUN_1002fb127(long param_1,undefined4 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 local_d8 [8];
  undefined4 local_d0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  ulong local_40;
  undefined4 local_34;
  
  uVar3 = 0;
  local_40 = 0;
  local_48 = param_3;
  local_34 = param_2;
  do {
    cVar1 = *(char *)(param_1 + 0xba + uVar3);
    if (((((byte)param_2 >> 1 & cVar1 == -0x80) != 0) || (cVar1 == '\0')) ||
       ((cVar1 < '\0' & (byte)local_34) != 0)) {
      *(undefined1 *)(param_1 + 0xba + uVar3) = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_1002fa385(param_1,uVar3 & 0xffffffff,local_d8);
      cVar1 = FUN_1002fa9ac(local_d8,1);
      if (cVar1 != '\0') {
        local_60 = 0;
        uStack_58 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        uVar2 = FUN_1002fa385(param_1,uVar3 & 0xffffffff,local_d8);
        if (local_48 != 0) {
          uVar2 = FUN_1005389ba(local_48,local_d0);
        }
        local_40 = CONCAT71((int7)((ulong)uVar2 >> 8),1);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 6);
  return local_40 & 0xff;
}

