# Task 1 Neural networks
Первое практическое задание
Я дообучил модель ResNet50, предобученную на датасете ImageNet.
Я пробовал обучать на 100 эпохах, после чего стало понятно, что 30 вполне достаточно. Также пробовал lr=0.01,0.005,0.001, последний дал наилучший результат. На тестовой выборке была выбрана модель best_model.keras.