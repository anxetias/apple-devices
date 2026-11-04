// name: FUN_10045331a
// address: 10045331a

void FUN_10045331a(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllObjects_10088c650);
  (*(code *)PTR__objc_release_10082c7b0)(*(undefined8 *)(param_1 + 0x20));
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != puVar1) {
    do {
      FUN_10017060f(*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    puVar2 = *(undefined8 **)(param_1 + 8);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}

