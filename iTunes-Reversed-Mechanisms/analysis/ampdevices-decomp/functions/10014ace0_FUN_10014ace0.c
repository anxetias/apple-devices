// name: FUN_10014ace0
// address: 10014ace0

void FUN_10014ace0(undefined8 *param_1)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  *param_1 = &PTR_FUN_10083af20;
  FUN_1001b7a44(param_1 + 1);
  FUN_10032f0f2(param_1 + 3);
  *(undefined1 *)(param_1 + 5) = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1001ea62b();
  FUN_1001e0d0f(local_38,&local_48,0x10,0,0);
  FUN_1001b80b2(param_1 + 1,local_38);
  FUN_1001b7a50(local_38);
  return;
}

