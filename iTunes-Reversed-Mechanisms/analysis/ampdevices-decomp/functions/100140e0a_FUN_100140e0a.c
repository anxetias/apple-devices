// name: FUN_100140e0a
// address: 100140e0a

void FUN_100140e0a(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  (**(code **)(*param_1 + 0xf0))();
  iVar2 = (**(code **)(*param_1 + 0x80))(param_1);
  if (iVar2 == 1) {
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (cVar1 != '\0') {
      FUN_1001b7b04(local_48,"guid");
      FUN_10032f174(local_38);
      FUN_10012a852(param_3,local_48,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001b7a50(local_48);
      FUN_1001b7b04(local_48,"uuid");
      FUN_1001eb76c(local_38);
      FUN_10012a852(param_3,local_48,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001b7a50(local_48);
    }
    (**(code **)(*param_1 + 0xe8))(param_1,param_2,param_3,param_4);
  }
  return;
}

