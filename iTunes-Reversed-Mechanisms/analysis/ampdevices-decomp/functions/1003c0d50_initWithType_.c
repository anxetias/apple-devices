// name: initWithType:
// address: 1003c0d50

/* Function Stack Size: 0x18 bytes */

ID AMPDevicesFrameworkConnection::initWithType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  ID local_20;
  undefined *local_18;
  
  local_18 = PTR_AMPDevicesFrameworkConnection_1008856e8;
  local_20 = param_1;
  IVar1 = NSObject::init((ID)&local_20,PTR_s_init_10088c4d0);
  if (IVar1 != 0) {
    *(undefined4 *)(IVar1 + 8) = 0;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_3;
    *(undefined8 *)(IVar1 + 0x20) = 0xf;
  }
  return IVar1;
}

