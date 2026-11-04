// name: FUN_1001f01a7
// address: 1001f01a7

void FUN_1001f01a7(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_2 != (undefined8 *)0x0) {
    local_68 = *param_2;
    uStack_60 = param_2[1];
    local_58 = *(undefined4 *)(param_2 + 2);
    uStack_54 = *(undefined4 *)((long)param_2 + 0x14);
    uStack_50 = *(undefined4 *)(param_2 + 3);
    uStack_4c = *(undefined4 *)((long)param_2 + 0x1c);
    local_48 = *(undefined4 *)(param_2 + 4);
    uStack_44 = *(undefined4 *)((long)param_2 + 0x24);
    uStack_40 = *(undefined4 *)(param_2 + 5);
    uStack_3c = *(undefined4 *)((long)param_2 + 0x2c);
    local_38 = *(undefined4 *)(param_2 + 6);
    uStack_34 = *(undefined4 *)((long)param_2 + 0x34);
    uStack_30 = *(undefined4 *)(param_2 + 7);
    uStack_2c = *(undefined4 *)((long)param_2 + 0x3c);
    local_20 = 0;
    uStack_18 = 0;
    FUN_1001ef9c4(param_1,&local_68,1);
    return;
  }
  FUN_1001ef9c4(param_1,0,1);
  return;
}

