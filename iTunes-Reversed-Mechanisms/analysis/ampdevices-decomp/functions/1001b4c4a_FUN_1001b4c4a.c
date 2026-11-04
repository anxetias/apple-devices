// name: FUN_1001b4c4a
// address: 1001b4c4a

void FUN_1001b4c4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10083cad0;
  _CGImageRelease(param_1[9]);
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

