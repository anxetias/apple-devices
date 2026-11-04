// name: FUN_100186527
// address: 100186527

undefined1
FUN_100186527(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  char local_77;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_58 = param_5;
  local_50 = param_1;
  FUN_1001c62d9(&local_98,0x40);
  local_80 = local_58;
  local_68 = param_7;
  local_60 = param_8;
  local_98 = param_2;
  local_90 = param_3;
  local_88 = param_4;
  local_70 = param_6;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  iVar1 = (**(code **)(local_50 + 0x30))(0x66696c74,&local_98,*(undefined8 *)(local_50 + 0x38));
  if ((iVar1 == 0) && (local_77 == '\0')) {
    FUN_1001c631b(local_38,param_6,0x420);
    FUN_1001c631b(local_40,param_7,0x50);
    FUN_1001e1c39(local_48,param_8);
  }
  if (iVar1 != 0) {
    local_78 = 0;
  }
  return local_78;
}

