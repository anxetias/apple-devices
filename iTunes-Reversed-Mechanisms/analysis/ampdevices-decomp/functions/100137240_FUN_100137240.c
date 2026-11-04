// name: FUN_100137240
// address: 100137240

void FUN_100137240(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    FUN_100137278((long)param_2 + 0x68);
    std::mutex::~mutex((mutex *)((long)param_2 + 0x28));
    FUN_1001372da(param_2);
    operator_delete(param_2);
    return;
  }
  return;
}

