// name: FUN_1001b90dc
// address: 1001b90dc

undefined8 FUN_1001b90dc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 local_88;
  undefined8 *local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  long local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_40;
  undefined8 *local_38;
  long local_30;
  undefined8 *local_28;
  
  local_88 = 0;
  local_68 = param_1;
  puVar1 = operator_new(0x12,(nothrow_t *)PTR_nothrow_10082c970);
  *puVar1 = 2;
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined1 *)((long)puVar1 + 0xe) = 0;
  *(undefined2 *)((long)puVar1 + 0xc) = 0x2e25;
  local_80 = puVar1;
  FUN_1001bb78a(local_78,"%lld",(long)param_3);
  local_60 = 0;
  LOCK();
  *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  UNLOCK();
  local_58 = puVar1;
  FUN_1001bbcfe(&local_60,local_78);
  local_50 = 0;
  local_48 = operator_new(0x11,(nothrow_t *)PTR_nothrow_10082c970);
  *local_48 = 1;
  *(undefined4 *)(local_48 + 1) = 1;
  *(undefined2 *)((long)local_48 + 0xc) = 0x66;
  local_30 = local_60;
  local_28 = local_58;
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
    UNLOCK();
  }
  FUN_1001bbcfe(&local_30,&local_50);
  FUN_1001b811c(&local_50);
  FUN_1001b811c(&local_60);
  FUN_1001b811c(local_78);
  FUN_1001b811c(&local_88);
  local_40 = local_30;
  local_38 = local_28;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + 1;
    UNLOCK();
  }
  FUN_1001bb630(local_68,param_2,&local_40);
  FUN_1001b811c(&local_40);
  FUN_1001b811c(&local_30);
  return param_2;
}

