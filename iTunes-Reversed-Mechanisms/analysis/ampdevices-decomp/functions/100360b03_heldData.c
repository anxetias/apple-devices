// name: heldData
// address: 100360b03

/* Function Stack Size: 0x10 bytes */

__CFData * ITFileDataHoldingURL::heldData(ID param_1,SEL param_2)

{
  return *(__CFData **)(param_1 + mHeldData);
}

