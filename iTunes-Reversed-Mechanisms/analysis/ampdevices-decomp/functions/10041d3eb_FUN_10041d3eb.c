// name: FUN_10041d3eb
// address: 10041d3eb

undefined1
FUN_10041d3eb(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,uint param_5,
             char param_6,char param_7)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [20];
  int local_7c;
  undefined1 local_78 [16];
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_7c = param_4;
  FUN_1001b7a44(local_68);
  uVar2 = FUN_100416f20(param_2,(param_5 & 0xff) + 0x10cc00ea);
  FUN_1001b81f2(local_68,uVar2);
  FUN_1001bbec4(local_b0,local_68,param_3);
  FUN_1001b7a50(local_68);
  FUN_1001b7a44(local_78);
  if (param_7 == '\0') {
    if (param_6 != '\0') goto LAB_10041d4c6;
  }
  else {
    FUN_1001c334a(local_68,0x10cf002a);
    FUN_1001b80b2(local_78,local_68);
    FUN_1001b7a50(local_68);
    if (param_6 != '\0') {
      FUN_1001b7b04(local_68," ");
      FUN_1001bbcfe(local_78,local_68);
      FUN_1001b7a50(local_68);
LAB_10041d4c6:
      FUN_1001c334a(local_68,0x10cf0028);
      FUN_1001bbcfe(local_78,local_68);
      FUN_1001b7a50(local_68);
    }
  }
  FUN_1001c334a(local_a0,(param_5 & 0xff) * 2 + 0x10cf0011);
  FUN_1001c334a(local_90,0x5db30004);
  local_48 = (long *)0x0;
  sVar1 = FUN_10044fcd7(local_b0,local_78,local_a0,local_90,param_1,local_68);
  if (local_48 == local_68) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_10041d561;
  }
  (**(code **)(*local_48 + lVar3))();
LAB_10041d561:
  FUN_1001b7a50(local_90);
  FUN_1001b7a50(local_a0);
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(local_b0);
  uVar4 = sVar1 == 1;
  if (local_7c != 0 && (bool)uVar4) {
    uVar4 = FUN_10041ed7b(param_1,param_2,param_3,local_7c,1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

