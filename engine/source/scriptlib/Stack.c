/*
 * OpenBOR - http://www.LavaLit.com
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2011 OpenBOR Team
 */

#include "Stack.h"

void Stack_Push( Stack* stack, void* e)
{
  List_Reset(stack);
  List_InsertBefore(stack, e, NULL );
}

void Stack_Pop(Stack* stack )
{
  List_Reset(stack);
  List_Remove(stack);
}

void* Stack_Top(const Stack* stack)
{
  return List_Retrieve(stack);
}

int Stack_IsEmpty(const Stack* stack)
{
  return (List_GetSize(stack)==0);
}





