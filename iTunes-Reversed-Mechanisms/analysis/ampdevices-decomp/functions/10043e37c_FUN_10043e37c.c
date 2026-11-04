// name: FUN_10043e37c
// address: 10043e37c

void FUN_10043e37c(long param_1,undefined8 param_2)

{
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_1001c62d9(&local_38,0x18);
    local_38 = 0;
    local_30 = param_1;
    local_28 = param_2;
    _dispatch_sync_f(*(dispatch_queue_t *)(param_1 + 0x4c0),&local_38,FUN_10043e8db);
  }
  return;
}

