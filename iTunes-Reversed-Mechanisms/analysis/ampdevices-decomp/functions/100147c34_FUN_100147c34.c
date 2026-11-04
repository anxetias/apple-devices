// name: FUN_100147c34
// address: 100147c34

void FUN_100147c34(random_device *param_1)

{
  string local_30 [16];
  void *local_20;
  
  FUN_100147c92(local_30,"/dev/urandom");
  std::random_device::random_device(param_1,local_30);
  if (((byte)local_30[0] & 1) != 0) {
    operator_delete(local_20);
  }
  return;
}

